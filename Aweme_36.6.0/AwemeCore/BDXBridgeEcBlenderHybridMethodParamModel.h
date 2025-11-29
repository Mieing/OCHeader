@class NSString, BDXBridgeEcBlenderHybridParams;

@interface BDXBridgeEcBlenderHybridMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *function;
@property (retain, nonatomic) BDXBridgeEcBlenderHybridParams *params;

+ (id)requiredKeyPaths;
+ (id)paramsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
