@interface WAAsyncAndGateWorkFlow : WAWorkFlowBase

- (void)runSteps;
- (void)onStepFinish:(id)a0 isSuccess:(BOOL)a1 error:(id)a2;
- (BOOL)isAllStepSuccess;

@end
