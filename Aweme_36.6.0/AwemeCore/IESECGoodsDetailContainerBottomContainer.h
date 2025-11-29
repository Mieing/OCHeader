@class CALayer, IESECPageInterfaceHelper;

@interface IESECGoodsDetailContainerBottomContainer : UIView

@property (retain, nonatomic) CALayer *topBorder;
@property (retain, nonatomic) IESECPageInterfaceHelper *validInterfaceHelper;

- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
