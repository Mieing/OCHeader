@class LynxTextRenderer;

@interface LynxUITextDrawParameter : NSObject

@property (retain, nonatomic) LynxTextRenderer *renderer;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } border;
@property (nonatomic) struct CGPoint { double x; double y; } overflowLayerOffset;

- (void).cxx_destruct;

@end
