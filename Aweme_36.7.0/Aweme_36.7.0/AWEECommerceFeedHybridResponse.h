@class NSArray, AWEECommerceFeedHybridPage, NSDictionary;

@interface AWEECommerceFeedHybridResponse : AWEBaseApiModel

@property (copy, nonatomic) NSArray *feed;
@property (copy, nonatomic) NSArray *infos;
@property (retain, nonatomic) AWEECommerceFeedHybridPage *page;
@property (copy, nonatomic) NSArray *awemeList;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)infosJSONTransformer;
+ (id)feedJSONTransformer;
+ (id)pageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
