@class NSString, WxaExternalInfo, WAUserAuthorizeLogic, WATransferJSAPIRuntimeModel;
@protocol WAPermissionUserAuthTaskDelegate, IWATransferProxyImplProtocol;

@interface WAPermissionUserAuthTask : NSObject <WAAuthorizeDelegate> {
    unsigned int _debugModeType;
    WxaExternalInfo *_externalInfo;
    NSString *_appID;
    NSString *_permissionAppId;
    NSString *_jsapi;
    id /* block */ _handler;
    id /* block */ _failHandler;
    unsigned long long _scene;
    WAUserAuthorizeLogic *_authorizeLogic;
    NSString *_scope;
    NSString *_scopeDescription;
    BOOL _isAllowAuth;
}

@property (retain, nonatomic) WATransferJSAPIRuntimeModel *jsapiModel;
@property (copy, nonatomic) id /* block */ transferHandler;
@property (retain, nonatomic) id<IWATransferProxyImplProtocol> transferBridge;
@property (weak, nonatomic) id<WAPermissionUserAuthTaskDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDebugModeType:(unsigned int)a0 externalInfo:(id)a1;
- (id)getAppID;
- (id)getJsapi;
- (void)setUserAuthDataWithAPPID:(id)a0 permissionAppID:(id)a1 jsapi:(id)a2 model:(id)a3 handler:(id /* block */)a4 failHandler:(id /* block */)a5 transferHandler:(id /* block */)a6 scene:(unsigned long long)a7;
- (void)runUserAuth;
- (void)onRequestAuthorizeFail:(id)a0 errNo:(unsigned int)a1;
- (void)onRequestAuthorizeOK;
- (void)onAuthorizeNeedConfirm:(id)a0 cgiResponse:(id)a1;
- (void)onAuthorizeConfirmEnd:(BOOL)a0 response:(id)a1;
- (void)onAuthorizeConfirmAccept:(id)a0 resultInfo:(id)a1;
- (void)onAuthorizeConfirmInconsistent:(id)a0 resultInfo:(id)a1;
- (void)onAuthorizeConfirmDeny:(id)a0 resultInfo:(id)a1;
- (id)getCurrentViewController;
- (id)getAuthInfo;
- (void)saveAuthInfo:(id)a0;
- (void)saveAuthInfoWithStatus:(unsigned long long)a0;
- (void)authOK;
- (void)authFailWithMessage:(id)a0 errNo:(unsigned int)a1;
- (void)taskComplete;
- (void)authFailAndCompleteTaskWithMessage:(id)a0 errNo:(unsigned int)a1;
- (void)transferAuthCompelteWithResult:(id)a0;
- (void)continueShowSheet;
- (void)showAuthorize;
- (void)showAuthSheet;
- (void).cxx_destruct;

@end
