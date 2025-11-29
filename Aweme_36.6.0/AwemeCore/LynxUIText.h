@class LynxLinearGradient, LynxCALayerDelegate, LynxTextOverflowLayer, LynxTextRenderer;

@interface LynxUIText : LynxUI {
    LynxTextRenderer *_renderer;
    LynxLinearGradient *_gradient;
    LynxTextOverflowLayer *_overflow_layer;
    LynxCALayerDelegate *_delegate;
    BOOL _isHasSubSpan;
    BOOL _isDirty;
}

@property (readonly, nonatomic) LynxTextRenderer *renderer;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } overflowLayerOffset;

+ (void)lynxLazyLoad;
+ (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withParameters:(id)a1;
+ (id)__lynx_props_group_config__611;
+ (id)__lynx_ui_method_config__4252;
+ (id)__lynx_ui_method_config__4443;
+ (id)__lynx_ui_method_config__4594;

- (void)updateFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 border:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 margin:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3 withLayoutAnimation:(BOOL)a4;
- (void)onReceiveUIOperation:(id)a0;
- (BOOL)enableAsyncDisplay;
- (void)onNodeReady;
- (id)drawParameter;
- (BOOL)enableAccessibilityByDefault;
- (unsigned long long)accessibilityTraitsByDefault;
- (void)requestDisplayAsynchronsly;
- (void)requestDisplay;
- (id)getOverflowLayer;
- (void)addOverflowLayer;
- (BOOL)enableLayerRender;
- (void)updateAttachmentsFrame;
- (void)adjustContentLayerPosition;
- (void)_lynxUIRequestDisplay;
- (id)getTextBoundingRectFromBoxes:(id)a0 textRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)getHandleMap:(id)a0 textRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)getMapFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lineBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setEnableTextSelection:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setEnableCustomContextMenu:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setEnableCustomTextSelection:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setSelectionBackgroundColor:(id)a0 requestReset:(BOOL)a1;
- (void)setSelectionHandleColor:(id)a0 requestReset:(BOOL)a1;
- (void)setSelectionHandleSize:(double)a0 requestReset:(BOOL)a1;
- (void)getTextBoundingRect:(id)a0 withResult:(id /* block */)a1;
- (void)getSelectedText:(id)a0 withResult:(id /* block */)a1;
- (void)setTextSelection:(id)a0 withResult:(id /* block */)a1;
- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (void)setContext:(id)a0;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)accessibilityText;
- (struct CGSize { double x0; double x1; })frameSize;
- (id)createView;
- (void)frameDidChange;

@end
