@class UIView;
@protocol IESHYContainerProtocol, IESLiveRevenueInteractProvider;

@interface IESLiveRevenueInteractLynxComponentView : UIView

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridView;
@property (weak, nonatomic) id<IESLiveRevenueInteractProvider> provider;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
