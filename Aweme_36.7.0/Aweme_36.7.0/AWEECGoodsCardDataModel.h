@class NSString, NSDictionary;

@interface AWEECGoodsCardDataModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *promotionId;
@property (copy, nonatomic) NSDictionary *promotionInfo;
@property (copy, nonatomic) NSDictionary *recommendInfo;
@property (copy, nonatomic) NSString *link;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
