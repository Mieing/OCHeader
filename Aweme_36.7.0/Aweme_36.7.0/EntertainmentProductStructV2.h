@class UrlStructV2, NSString, MarketingInfoV2, ProductPriceInfoV2, NSMutableArray, BuyButtonStructV2;

@interface EntertainmentProductStructV2 : GPBMessage

@property (nonatomic) long long productId;
@property (nonatomic) BOOL hasProductId;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSMutableArray *subTitleArray;
@property (readonly, nonatomic) unsigned long long subTitleArray_Count;
@property (retain, nonatomic) UrlStructV2 *coverURL;
@property (nonatomic) BOOL hasCoverURL;
@property (retain, nonatomic) ProductPriceInfoV2 *priceInfo;
@property (nonatomic) BOOL hasPriceInfo;
@property (nonatomic) long long sales;
@property (nonatomic) BOOL hasSales;
@property (retain, nonatomic) MarketingInfoV2 *marketInfo;
@property (nonatomic) BOOL hasMarketInfo;
@property (copy, nonatomic) NSString *buySchema;
@property (nonatomic) BOOL hasBuySchema;
@property (retain, nonatomic) UrlStructV2 *icon;
@property (nonatomic) BOOL hasIcon;
@property (retain, nonatomic) BuyButtonStructV2 *buttonInfo;
@property (nonatomic) BOOL hasButtonInfo;
@property (nonatomic) int biz;
@property (nonatomic) BOOL hasBiz;
@property (nonatomic) long long skuId;
@property (nonatomic) BOOL hasSkuId;
@property (nonatomic) int watchPeriod;
@property (nonatomic) BOOL hasWatchPeriod;
@property (copy, nonatomic) NSString *productIdStr;
@property (nonatomic) BOOL hasProductIdStr;
@property (copy, nonatomic) NSString *skuIdStr;
@property (nonatomic) BOOL hasSkuIdStr;
@property (nonatomic) int hasRePurchase_p;
@property (nonatomic) BOOL hasHasRePurchase_p;
@property (nonatomic) int hasRechargeCardBalance_p;
@property (nonatomic) BOOL hasHasRechargeCardBalance_p;
@property (copy, nonatomic) NSString *buyPanelSchema;
@property (nonatomic) BOOL hasBuyPanelSchema;
@property (copy, nonatomic) NSString *feedBuySchema;
@property (nonatomic) BOOL hasFeedBuySchema;
@property (nonatomic) BOOL isPersonalStrategyContent;
@property (nonatomic) BOOL hasIsPersonalStrategyContent;
@property (copy, nonatomic) NSString *tradePassThrough;
@property (nonatomic) BOOL hasTradePassThrough;
@property (nonatomic) BOOL isChargeVideoOrigin;
@property (nonatomic) BOOL hasIsChargeVideoOrigin;

+ (id)descriptor;

- (id)marketInfo;

@end
