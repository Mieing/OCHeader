@interface BDXLynxBlurView : LynxUI {
    BOOL _shouldUpdateEffect;
}

@property (nonatomic) long long style;
@property (nonatomic) double radius;

+ (id)__lynx_prop_config__10210;
+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__671;
+ (id)__lynx_prop_config__862;
+ (id)__lynx_prop_config__883;
+ (id)__lynx_prop_config__904;
+ (id)__lynx_prop_config__925;
+ (id)__lynx_prop_config__946;
+ (id)__lynx_prop_config__967;
+ (id)__lynx_prop_config__988;
+ (id)__lynx_prop_config__1009;
+ (id)__lynx_prop_config__11111;

- (void)propsDidUpdate;
- (void)setBackgroundColor:(id)a0 requestReset:(BOOL)a1;
- (void)setBackgroundImage:(id)a0 requestReset:(BOOL)a1;
- (void)setBackgroundSize:(id)a0 requestReset:(BOOL)a1;
- (void)setBackgroundPosition:(id)a0 requestReset:(BOOL)a1;
- (void)setBackgroundRepeat:(id)a0 requestReset:(BOOL)a1;
- (void)setBackground:(id)a0 requestReset:(BOOL)a1;
- (void)setBackgroundOrigin:(id)a0 requestReset:(BOOL)a1;
- (void)setBackgroundClip:(id)a0 requestReset:(BOOL)a1;
- (void)setBlurRadius:(double)a0 requestReset:(BOOL)a1;
- (void)setBlurEffect:(id)a0 requestReset:(BOOL)a1;
- (void)setBackgroundCapInsets:(id)a0 requestReset:(BOOL)a1;
- (void)insertChild:(id)a0 atIndex:(long long)a1;
- (id)createView;

@end
