@class NSNumber, BDXBridgeLocalLifeUpdateTraceParamsParams;

@interface BDXBridgeLocalLifeUpdateTraceParamsMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *scope;
@property (retain, nonatomic) BDXBridgeLocalLifeUpdateTraceParamsParams *params;

+ (id)requiredKeyPaths;
+ (id)paramsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
