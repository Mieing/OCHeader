@class UIWindow, AWEChallengeFilterSelectionView, UIImageView, UIView, UIViewController;
@protocol AWEChallengeFilterDelegate;

@interface AWEChallengeFilterView : UIView

@property (retain, nonatomic) UIWindow *window;
@property (retain, nonatomic) UIWindow *lastKeyWindow;
@property (retain, nonatomic) UIViewController *windowRootViewController;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *maskCoverView;
@property (retain, nonatomic) UIImageView *filterMenuBackgroundView;
@property (retain, nonatomic) UIImageView *filterMenuArrowBackgroundView;
@property (retain, nonatomic) AWEChallengeFilterSelectionView *generalSelection;
@property (retain, nonatomic) AWEChallengeFilterSelectionView *publishSelection;
@property (retain, nonatomic) AWEChallengeFilterSelectionView *likeSelection;
@property (nonatomic) BOOL isAnimating;
@property (weak, nonatomic) id<AWEChallengeFilterDelegate> delegate;

- (void)showMenuWithOriginPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)generalSelected;
- (void)publishSelected;
- (void)likeSelected;
- (void)closeMenu;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
