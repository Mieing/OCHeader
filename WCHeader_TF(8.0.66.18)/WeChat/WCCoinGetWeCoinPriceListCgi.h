@class NSString;
@protocol WCCoinGetWeCoinPriceListCgiDelegate;

@interface WCCoinGetWeCoinPriceListCgi : WCBaseCgi

@property (nonatomic) unsigned long long businessId;
@property (retain, nonatomic) NSString *currencyCode;
@property (nonatomic) unsigned int diffWecoinCount;
@property (nonatomic) unsigned int scene;
@property (weak, nonatomic) id<WCCoinGetWeCoinPriceListCgiDelegate> delegate;

- (id)init;
- (void)start;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
