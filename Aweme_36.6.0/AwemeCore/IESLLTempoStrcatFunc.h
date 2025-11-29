@interface IESLLTempoStrcatFunc : IESLLTempoExprCoreFunc

- (unsigned long long)minArgsCount;
- (unsigned long long)maxArgsCount;
- (id)symbol;
- (id)execute:(id)a0 error:(id *)a1;

@end
