@class NSArray;

@interface AFDLocalDataCheckResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *resultArray;

+ (id)resultArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
