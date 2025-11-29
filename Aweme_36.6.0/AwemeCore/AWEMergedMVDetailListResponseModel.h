@class NSArray;

@interface AWEMergedMVDetailListResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *mvTemplates;

+ (id)mvTemplatesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
