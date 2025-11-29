@interface IESECSliceXVersionCompareFunc : IESECSliceXExprCoreFunc

- (unsigned long long)minArgsCount;
- (unsigned long long)maxArgsCount;
- (id)convertVersionPartStringToFloat:(id)a0;
- (BOOL)isStringInteger:(id)a0;
- (id)symbol;
- (id)execute:(id)a0 error:(id *)a1;

@end
