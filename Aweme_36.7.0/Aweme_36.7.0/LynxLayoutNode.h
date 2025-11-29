@class NSString, LynxLayoutStyle, LynxLayoutNodeManager;
@protocol LynxCustomMeasureDelegate, LynxMeasureDelegate;

@interface LynxLayoutNode : LynxComponent

@property (readonly, nonatomic) long long sign;
@property (readonly, nonatomic) NSString *tagName;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } margin;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } border;
@property (readonly, nonatomic) LynxLayoutStyle *style;
@property (weak, nonatomic) id<LynxMeasureDelegate> measureDelegate;
@property (weak, nonatomic) id<LynxCustomMeasureDelegate> customMeasureDelegate;
@property (nonatomic) LynxLayoutNodeManager *layoutNodeManager;

- (void)updateLayoutWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithSign:(long long)a0 tagName:(id)a1;
- (void)adoptNativeLayoutNode:(long long)a0;
- (void)layoutDidStart;
- (void)turboNativeLayoutNode;
- (void)layoutDidUpdate;
- (struct MeasureResult { struct CGSize { double x0; double x1; } x0; double x1; })measureWithWidth:(float)a0 widthMode:(long long)a1 height:(float)a2 heightMode:(long long)a3 finalMeasure:(BOOL)a4;
- (void)internalSetNeedsLayoutForce;
- (void).cxx_destruct;
- (void)setNeedsLayout;
- (BOOL)needsLayout;
- (BOOL)hasCustomLayout;
- (void)align;

@end
