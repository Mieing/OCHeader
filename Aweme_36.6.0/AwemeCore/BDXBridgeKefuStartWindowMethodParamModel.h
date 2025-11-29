@class BDXBridgeKefuStartWindowWindowConfig, NSArray;

@interface BDXBridgeKefuStartWindowMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) BDXBridgeKefuStartWindowWindowConfig *windowConfig;
@property (retain, nonatomic) NSArray *iOSFindPageTypes;

+ (id)requiredKeyPaths;
+ (id)windowConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
