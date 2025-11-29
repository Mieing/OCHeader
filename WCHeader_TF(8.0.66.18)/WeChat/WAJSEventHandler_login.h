@class NSString, NSDictionary, WADataPipePerformance, NSArray, JSApiScopeConfirmWindow, WAJSContextPlugin_userAccount;

@interface WAJSEventHandler_login : WAJSEventHandler_BaseEvent <JSApiScopeConfirmWindowDelegate, WAJSContextPlugin_userAccountProtocol> {
    NSArray *_arrConfirmScope;
    JSApiScopeConfirmWindow *_confirmWindow;
    BOOL _requestInQueue;
}

@property (weak, nonatomic) WAJSContextPlugin_userAccount *userAccountInstance;
@property (nonatomic) unsigned int cgiEventId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSDictionary *dicInputParam;
@property (retain, nonatomic) WADataPipePerformance *performance;
@property (retain, nonatomic) NSString *appId;

- (void)dealloc;
- (void)mainThread_runUserAccountJSEvent:(id)a0;
- (void)onUserAccountJSEventEnd;
- (void)handleJSEvent:(id)a0;
- (id)genResultDic:(id)a0;
- (void)loginRequestWithAppID:(id)a0 scope:(id)a1;
- (void)onLoginResponse:(id)a0;
- (void)endWithTimeout;
- (void)confirmRequestWithAppID:(id)a0 scope:(id)a1;
- (void)onConfirmResponse:(id)a0;
- (void)onCgiResponse:(id)a0 forEvent:(unsigned int)a1;
- (void)continueShowConfirmViewWithAppName:(id)a0 iconURL:(id)a1 scopeInfoList:(id)a2;
- (void)showConfirmViewWithAppName:(id)a0 iconURL:(id)a1 scopeInfoList:(id)a2;
- (void)closeConfirmWindow;
- (void)onConfirmViewOKWithScope:(id)a0;
- (void)onConfirmViewCancel;
- (void)onScopeWindowConfirm:(id)a0 withScope:(id)a1;
- (void)onScopeWindowCancel:(id)a0;
- (void).cxx_destruct;

@end
