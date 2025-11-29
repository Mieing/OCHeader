@interface IESECSliceXTimePackCurTimeFunc : IESECSliceXExprCoreFunc

- (unsigned long long)minArgsCount;
- (unsigned long long)maxArgsCount;
- (BOOL)needGlobalEnv;
- (id)execute:(id)a0 withGlobalEnv:(id)a1 error:(id *)a2;
- (id)symbol;

@end
