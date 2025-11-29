@class NSArray, NSString;

@interface AWEMergedMVDetailListResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *mvTemplates;
@property (copy, nonatomic) NSString *generalPostThemeUseSameAction;

+ (id)mvTemplatesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
