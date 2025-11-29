@class UIImageView, UIView;

@interface AWEIndividualRefreshView : UIView

@property (retain, nonatomic) UIImageView *tabbarPlaceholderView;
@property (retain, nonatomic) UIView *interactionPlaceholderView;

- (void)showTabbarPlaceholder;
- (void)showInteractionPlaceholder;
- (void)loadUI;
- (void)loadTabbarPlaceholder;
- (void)loadInteractionPlaceholder;
- (void)hiddenTabbarPlaceholder;
- (void)hiddenInteractionPlaceholder;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
