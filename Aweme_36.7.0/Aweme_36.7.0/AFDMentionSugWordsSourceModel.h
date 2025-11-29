@class NSArray, NSString;

@interface AFDMentionSugWordsSourceModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *wordsArray;
@property (copy, nonatomic) NSString *queryID;

+ (id)wordsArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
