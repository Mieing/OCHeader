@class NSArray;

@interface IESECFeedSearchBannerItemModel : IESECBaseApiModel

@property (copy, nonatomic) NSArray *words;

+ (id)wordsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
