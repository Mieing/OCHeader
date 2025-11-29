@class NSRunLoop, NSString, AWEBDPLynxMarkDownBundle;

@interface AWEBDPLynxMarkDownShadowNode : LynxShadowNode <LynxMeasureDelegate, LynxCustomMeasureDelegate>

@property (retain, nonatomic) AWEBDPLynxMarkDownBundle *bundle;
@property (retain, nonatomic) NSRunLoop *layoutLoop;
@property BOOL statusChanged;
@property BOOL triggerStatus;
@property (nonatomic) double lastRenderTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__784;
+ (id)__lynx_prop_config__531;
+ (id)__lynx_prop_config__612;
+ (id)__lynx_prop_config__713;
+ (id)__lynx_prop_config__845;
+ (id)__lynx_prop_config__896;

- (void)setText:(id)a0 requestReset:(BOOL)a1;
- (id)initWithSign:(long long)a0 tagName:(id)a1;
- (void)adoptNativeLayoutNode:(long long)a0;
- (struct CGSize { double x0; double x1; })measureNode:(id)a0 withWidth:(double)a1 widthMode:(long long)a2 height:(double)a3 heightMode:(long long)a4;
- (struct MeasureResult { struct CGSize { double x0; double x1; } x0; double x1; })measureWithMeasureParam:(id)a0 MeasureContext:(id)a1;
- (void)alignWithAlignParam:(id)a0 AlignContext:(id)a1;
- (void)setMarkdownStyle:(id)a0 requestReset:(BOOL)a1;
- (id)getExtraBundle;
- (void)triggerNextAnimationStep;
- (void)eventBindDrawStart;
- (void)eventBindDrawEnd:(BOOL)a0;
- (void)eventBindContentParse:(id)a0;
- (void)eventBindAnimationStep:(long long)a0 maxAnimationStep:(long long)a1;
- (void)runOnLayoutLoop:(id /* block */)a0;
- (void)setFinished:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setAnimationType:(id)a0 requestReset:(BOOL)a1;
- (void)setAnimationVelocity:(long long)a0 requestReset:(BOOL)a1;
- (void)setTextSelection:(BOOL)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (void)destroy;

@end
