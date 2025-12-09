// sum.js
// دي الدالة اللي عايزين نختبرها
function sum(a, b) {
  return a + b;
}

// بنعملها تصدير عشان ملف الاختبار يقدر يشوفها
module.exports = sum;
// sum.test.js
const sum = require('./sum'); // استدعاء الدالة

// تعريف الاختبار
test('adds 1 + 2 to equal 3', () => {
  // التوقع: لما أبعت 1 و 2 المفروض النتيجة تكون 3
  expect(sum(1, 2)).toBe(3);
});