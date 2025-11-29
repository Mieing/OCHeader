@class NSArray;

@interface AWEReportTypeResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *types;

+ (id)typesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
