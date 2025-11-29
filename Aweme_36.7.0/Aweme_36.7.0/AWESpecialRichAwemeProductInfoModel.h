@class NSString;

@interface AWESpecialRichAwemeProductInfoModel : AWEBaseApiModel

@property (nonatomic) long long productId;
@property (nonatomic) long long commentCount;
@property (nonatomic) long long price;
@property (nonatomic) long long maxPrice;
@property (copy, nonatomic) NSString *priceDescriptionString;
@property (copy, nonatomic) NSString *salesString;
@property (copy, nonatomic) NSString *commodityId;
@property (nonatomic) long long commodityType;
@property (nonatomic) long long anchorType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
