@interface WeChat.WSWebViewPlugin_ExceptionHandler : WSWebViewPluginBase {
    void /* unknown type, empty encoding */ maxReloadTimes;
    void /* unknown type, empty encoding */ reloadTimes;
    void /* unknown type, empty encoding */ isReloading;
    void /* unknown type, empty encoding */ isInFault;
    void /* unknown type, empty encoding */ tipView;
    void /* unknown type, empty encoding */ curProcessFlow;
    void /* unknown type, empty encoding */ lastProcessFlow;
}

- (void)showExceptionMockView;
- (void)showReloadTip;
- (void)showFailLoadAndReentryTip;
- (void)handleEvent:(id)a0 userInfo:(id)a1;
- (BOOL)webviewCannotReuse;
- (void)handleTerminalError;
- (void)handleJSEvaluateErrorWithCode:(long long)a0 message:(id)a1;
- (void)handleFailLoadWithCode:(long long)a0 message:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
