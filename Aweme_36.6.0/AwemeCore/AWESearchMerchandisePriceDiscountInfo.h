@class AWESearchMerchandiseCommonTextStruct, AWEURLModel;

@interface AWESearchMerchandisePriceDiscountInfo : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *icon;
@property (retain, nonatomic) AWESearchMerchandiseCommonTextStruct *info;

+ (id)iconJsonTransformer;
+ (id)InfoJsonTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
