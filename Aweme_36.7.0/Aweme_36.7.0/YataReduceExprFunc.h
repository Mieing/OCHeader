@protocol YataInstanceInnerInterface;

@interface YataReduceExprFunc : IESECSliceXExprCoreFunc

@property (weak, nonatomic) id<YataInstanceInnerInterface> yataInstance;

- (unsigned long long)minArgsCount;
- (unsigned long long)maxArgsCount;
- (id)initWithYataInstance:(id)a0;
- (BOOL)needGlobalEnv;
- (id)execute:(id)a0 withGlobalEnv:(id)a1 error:(id *)a2;
- (id)parseGetNodesWithParams:(id)a0 error:(id *)a1;
- (id)parseFuncNameWithParams:(id)a0 error:(id *)a1;
- (id)parseAccumulateDictWithParams:(id)a0 error:(id *)a1;
- (id)symbol;
- (void).cxx_destruct;

@end
