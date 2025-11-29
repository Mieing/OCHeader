@class NSArray, NSString;

@interface AFDSugSearchResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *wordsData;
@property (copy, nonatomic) NSString *logID;

+ (id)wordsDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
