@class UIView;
@protocol IESHYContainerProtocol;

@interface IESLiveInteractDynamicContainerWrapprView : UIView

@property (weak, nonatomic) UIView<IESHYContainerProtocol> *lynxView;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
