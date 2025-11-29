@class NSString, NSMutableArray;

@interface WAWorkFlowBase : NSObject <WAWorkFlowImplement> {
    NSString *_workFlowName;
    NSMutableArray *_arrStepInfo;
    id _context;
    BOOL _isStartRun;
    BOOL _isCancel;
    id /* block */ _completeHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithName:(id)a0;
- (id)workFlowName;
- (void)addStepName:(id)a0 block:(id /* block */)a1;
- (void)addStepSubWorkFlow:(id)a0;
- (void)runWithContext:(id)a0 completeHandler:(id /* block */)a1;
- (void)cancel;
- (void)runSteps;
- (void)onStepFinish:(id)a0 isSuccess:(BOOL)a1 error:(id)a2;
- (void)onWorkFlowStart;
- (void)onWorkFlowEnd;
- (BOOL)runOneStep:(id)a0;
- (void)runStepBlock:(id)a0;
- (void)runStepSubWorkFlow:(id)a0;
- (BOOL)checkFinishedStepInfo:(id)a0 getStepInfoIndex:(unsigned long long *)a1;
- (void)callCompleteHandler:(BOOL)a0 error:(id)a1;
- (void)callFail:(id)a0;
- (void)callSuccess;
- (void).cxx_destruct;

@end
