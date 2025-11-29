@class UIColor, NSString, NSMutableArray, BDXCategoryIndicatorLineView;
@protocol BDXTabBarProTagDelegate;

@interface BDXLynxTabBarPro : LynxUI

@property (nonatomic) BOOL hasDataChanged;
@property (retain, nonatomic) BDXCategoryIndicatorLineView *lineView;
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
@property (retain, nonatomic) NSMutableArray *tabItems;
@property (weak, nonatomic) id<BDXTabBarProTagDelegate> tagDelegate;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__16011;
+ (id)__lynx_prop_config__1274;
+ (id)__lynx_prop_config__1061;
+ (id)__lynx_prop_config__1112;
+ (id)__lynx_prop_config__1223;
+ (id)__lynx_prop_config__1315;
+ (id)__lynx_prop_config__1366;
+ (id)__lynx_prop_config__1417;
+ (id)__lynx_prop_config__1468;
+ (id)__lynx_prop_config__1509;
+ (id)__lynx_prop_config__15510;
+ (id)__lynx_prop_config__16512;
+ (id)__lynx_prop_config__17013;
+ (id)__lynx_prop_config__17414;
+ (id)__lynx_prop_config__17915;
+ (id)__lynx_prop_config__18316;
+ (id)__lynx_ui_method_config__18817;

- (void)layoutDidFinished;
- (void)removeChild:(id)a0 atIndex:(long long)a1;
- (void)propsDidUpdate;
- (void)tabbarBackground:(id)a0 requestReset:(BOOL)a1;
- (void)tabIndicatorColor:(id)a0 requestReset:(BOOL)a1;
- (void)hideIndicator:(BOOL)a0 requestReset:(BOOL)a1;
- (void)tabLayoutGravity:(id)a0 requestReset:(BOOL)a1;
- (void)tabIndicatorWidth:(double)a0 requestReset:(BOOL)a1;
- (void)tabIndicatorHeight:(double)a0 requestReset:(BOOL)a1;
- (void)tabPaddingLeft:(double)a0 requestReset:(BOOL)a1;
- (void)tabPaddingRight:(double)a0 requestReset:(BOOL)a1;
- (void)hideBottomBorder:(BOOL)a0 requestReset:(BOOL)a1;
- (void)tabIndicatorRadius:(double)a0 requestReset:(BOOL)a1;
- (void)selectTab:(id)a0 withResult:(id /* block */)a1;
- (void)tabInterSpace:(double)a0 requestReset:(BOOL)a1;
- (void)tabIndicatorTop:(double)a0 requestReset:(BOOL)a1;
- (void)borderColor:(id)a0 requestReset:(BOOL)a1;
- (void)borderWidth:(double)a0 requestReset:(BOOL)a1;
- (void)borderHeight:(double)a0 requestReset:(BOOL)a1;
- (void)borderMarginBottom:(double)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)insertChild:(id)a0 atIndex:(long long)a1;
- (id)createView;

@end
