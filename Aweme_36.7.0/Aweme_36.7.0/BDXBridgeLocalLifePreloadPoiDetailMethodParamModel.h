@class NSString, BDXBridgeLocalLifePreloadPoiDetailPreloadConfig, NSDictionary;

@interface BDXBridgeLocalLifePreloadPoiDetailMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *method;
@property (retain, nonatomic) BDXBridgeLocalLifePreloadPoiDetailPreloadConfig *preloadConfig;
@property (copy, nonatomic) NSDictionary *extraParams;

+ (id)requiredKeyPaths;
+ (id)preloadConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
