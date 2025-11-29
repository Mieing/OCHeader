@class AWEPaymentButtonInfo, NSString, NSArray, AWEPaymentProductPriceInfoModel, AWEPaymentMarketingInfoModel, NSNumber, AWEURLModel;

@interface AWEPaymentEntertainmentProductModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *productID;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWEURLModel *titleCoverURL;
@property (retain, nonatomic) NSArray *subTitle;
@property (retain, nonatomic) AWEURLModel *coverURL;
@property (retain, nonatomic) AWEPaymentProductPriceInfoModel *priceInfoModel;
@property (retain, nonatomic) NSNumber *salesCount;
@property (retain, nonatomic) AWEPaymentMarketingInfoModel *marketingInfoModel;
@property (copy, nonatomic) NSString *buySchema;
@property (retain, nonatomic) AWEPaymentButtonInfo *buttonInfo;
@property (retain, nonatomic) NSNumber *skuID;
@property (nonatomic) unsigned long long bizType;
@property (nonatomic) long long watchPeriod;
@property (nonatomic) BOOL fetchLatestModel;
@property (copy, nonatomic) NSString *productIDStr;
@property (copy, nonatomic) NSString *skuIDStr;
@property (nonatomic) long long hasRePurchase;
@property (nonatomic) long long hasRechargeCardBalance;
@property (copy, nonatomic) NSString *buyPanelSchema;
@property (copy, nonatomic) NSString *feedPanelSchema;
@property (nonatomic) BOOL isPersonalStrategyContent;
@property (copy, nonatomic) NSString *tradePassThrough;
@property (nonatomic) BOOL isChargeVideoOrigin;

+ (id)coverURLJSONTransformer;
+ (id)productIDJSONTransformer;
+ (id)titleCoverURLJSONTransformer;
+ (id)priceInfoModelJSONTransformer;
+ (id)marketingInfoModelJSONTransformer;
+ (id)skuIDJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
