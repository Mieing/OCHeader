@class NSArray, NSString;

@interface AWECoProduceSugResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *wordsData;
@property (copy, nonatomic) NSString *logID;

+ (id)wordsDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
