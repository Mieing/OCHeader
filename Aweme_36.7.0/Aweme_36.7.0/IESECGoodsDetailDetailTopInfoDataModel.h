@class IESECImageBoxElement, NSArray, NSDictionary, IESECGoodsDetailDetailTagCard;

@interface IESECGoodsDetailDetailTopInfoDataModel : IESECBaseApiModel

@property (retain, nonatomic) IESECImageBoxElement *mainImage;
@property (copy, nonatomic) NSArray *topBanners;
@property (copy, nonatomic) NSArray *needWholeWidth;
@property (copy, nonatomic) NSArray *propertySKUs;
@property (copy, nonatomic) NSDictionary *propertyGroupDict;
@property (copy, nonatomic) NSArray *tableContents;
@property (retain, nonatomic) IESECGoodsDetailDetailTagCard *tagCard;

+ (id)topBannersJSONTransformer;
+ (id)tableContentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
