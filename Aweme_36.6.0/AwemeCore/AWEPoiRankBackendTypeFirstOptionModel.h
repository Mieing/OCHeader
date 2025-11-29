@class NSString, NSArray;

@interface AWEPoiRankBackendTypeFirstOptionModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *secondBackendTypes;

+ (id)secondBackendTypesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
