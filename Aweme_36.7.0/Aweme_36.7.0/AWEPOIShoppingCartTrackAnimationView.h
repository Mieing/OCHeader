@class AWEPOIShoppingCartCommodityView, UIView;

@interface AWEPOIShoppingCartTrackAnimationView : LynxUI

@property (retain, nonatomic) UIView *animationContainerView;
@property (retain, nonatomic) AWEPOIShoppingCartCommodityView *commdityView;

+ (void)lynxLazyLoad;
+ (id)__lynx_ui_method_config__261;
+ (id)__lynx_ui_method_config__322;
+ (id)__lynx_ui_method_config__373;

- (double)transformPxFromDp:(double)a0 isNeedTrans:(long long)a1;
- (void)preLoadImage:(id)a0 withResult:(id /* block */)a1;
- (void)cancelAnim:(id)a0 withResult:(id /* block */)a1;
- (void)startAnim:(id)a0 withResult:(id /* block */)a1;
- (void).cxx_destruct;
- (id)createView;

@end
