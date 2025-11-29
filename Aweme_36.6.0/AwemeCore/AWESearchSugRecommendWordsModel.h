@class NSArray, NSString, NSDictionary;

@interface AWESearchSugRecommendWordsModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *sugList;
@property (copy, nonatomic) NSString *listType;
@property (copy, nonatomic) NSString *listTitle;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (nonatomic) unsigned long long displayCount;

+ (id)sugListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
