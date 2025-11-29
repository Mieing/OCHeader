@class UIImageView, CABasicAnimation;

@interface AWENormalModeTabBarGeneralButtonLoadingModel : NSObject

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) CABasicAnimation *spinAnim;
@property (nonatomic) BOOL enableRefresh;
@property (nonatomic) long long status;

- (void)switchToLightMode:(BOOL)a0;
- (void)hideSpinAnimation;
- (void)showSpinAnimation;
- (void).cxx_destruct;
- (id)init;

@end
