@interface AbsLynxUIScroller : LynxUI

+ (id)__lynx_prop_config__110;
+ (id)__lynx_prop_config__131;
+ (id)__lynx_prop_config__152;
+ (id)__lynx_prop_config__173;
+ (id)__lynx_prop_config__194;
+ (id)__lynx_prop_config__215;
+ (id)__lynx_prop_config__236;
+ (id)__lynx_prop_config__257;
+ (id)__lynx_prop_config__278;
+ (id)__lynx_prop_config__299;
+ (id)__lynx_prop_config__3110;
+ (id)__lynx_prop_config__3311;
+ (id)__lynx_prop_config__3512;
+ (id)__lynx_prop_config__3713;
+ (id)__lynx_prop_config__3914;
+ (id)__lynx_prop_config__4115;
+ (id)__lynx_prop_config__4316;
+ (id)__lynx_prop_config__4517;
+ (id)__lynx_prop_config__4718;
+ (id)__lynx_prop_config__4919;

- (void)setEnableScrollMonitor:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setScrollMonitorTag:(id)a0 requestReset:(BOOL)a1;
- (void)setEnableNested:(BOOL)a0 requestReset:(BOOL)a1;
- (BOOL)notifyParent;
- (void)addScrollerDelegate:(id)a0;
- (void)setBounces:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setScrollY:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setScrollX:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setScrollOrientation:(id)a0 requestReset:(BOOL)a1;
- (void)setScrollXReverse:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setScrollYReverse:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setScrollBarEnable:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setUpperThreshold:(long long)a0 requestReset:(BOOL)a1;
- (void)setLowerThreshold:(long long)a0 requestReset:(BOOL)a1;
- (void)setScrollTop:(int)a0 requestReset:(BOOL)a1;
- (void)setScrollLeft:(int)a0 requestReset:(BOOL)a1;
- (void)setInitialScrollOffset:(int)a0 requestReset:(BOOL)a1;
- (void)setScrollToIndex:(int)a0 requestReset:(BOOL)a1;
- (void)setInitialScrollToIndex:(int)a0 requestReset:(BOOL)a1;
- (void)setEnableScroll:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setFadingEdge:(id)a0 requestReset:(BOOL)a1;
- (void)exprIOSIncreaseFrequency:(BOOL)a0 requestReset:(BOOL)a1;
- (void)scrollInto:(id)a0 alignToTop:(BOOL)a1;
- (void)scrollInto:(id)a0 isSmooth:(BOOL)a1 blockType:(id)a2 inlineType:(id)a3;
- (void)sendScrollEvent:(id)a0 scrollTop:(float)a1 scollleft:(float)a2 scrollHeight:(float)a3 scrollWidth:(float)a4 deltaX:(float)a5 deltaY:(float)a6;
- (BOOL)canScroll:(long long)a0;
- (void)scrollByX:(float)a0;
- (void)scrollByY:(float)a0;
- (void)flickX:(float)a0;
- (void)flickY:(float)a0;
- (void)removeScrollerDelegate:(id)a0;

@end
