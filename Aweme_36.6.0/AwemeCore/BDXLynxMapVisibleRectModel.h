@interface BDXLynxMapVisibleRectModel : BDXLynxMapBridgeModel

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgePadding;

+ (id)edgePaddingJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end
