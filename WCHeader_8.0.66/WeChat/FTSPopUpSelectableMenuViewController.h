@class UIColor, CAShapeLayer, UIView, FTSSelectableMenuView;

@interface FTSPopUpSelectableMenuViewController : MMWindowViewController

@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) FTSSelectableMenuView *menuView;
@property (retain, nonatomic) UIView *menuContainerView;
@property (retain, nonatomic) CAShapeLayer *bubbleLayer;
@property (copy, nonatomic) id /* block */ willHideCallback;
@property (copy, nonatomic) id /* block */ didHideCallback;
@property (copy, nonatomic) id /* block */ selection;
@property (retain, nonatomic) UIColor *backgroundColor;

- (id)initWithItems:(id)a0 selectedIndex:(unsigned long long)a1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)showAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)makeViewAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)hideMenuAnimated;
- (void).cxx_destruct;

@end
