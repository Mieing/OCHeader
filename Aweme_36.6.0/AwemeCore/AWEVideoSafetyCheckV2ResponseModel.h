@class NSArray;

@interface AWEVideoSafetyCheckV2ResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *result;

+ (id)resultJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
