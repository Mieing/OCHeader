@class NSString, NSDictionary, WAAlertModel, WADataPipePerformance, WAUserAuthorizeLogic, WAJSContextPlugin_userAccount;
@protocol IWATransferProxyImplProtocol;

@interface WAJSEventHandler_authorize : WAJSEventHandler_BaseEvent <WAAuthorizeDelegate, WAJSContextPlugin_userAccountProtocol> {
    WAUserAuthorizeLogic *_authLogic;
    BOOL _requestInQueue;
}

@property (weak, nonatomic) WAJSContextPlugin_userAccount *userAccountInstance;
@property (retain, nonatomic) WAAlertModel *alertModel;
@property (retain, nonatomic) id<IWATransferProxyImplProtocol> transferBridge;
@property (copy) NSDictionary *jsapiParams;
@property (nonatomic) BOOL showedModal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSDictionary *dicInputParam;
@property (retain, nonatomic) WADataPipePerformance *performance;
@property (retain, nonatomic) NSString *appId;

- (void)mainThread_runUserAccountJSEvent:(id)a0;
- (id)getCurrentViewController;
- (void)onRequestAuthorizeFail:(id)a0 errNo:(int)a1;
- (void)onRequestAuthorizeOK;
- (void)onAuthorizeNeedConfirm:(id)a0 cgiResponse:(id)a1;
- (void)onAuthorizeConfirmEnd:(BOOL)a0 response:(id)a1;
- (void)onAuthorizeConfirmAccept:(id)a0 resultInfo:(id)a1;
- (void)onAuthorizeConfirmInconsistent:(id)a0 resultInfo:(id)a1;
- (void)onAuthorizeConfirmDeny:(id)a0 resultInfo:(id)a1;
- (void)onUserAccountJSEventEnd;
- (void)handleJSEvent:(id)a0;
- (void)endWithResult:(id)a0;
- (void)endErrorWithMessage:(id)a0 errNo:(int)a1;
- (void)endErrorWithMessage:(id)a0 code:(int)a1 errNo:(int)a2;
- (void)endWithTimeout;
- (void)endOK;
- (void)endCancel;
- (void)startLoading:(id)a0;
- (void)stopLoading;
- (void)continueShowConfirmView;
- (void)showConfirmView;
- (void).cxx_destruct;

@end
