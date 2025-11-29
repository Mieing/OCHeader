@class NSString;

@interface AWESpecialRichAwemeLifeCardImageSpuInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *price;
@property (copy, nonatomic) NSString *originPrice;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *spuId;
@property (copy, nonatomic) NSString *priceSuffix;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
