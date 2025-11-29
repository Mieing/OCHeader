@class IESECLLDCLynxCardView;

@interface IESECPdpHeaderLynxPendantView : UIView

@property (retain, nonatomic) IESECLLDCLynxCardView *lynxView;
@property (nonatomic) double fontScaleFactor;
@property (nonatomic) long long padSplitMode;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
