@class NSString, NSNumber, NSDictionary;

@interface BDXBridgePreloadSearchPoiMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *method;
@property (retain, nonatomic) NSNumber *cacheTime;
@property (copy, nonatomic) NSDictionary *extParams;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
