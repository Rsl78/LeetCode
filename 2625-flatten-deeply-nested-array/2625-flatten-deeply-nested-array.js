const flat = (arr, n) => {
  const flatten = (array, depth) => {
    return array.reduce((acc, val) => {
      if (Array.isArray(val) && depth > 0) {
        acc.push(...flatten(val, depth - 1));
      } else {
        acc.push(val);
      }
      return acc;
    }, []);
  };

  return flatten(arr, n);
};