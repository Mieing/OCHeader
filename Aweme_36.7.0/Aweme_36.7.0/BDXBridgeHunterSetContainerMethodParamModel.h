@class BDXBridgeHunterSetContainerPageInteraction, BDXBridgeHunterSetContainerCommonInteraction;

@interface BDXBridgeHunterSetContainerMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) BDXBridgeHunterSetContainerCommonInteraction *commonInteraction;
@property (retain, nonatomic) BDXBridgeHunterSetContainerPageInteraction *pageInteraction;

+ (id)commonInteractionJSONTransformer;
+ (id)pageInteractionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
