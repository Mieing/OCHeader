@class JSEvent;

@interface WCPayJSApiGetWCPayRealnameVerifyControlLogic : WCPayControlLogic {
    JSEvent *m_jsEvent;
    long long m_enWCPayCheckAuthorityScene;
}

- (id)initWithJSEvent:(id)a0;
- (void)dealloc;
- (void)startLogic;
- (void)stopLogic;
- (void)OnCheckWCPayJsApiRequest:(id)a0 Error:(id)a1;
- (void)OnRealnameVerifyCancel:(id)a0;
- (void)OnRealnameVerifySuccess:(id)a0;
- (void).cxx_destruct;

@end
