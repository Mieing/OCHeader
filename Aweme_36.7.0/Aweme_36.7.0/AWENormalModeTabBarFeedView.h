@class UIImageView, UIView;

@interface AWENormalModeTabBarFeedView : AWENormalModeTabBarTextView

@property (retain, nonatomic) UIView *rightIndicatorContaienrView;
@property (retain, nonatomic) UIImageView *rightIndicatorImageView;
@property (nonatomic) BOOL hasUpdateRightIndicatorImageAnimating;
@property (nonatomic) BOOL updateImageAnimationDeduplication;
@property (readonly, nonatomic) BOOL hasShowRightIndicatorImage;

- (void)layoutSubviews;
- (void)awe_preferDarkTheme;
- (void)awe_preferLightTheme;
- (void)showViewScaleAnimation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })buttonContentRectInWindow;
- (void)updateRightIndicatorWithImage:(id)a0 animated:(BOOL)a1;
- (id)addRightIndicatorViewWithImage:(id)a0;
- (void)removeRightIndicatorView:(id)a0;
- (void)trySetupRightIndicatorContainerView;
- (void).cxx_destruct;

@end
