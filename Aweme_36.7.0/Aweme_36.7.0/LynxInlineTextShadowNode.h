@interface LynxInlineTextShadowNode : LynxBaseTextShadowNode

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__251;
+ (id)__lynx_prop_config__292;
+ (id)__lynx_prop_config__633;
+ (id)__lynx_prop_config__834;
+ (id)__lynx_prop_config__1075;
+ (id)__lynx_prop_config__1346;
+ (id)__lynx_prop_config__1737;
+ (id)__lynx_prop_config__1768;
+ (id)__lynx_prop_config__1799;
+ (id)__lynx_prop_config__18110;

- (void)setBackgroundOrMaskWithDrawable:(id)a0 reset:(BOOL)a1 value:(id)a2;
- (void)setBackgroundOrMaskWithSize:(id)a0 reset:(BOOL)a1 value:(id)a2;
- (void)setBackgroundOrMaskWithPosition:(id)a0 reset:(BOOL)a1 value:(id)a2;
- (void)setBackgroundOrMaskWithRepeat:(id)a0 reset:(BOOL)a1 value:(id)a2;
- (void)setBackgroundImage:(id)a0 requestReset:(BOOL)a1;
- (void)setBackgroundSize:(id)a0 requestReset:(BOOL)a1;
- (void)setBackgroundPosition:(id)a0 requestReset:(BOOL)a1;
- (void)setBackgroundRepeat:(id)a0 requestReset:(BOOL)a1;
- (void)setBorderRadius:(id)a0 requestReset:(BOOL)a1;
- (void)setBorderTopLeftRadius:(id)a0 requestReset:(BOOL)a1;
- (void)setBorderBottomLeftRadius:(id)a0 requestReset:(BOOL)a1;
- (void)setBorderTopRightRadius:(id)a0 requestReset:(BOOL)a1;
- (void)setBorderBottomRightRadius:(id)a0 requestReset:(BOOL)a1;
- (BOOL)needsEventSet;
- (void)setVerticalAlign:(id)a0 requestReset:(BOOL)a1;
- (BOOL)isVirtual;

@end
