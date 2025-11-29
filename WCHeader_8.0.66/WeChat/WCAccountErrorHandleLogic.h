@class AccountErrorInfo, VoicePrintVerifyLogic, BaseResponseErrMsgHandler, WCPolicyListControlLogic;
@protocol WCAccountErrorHandleLogicDelegate;

@interface WCAccountErrorHandleLogic : MMObject {
    WCPolicyListControlLogic *m_policyListLogic;
}

@property (retain, nonatomic) BaseResponseErrMsgHandler *errHandler;
@property (retain, nonatomic) AccountErrorInfo *errorInfo;
@property (retain, nonatomic) VoicePrintVerifyLogic *voicePrintVerifyLogic;
@property (weak, nonatomic) id<WCAccountErrorHandleLogicDelegate> delegate;

- (id)init;
- (void)configErrHandler;
- (BOOL)onHandleError:(id)a0;
- (void)onVoicePrintAction:(id)a0;
- (void)openPolicyListUrl:(id)a0;
- (void)openNetworkSettingPage;
- (void)onHandleErrorDone;
- (void).cxx_destruct;

@end
