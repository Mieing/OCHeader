@class NSDictionary, AWESearchCommonEasterEggConfigModel;

@interface AWESearchCommonEasterEggModel : AWEDynamicPatchModel

@property (retain, nonatomic) AWESearchCommonEasterEggConfigModel *easterEggConfig;
@property (copy, nonatomic) NSDictionary *logData;

+ (id)easterEggConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
