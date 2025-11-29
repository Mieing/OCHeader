@protocol GetDefaultRedPacketSkinCgiDelegate;

@interface GetDefaultRedPacketSkinCgi : WCPayBaseCgi

@property (weak, nonatomic) id<GetDefaultRedPacketSkinCgiDelegate> m_delegate;

- (id)initWithDelegate:(id)a0;
- (void)startRequest:(id)a0;
- (void)startRequestWithLocalCache:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (id)processCacheDataBeforeSetAsResponse:(id)a0;
- (void)cacheResponse:(id)a0;
- (unsigned long long)getCgiNewDNSBusinessType;
- (void).cxx_destruct;

@end
