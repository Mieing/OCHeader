@class UIViewController;
@protocol AWEPlayInteractionBaseViewControllerProtocol;

@interface AWEPassthroughView : UIView

@property (nonatomic) BOOL enablePassthrough;
@property (weak, nonatomic) UIViewController<AWEPlayInteractionBaseViewControllerProtocol> *container;

- (BOOL)isLocationInInteractiveView:(struct CGPoint { double x0; double x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
