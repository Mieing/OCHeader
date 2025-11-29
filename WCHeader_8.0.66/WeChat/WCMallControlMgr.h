@interface WCMallControlMgr : WCBaseControlMgr

- (unsigned int)startNewFunctionActivityPay:(id)a0 With:(id)a1 PayData:(id)a2 FirstStepToProductsView:(BOOL)a3;
- (unsigned int)startNewFunctionActivityPay:(id)a0 With:(id)a1 PayData:(id)a2;
- (unsigned int)startFunctionJumpWCMall:(id)a0 WithEvent:(id)a1 StepUrl:(id)a2;
- (unsigned int)startFunctionJumpToMobileRecharge:(id)a0;

@end
