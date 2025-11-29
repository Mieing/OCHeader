@class NSArray, NSString;

@interface AWETeenWordSourceModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *wordsArray;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *queryID;

+ (id)wordsArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
