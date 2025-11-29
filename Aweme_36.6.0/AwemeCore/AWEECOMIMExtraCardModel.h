@class NSString, NSArray, AWEECOMIMGoodsShowPriceModel, NSDictionary;

@interface AWEECOMIMExtraCardModel : NSObject

@property (copy, nonatomic) NSString *metaId;
@property (copy, nonatomic) NSString *goodImgUrl;
@property (copy, nonatomic) NSString *goodTitle;
@property (nonatomic) long long discountPrice;
@property (nonatomic) long long sellNum;
@property (copy, nonatomic) NSString *skuOrderId;
@property (nonatomic) long long style;
@property (nonatomic) long long clickAreaType;
@property (copy, nonatomic) NSArray *importantMarketingLabels;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) AWEECOMIMGoodsShowPriceModel *showPrice;
@property (nonatomic) BOOL fromOrderPredict;
@property (copy, nonatomic) NSDictionary *viewTrackInfo;
@property (nonatomic) double generateFontSize;

+ (id)modelWithDict:(id)a0;

- (void).cxx_destruct;

@end
