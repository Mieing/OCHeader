@class UIView;
@protocol BDXViewContainerProtocol;

@interface AWEBatManDynamicContainer : UIView

@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *lynxView;
@property (nonatomic) BOOL hasFP;
@property (nonatomic) BOOL gestureIntercept;

- (id)shouldInterceptGesture;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
