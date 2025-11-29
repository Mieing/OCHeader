@class NSString, NSArray, IESLiveExecutionModule, IESLivePipelineStepError;

@interface IESLivePipelineStep : NSObject

@property (retain, nonatomic) IESLivePipelineStepError *stepError;
@property (readonly, copy, nonatomic) NSString *stage;
@property (readonly, nonatomic) IESLiveExecutionModule *execModule;
@property (readonly, nonatomic) NSArray *preInjections;
@property (readonly, nonatomic) NSArray *postInjections;
@property (readonly, nonatomic) NSArray *errorInjections;
@property (readonly, nonatomic) BOOL isAsync;

- (void)executeWithContext:(id)a0 params:(id)a1 callback:(id /* block */)a2;
- (id)initWithModule:(id)a0 stage:(id)a1 injections:(id)a2 isAsync:(BOOL)a3;
- (void)setupInjections:(id)a0;
- (void)executePreInjectionsWithContext:(id)a0 params:(id)a1;
- (id)executeModuleWithContext:(id)a0 params:(id)a1;
- (void)executePostInjectionsWithContext:(id)a0 params:(id)a1 moduleResult:(id)a2;
- (void)executeErrorInjections:(id)a0 withContext:(id)a1 params:(id)a2 moduleResult:(id)a3;
- (void)executePreInjections:(id)a0 withContext:(id)a1 params:(id)a2;
- (void)executePostInjections:(id)a0 withContext:(id)a1 params:(id)a2 moduleResult:(id)a3;
- (void)executePreInjectionAtIndex:(unsigned long long)a0 injections:(id)a1 withContext:(id)a2 params:(id)a3;
- (void)executePostInjectionAtIndex:(unsigned long long)a0 injections:(id)a1 withContext:(id)a2 params:(id)a3 moduleResult:(id)a4;
- (void).cxx_destruct;

@end
