@class NSString, AWEWebcastCodeGenProductPriceModel, NSArray;

@interface AWEWebcastCodeGenCombInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *title;
@property (nonatomic) double discount;
@property (retain, nonatomic) AWEWebcastCodeGenProductPriceModel *priceInfoModel;
@property (retain, nonatomic) AWEWebcastCodeGenProductPriceModel *discountPriceInfoModel;
@property (nonatomic) int subProductNum;
@property (copy, nonatomic) NSString *combProductId;
@property (copy, nonatomic) NSString *combSkuId;
@property (copy, nonatomic) NSArray *combSubVideosModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
