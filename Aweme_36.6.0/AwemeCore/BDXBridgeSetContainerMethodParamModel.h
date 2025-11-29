@class BDXBridgeSetContainerCommonInteraction, BDXBridgeSetContainerPageInteraction, BDXBridgeSetContainerPopupInteraction, BDXBridgeSetContainerPageUI;

@interface BDXBridgeSetContainerMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) BDXBridgeSetContainerPageUI *pageUI;
@property (retain, nonatomic) BDXBridgeSetContainerCommonInteraction *commonInteraction;
@property (retain, nonatomic) BDXBridgeSetContainerPageInteraction *pageInteraction;
@property (retain, nonatomic) BDXBridgeSetContainerPopupInteraction *popupInteraction;

+ (id)pageUIJSONTransformer;
+ (id)commonInteractionJSONTransformer;
+ (id)pageInteractionJSONTransformer;
+ (id)popupInteractionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
