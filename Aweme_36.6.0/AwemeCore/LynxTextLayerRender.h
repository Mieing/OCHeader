@class NSString, LynxTextRenderer;

@interface LynxTextLayerRender : NSObject <CALayerDelegate>

@property (weak, nonatomic) LynxTextRenderer *textRenderer;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } border;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) struct CGPoint { double x; double y; } overflowOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;

@end
