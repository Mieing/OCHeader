@class AWEPaymentButtonInfo, NSString, AWEPaymentProductPriceInfoModel, AWEPaymentMarketingInfoModel, NSNumber, AWEURLModel;

@interface AWEVideoPaymentProductInfoModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *productID;
@property (copy, nonatomic) NSString *productIDStr;
@property (nonatomic) unsigned long long bizType;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWEURLModel *coverURL;
@property (retain, nonatomic) AWEPaymentProductPriceInfoModel *priceInfoModel;
@property (retain, nonatomic) AWEPaymentButtonInfo *buttonInfo;
@property (retain, nonatomic) AWEPaymentMarketingInfoModel *marketingInfoModel;

+ (id)coverURLJSONTransformer;
+ (id)priceInfoModelJSONTransformer;
+ (id)marketingInfoModelJSONTransformer;
+ (id)buttonInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
