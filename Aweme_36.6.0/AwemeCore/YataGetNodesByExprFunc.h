@protocol YataInstanceInnerInterface;

@interface YataGetNodesByExprFunc : IESECSliceXExprCoreFunc

@property (weak, nonatomic) id<YataInstanceInnerInterface> yataInstance;

- (unsigned long long)minArgsCount;
- (unsigned long long)maxArgsCount;
- (id)initWithYataInstance:(id)a0;
- (BOOL)needGlobalEnv;
- (id)execute:(id)a0 withGlobalEnv:(id)a1 error:(id *)a2;
- (void)reportExprError:(id)a0 type:(unsigned long long)a1;
- (id)symbol;
- (void).cxx_destruct;

@end
