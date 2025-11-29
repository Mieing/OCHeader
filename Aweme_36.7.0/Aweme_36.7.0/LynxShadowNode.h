@class NSDictionary, LynxUIOwner, NSRunLoop, LynxShadowNodeStyle;
@protocol LynxShadowNodeDelegate;

@interface LynxShadowNode : LynxLayoutNode {
    BOOL _needsDisplay;
    id<LynxShadowNodeDelegate> _delegate;
    NSRunLoop *_currentLayoutLooper;
    int _pointerEvents;
}

@property (readonly, weak, nonatomic) LynxUIOwner *uiOwner;
@property (readonly, nonatomic) LynxShadowNodeStyle *shadowNodeStyle;
@property (readonly, nonatomic) BOOL isDestroy;
@property (readonly, nonatomic) BOOL needsEventSet;
@property (readonly, nonatomic) int ignoreFocus;
@property (readonly, copy, nonatomic) NSDictionary *dataset;
@property (readonly, nonatomic) BOOL enableTouchPseudoPropagation;
@property (readonly, nonatomic) int eventThrough;
@property (retain, nonatomic) NSDictionary *eventSet;

+ (id)__lynx_prop_config__1111;
+ (id)__lynx_props_group_config__230;
+ (id)__lynx_prop_config__1212;
+ (id)__lynx_prop_config__1373;
+ (id)__lynx_prop_config__1484;
+ (id)__lynx_prop_config__1555;

- (int)pointerEvents;
- (void)setIgnoreFocus:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setEnableTouchPseudoPropagation:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setEventThrough:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setPointerEvents:(long long)a0 requestReset:(BOOL)a1;
- (void)setDataset:(id)a0 requestReset:(BOOL)a1;
- (id)initWithSign:(long long)a0 tagName:(id)a1;
- (id)getExtraBundle;
- (void)setUIOperation:(id)a0;
- (BOOL)supportInlineView;
- (void)setVerticalAlignOnShadowNode:(BOOL)a0 value:(id)a1;
- (void)setVerticalAlign:(id)a0 requestReset:(BOOL)a1;
- (void)internalSetNeedsLayoutForce;
- (void)setNeedsLayoutWithThreadCheckFinished;
- (id)findNonVirtualNode;
- (void)postExtraDataToUI:(id)a0;
- (void)postFrameToUI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setNeedsLayout;
- (BOOL)isVirtual;
- (id)init;
- (void)destroy;
- (void)setDelegate:(id)a0;

@end
