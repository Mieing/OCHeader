@class NSArray, NSString;

@interface AWESearchSimpleSuggestResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *data;
@property (copy, nonatomic) NSString *logId;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
