@class NSString, JSApiScopeConfirmWindow;

@interface WebviewJSEventHandler_login : WebviewJSEventHandlerBase <PBMessageObserverDelegate, JSApiScopeConfirmWindowDelegate> {
    BOOL _isRunning;
    NSString *_appID;
    NSString *_state;
    JSApiScopeConfirmWindow *_confirmWindow;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)endErrorWithMessage:(id)a0;
- (void)endErrorWithMessage:(id)a0 code:(int)a1;
- (void)endOKWithData:(id)a0;
- (void)endCancel;
- (void)loginRequestWithAppID:(id)a0 scope:(id)a1 state:(id)a2 url:(id)a3;
- (void)onLoginResponse:(id)a0;
- (void)confirmRequestWithAppID:(id)a0 scope:(id)a1 state:(id)a2;
- (void)onConfirmResponse:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)startLoading:(id)a0;
- (void)stopLoading;
- (void)continueShowConfirmViewWithAppName:(id)a0 iconURL:(id)a1 scopeInfoList:(id)a2;
- (void)closeConfirmWindow;
- (void)onConfirmViewOKWithScope:(id)a0;
- (void)onConfirmViewCancel;
- (void)onScopeWindowConfirm:(id)a0 withScope:(id)a1;
- (void)onScopeWindowCancel:(id)a0;
- (void).cxx_destruct;

@end
