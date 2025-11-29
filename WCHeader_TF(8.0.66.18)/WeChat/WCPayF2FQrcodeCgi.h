@protocol WCPayF2FQrcodeCgiDelegate;

@interface WCPayF2FQrcodeCgi : WCPayBaseCgi

@property (weak, nonatomic) id<WCPayF2FQrcodeCgiDelegate> m_delegate;

- (id)initWithDelegate:(id)a0;
- (void)startRequestWithLocalCache:(BOOL)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void)cacheResponse:(id)a0;
- (void).cxx_destruct;

@end
