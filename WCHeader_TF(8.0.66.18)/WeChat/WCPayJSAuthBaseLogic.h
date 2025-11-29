@class JSEvent, NSDictionary;

@interface WCPayJSAuthBaseLogic : WCPayControlLogic

@property (retain, nonatomic) JSEvent *m_jsEvent;
@property (retain, nonatomic) NSDictionary *m_param;
@property (nonatomic) BOOL hideLoading;

- (void)dealloc;
- (id)initWithJSEvent:(id)a0 param:(id)a1;
- (void)stopLogic;
- (void)startLogic;
- (void)authFail;
- (void)authOk;
- (void)report14954:(id)a0;
- (void)OnCheckWCPayJsApiRequest:(id)a0 Error:(id)a1;
- (void).cxx_destruct;

@end
