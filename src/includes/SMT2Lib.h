
#ifndef  __SMT2LIB_UTILS__
#define  __SMT2LIB_UTILS__

#include <sstream>
#include <cstdint>
#include <string>


namespace smt2lib {

  /* Returns a string which defines the default logic and */
  /* utilies function used by the others functions (parity for example). */
  std::string init();

  /* Returns the 'bv' syntax based on a value and a size. */
  /* (_ bv<value> <size>) */
  std::string bv(uint64_t value, uint64_t regSize);

  /* This is an alias on (_ bv1 1) */
  std::string bvtrue(void);

  /* This is an alias on (_ bv0 1) */
  std::string bvfalse(void);

  /* Returns the 'bvadd' syntax. */
  /* (bvadd <op1> <op2>) */
  std::string bvadd(std::string op1, std::string op2);

  /* Returns a sign extended version to size bits of the expression. */
  std::string sx(std::string expr, uint64_t size);

  /* Returns a zero extendend version to size bits of the expression. */
  std::string zx(std::string expr, uint64_t size);

  /* Returns the 'declare' syntax based on a id symbolic variable and a bit victor. */
  std::string declare(uint64_t idSymVar, uint64_t BitVecSize);

  /* Returns the 'extract' syntax based on a reg size. */
  std::string extract(uint64_t regSize);

  /* Returns the 'extract' syntax based on a reg size. */
  std::string extract(uint64_t regSize, std::string expr);

  /* Returns the 'extract' syntax based on a high and low bit. */
  /* (extract <high> <low>) */
  std::string extract(uint64_t high, uint64_t low);

  /* Returns the 'extract' syntax based on a high, low bit and an expression. */
  /* ((extract <high> <low>)<expr>) */
  std::string extract(uint64_t high, uint64_t low, std::string expr);

  /* Returns the 'assert' syntax. */
  std::string smtAssert(std::string expr);

  /* Returns the 'ite' syntax. */
  std::string ite(std::string expr, std::string thenExpr, std::string elseExpr);

  /* Returns the 'equal' syntax. */
  /* (= <op1> <op2>) */
  std::string equal(std::string op1, std::string op2);

  /* returns the 'bvsge' syntax. */
  /* (bvsge <op1> <op2>) */
  std::string bvsge(std::string op1, std::string op2);

  /* returns the 'bvsgt' syntax. */
  /* (bvsgt <op1> <op2>) */
  std::string bvsgt(std::string op1, std::string op2);

  /* returns the 'bvsle' syntax. */
  /* (bvsle <op1> <op2>) */
  std::string bvsle(std::string op1, std::string op2);

  /* returns the 'bvslt' syntax. */
  /* (bvslt <op1> <op2>) */
  std::string bvslt(std::string op1, std::string op2);

  /* returns the 'bvuge' syntax. */
  /* (bvuge <op1> <op2>) */
  std::string bvuge(std::string op1, std::string op2);

  /* returns the 'bvugt' syntax. */
  /* (bvugt <op1> <op2>) */
  std::string bvugt(std::string op1, std::string op2);

  /* returns the 'bvule' syntax. */
  /* (bvule <op1> <op2>) */
  std::string bvule(std::string op1, std::string op2);

  /* Returns the 'bvult' syntax. */
  /* (bvult <op1> <op2>) */
  std::string bvult(std::string op1, std::string op2);

  /* Returns the 'bvxor' syntax. */
  /* (bvxor <op1> <op2>) */
  std::string bvxor(std::string op1, std::string op2);

  /* Returns the 'bvor' syntax. */
  /* (bvor <op1> <op2>) */
  std::string bvor(std::string op1, std::string op2);

  /* returns the 'bvsub' syntax. */
  /* (bvsub <op1> <op2>) */
  std::string bvsub(std::string op1, std::string op2);

  /* Returns the 'bvand' syntax. */
  /* (bvand <op1> <op2>) */
  std::string bvand(std::string op1, std::string op2);

  /* Returns the 'bvnot' syntax. */
  /* (bvnot <op1>) */
  std::string bvnot(std::string op1);

 /* Return a call to the parity_flag function.
  * Returns the parity flag of one byte. If the number of bits set to 1 is even,
  * it returns (_ bv0 1) and (_ bv1 1) otherwise. */
  std::string parityFlag(std::string expr);

  /* Returns the simplify syntax */
  std::string simplify(std::string expr);

  /* Returns the display syntax */
  std::string display(std::string expr);
}

#endif  /* !__SMTLIB2_UTILS__ */

