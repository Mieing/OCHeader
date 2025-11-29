@class NSString, NSMutableArray, UIColor;

@interface BDXLynxTabbar : LynxUI <BDXTabbarViewEventDelegate>

@property (nonatomic) BOOL hasDataChanged;
@property (retain, nonatomic) NSMutableArray *tabItems;
@property (nonatomic) long long defaultSelectedIndex;
@property (retain, nonatomic) NSString *tabLayoutGravity;
@property (nonatomic) double tabInterSpace;
@property (retain, nonatomic) UIColor *tabIndicatorColor;
@property (nonatomic) double tabIndicatorWidth;
@property (nonatomic) double tabIndicatorHeight;
@property (nonatomic) double tabIndicatorTop;
@property (nonatomic) double borderHeight;
@property (nonatomic) double borderWidth;
@property (nonatomic) double borderMarginBottom;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UIColor *tabbarBackground;
@property (nonatomic) BOOL hideIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__5781;
+ (id)__lynx_prop_config__5832;
+ (id)__lynx_prop_config__5883;
+ (id)__lynx_prop_config__5974;
+ (id)__lynx_prop_config__6035;
+ (id)__lynx_prop_config__6096;
+ (id)__lynx_prop_config__6157;
+ (id)__lynx_prop_config__6218;
+ (id)__lynx_prop_config__6279;
+ (id)__lynx_prop_config__63310;
+ (id)__lynx_prop_config__63911;
+ (id)__lynx_prop_config__64512;
+ (id)__lynx_prop_config__65113;
+ (id)__lynx_ui_method_config__65614;

- (void)layoutDidFinished;
- (void)removeChild:(id)a0 atIndex:(long long)a1;
- (void)propsDidUpdate;
- (void)tabbarBackground:(id)a0 requestReset:(BOOL)a1;
- (void)tabIndicatorColor:(id)a0 requestReset:(BOOL)a1;
- (void)hideIndicator:(BOOL)a0 requestReset:(BOOL)a1;
- (void)tabLayoutGravity:(id)a0 requestReset:(BOOL)a1;
- (void)tabIndicatorWidth:(double)a0 requestReset:(BOOL)a1;
- (void)tabIndicatorHeight:(double)a0 requestReset:(BOOL)a1;
- (void)selectTab:(id)a0 withResult:(id /* block */)a1;
- (void)tabInterSpace:(double)a0 requestReset:(BOOL)a1;
- (void)tabIndicatorTop:(double)a0 requestReset:(BOOL)a1;
- (void)borderColor:(id)a0 requestReset:(BOOL)a1;
- (void)borderWidth:(double)a0 requestReset:(BOOL)a1;
- (void)borderHeight:(double)a0 requestReset:(BOOL)a1;
- (void)borderMarginBottom:(double)a0 requestReset:(BOOL)a1;
- (void)changeTab:(id)a0;
- (void)background:(id)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)insertChild:(id)a0 atIndex:(long long)a1;
- (id)createView;

@end
