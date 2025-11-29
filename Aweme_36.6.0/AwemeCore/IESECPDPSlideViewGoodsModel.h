@class NSString, NSDictionary;

@interface IESECPDPSlideViewGoodsModel : IESECBaseApiModel

@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *promotionID;
@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSString *preImageURL;
@property (nonatomic) long long minPrice;
@property (copy, nonatomic) NSString *priceStr;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL isPopCard;
@property (copy, nonatomic) NSDictionary *logExtra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
