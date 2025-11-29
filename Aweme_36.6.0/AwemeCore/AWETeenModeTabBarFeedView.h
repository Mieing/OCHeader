@class UIImageView, UIView;

@interface AWETeenModeTabBarFeedView : AWETeenModeTabBarTextView

@property (retain, nonatomic) UIView *rightIndicatorContaienrView;
@property (retain, nonatomic) UIImageView *rightIndicatorImageView;

- (void)awe_preferDarkTheme;
- (void)awe_preferLightTheme;
- (void)updateRightIndicatorWithImage:(id)a0 animated:(BOOL)a1;
- (id)addRightIndicatorViewWithImage:(id)a0;
- (void)removeRightIndicatorView:(id)a0;
- (void)trySetupRightIndicatorContainerView;
- (void).cxx_destruct;

@end
