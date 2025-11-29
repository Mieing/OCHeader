@class NSString, NSArray;

@interface BDXBridgeLocalLifeBatchPreloadPoiDetailMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSString *business;
@property (retain, nonatomic) NSArray *list;

+ (id)requiredKeyPaths;
+ (id)listJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
