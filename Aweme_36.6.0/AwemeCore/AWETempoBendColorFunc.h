@interface AWETempoBendColorFunc : IESLLTempoExprCoreFunc

- (id)bendColorFromColor:(id)a0 toColor:(id)a1 ratio:(double)a2;
- (id)parseColor:(id)a0;
- (unsigned long long)minArgsCount;
- (unsigned long long)maxArgsCount;
- (id)symbol;
- (id)execute:(id)a0 error:(id *)a1;

@end
