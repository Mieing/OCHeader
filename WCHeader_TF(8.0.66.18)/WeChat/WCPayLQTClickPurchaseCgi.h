@protocol WCPayLQTClickPurchaseCgiDelegate;

@interface WCPayLQTClickPurchaseCgi : WCPayBaseCgi

@property (weak, nonatomic) id<WCPayLQTClickPurchaseCgiDelegate> cgiDelegate;

- (id)initWithDelegate:(id)a0 request:(id)a1 useCache:(BOOL)a2;
- (void)startRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void)cacheResponse:(id)a0;
- (id)processCacheDataBeforeSetAsResponse:(id)a0;
- (void).cxx_destruct;

@end
