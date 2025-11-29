@protocol WCPayF2fShortTermQrcodeCgiDelegate;

@interface WCPayF2fShortTermQrcodeCgi : WCPayBaseCgi

@property (weak, nonatomic) id<WCPayF2fShortTermQrcodeCgiDelegate> m_delegate;
@property (nonatomic) long long request_scene;

- (id)initWithDelegate:(id)a0;
- (void)startWithRequest:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)failWithNetworking:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
