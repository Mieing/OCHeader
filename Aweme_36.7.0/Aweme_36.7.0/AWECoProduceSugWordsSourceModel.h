@class NSArray, NSString;

@interface AWECoProduceSugWordsSourceModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *wordsArray;
@property (copy, nonatomic) NSString *queryID;

+ (id)wordsArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
