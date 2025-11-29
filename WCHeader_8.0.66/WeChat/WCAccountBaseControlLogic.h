@class NSString, WCAccountControlData, WCAccountErrorHandleLogic;

@interface WCAccountBaseControlLogic : WCBaseControlLogic <WCAccountErrorHandleLogicDelegate, MMUIViewControllerDelegate> {
    WCAccountErrorHandleLogic *m_errorHandleLogic;
    BOOL m_bNeverAutoStop;
}

@property (readonly, nonatomic) WCAccountControlData *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0;
- (void)stopLogic;
- (void)vcBecomeFirstResponder;
- (void)vcResignFirstResponder;
- (void)startLoading;
- (void)stopLoading;
- (BOOL)onHandleError:(id)a0;
- (id)setRootviewController:(Class)a0 withData:(id)a1;
- (id)setRootviewController:(Class)a0 withData:(id)a1 forceFullScreen:(BOOL)a2;
- (void)checkStopLogic;
- (void)openMainFrame:(BOOL)a0 showStyle:(id)a1;
- (void)openMainFrame:(BOOL)a0 showStyle:(id)a1 closeFirstViewWithFadeoutAnimation:(BOOL)a2;
- (BOOL)isFromReg;
- (void)onErrorHandleLogicDone;
- (id)getViewController;
- (void).cxx_destruct;

@end
