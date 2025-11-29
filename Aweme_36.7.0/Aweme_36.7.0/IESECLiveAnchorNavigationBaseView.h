@class UILabel, UIButton, UIView;

@interface IESECLiveAnchorNavigationBaseView : UIView

@property (retain, nonatomic) UIView *wrapper;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UIView *navigationBar;
@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *secondRightButton;
@property (retain, nonatomic) UIButton *firstRightButton;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *navigationBarSeparator;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentBounds;
@property (readonly, nonatomic) double navbarHeight;
@property (nonatomic) BOOL shouldShowMaskView;
@property (retain, nonatomic) UIView *backgroundMaskView;

- (void)pushOnView:(id)a0 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completion:(id /* block */)a2;
- (void)firstRightButtonFired:(id)a0;
- (void)secondRightButtonFired:(id)a0;
- (void)pushOnView:(id)a0 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)viewDidAppear;
- (void)pop;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)setupUI;
- (void)viewDidDisappear;

@end
