@class NSArray, NSString;

@interface AFDSugSearchWordsModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *wordsArray;
@property (copy, nonatomic) NSString *queryID;

+ (id)wordsArrayJSONTransformer;
+ (long long)followStatusWithFollowStatusStr:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
