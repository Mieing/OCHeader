@class LynxTextRenderer;

@interface LynxTextLayerRender : NSObject

@property (weak, nonatomic) LynxTextRenderer *textRenderer;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } border;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) struct CGPoint { double x; double y; } overflowOffset;

- (void).cxx_destruct;

@end
