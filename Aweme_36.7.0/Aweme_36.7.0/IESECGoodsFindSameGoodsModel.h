@class NSString, NSNumber, IESECURLModel;

@interface IESECGoodsFindSameGoodsModel : IESECBaseApiModel

@property (copy, nonatomic) NSString *imageURLV3;
@property (retain, nonatomic) NSNumber *minPriceV3;
@property (copy, nonatomic) NSString *schemaV3;
@property (copy, nonatomic) NSString *productIDV3;
@property (retain, nonatomic) NSNumber *typeV3;
@property (retain, nonatomic) IESECURLModel *imageURLModel;
@property (retain, nonatomic) NSNumber *minPrice;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSNumber *type;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
