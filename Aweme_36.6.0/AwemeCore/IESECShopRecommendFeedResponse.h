@class NSString, NSArray;

@interface IESECShopRecommendFeedResponse : IESECBaseApiModel

@property (copy, nonatomic) NSString *recommendText;
@property (copy, nonatomic) NSArray *cards;

+ (id)cardsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
