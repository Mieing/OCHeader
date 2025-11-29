@class NSString, NSDictionary, BDXBridgeOpenHunterContainerXOpenParams;

@interface BDXBridgeOpenHunterContainerMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL useXOpen;
@property (copy, nonatomic) NSDictionary *serverData;
@property (copy, nonatomic) NSDictionary *clientData;
@property (copy, nonatomic) NSDictionary *customGlobalProps;
@property (retain, nonatomic) BDXBridgeOpenHunterContainerXOpenParams *xOpenParams;

+ (id)requiredKeyPaths;
+ (id)xOpenParamsJSONTransformer;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
