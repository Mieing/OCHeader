@protocol WCPayMchShortTermQrcodeCgiDelegate;

@interface WCPayMchShortTermQrcodeCgi : WCPayBaseCgi

@property (weak, nonatomic) id<WCPayMchShortTermQrcodeCgiDelegate> m_delegate;
@property (nonatomic) long long request_scene;

- (id)initWithDelegate:(id)a0;
- (void)startWithRequest:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)failWithNetworking:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
