@interface WeChat.WCPayJSAPIRealnameVerifyLogic : WCPayControlLogic {
    void /* unknown type, empty encoding */ tinyAppEvent;
    void /* unknown type, empty encoding */ params;
}

- (id)initWithTinyAppEvent:(id)a0 params:(id)a1;
- (void)dealloc;
- (void)startLogic;
- (void)stopLogic;
- (void)OnCheckWCPayJsApiRequest:(id)a0 Error:(id)a1;
- (void)onRealnameVerifyCancel;
- (void)OnRealnameVerifySuccessWithNotification:(id)a0;
- (id)initWithData:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
