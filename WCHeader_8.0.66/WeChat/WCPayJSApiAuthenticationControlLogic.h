@class JSEvent;

@interface WCPayJSApiAuthenticationControlLogic : WCPayControlLogic {
    JSEvent *m_jsEvent;
    long long m_enWCPayCheckAuthorityScene;
    int m_enWCPayCheckOpenWCPayViewAuthorityScene;
}

- (id)initWithJSEvent:(id)a0 Scene:(long long)a1;
- (id)initWithJSEvent:(id)a0 Scene:(long long)a1 WithOpenViewScene:(int)a2;
- (void)startLogic;
- (void)stopLogic;
- (void)OnCheckWCPayJsApiRequest:(id)a0 Error:(id)a1;
- (void).cxx_destruct;

@end
