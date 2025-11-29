@class UIView, CAShapeLayer, WCSelectableMenuView;

@interface WCPopUpSelectableMenuViewController : MMWindowViewController

@property (retain, nonatomic) WCSelectableMenuView *menuView;
@property (retain, nonatomic) UIView *menuContainerView;
@property (retain, nonatomic) CAShapeLayer *bubbleLayer;
@property (nonatomic) double minHorizonMargin;
@property (copy, nonatomic) id /* block */ willHideCallback;
@property (copy, nonatomic) id /* block */ didHideCallback;
@property (copy, nonatomic) id /* block */ selection;

- (id)initWithItems:(id)a0 selectedIndex:(unsigned long long)a1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)showAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)makeViewAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)hideMenuAnimated;
- (void).cxx_destruct;

@end
