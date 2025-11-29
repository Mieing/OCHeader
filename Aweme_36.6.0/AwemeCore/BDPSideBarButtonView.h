@class UILabel, BDPAppController, CAShapeLayer;

@interface BDPSideBarButtonView : UIView

@property (weak, nonatomic) BDPAppController *appController;
@property (weak, nonatomic) CAShapeLayer *pathLayer;
@property (weak, nonatomic) UILabel *descLabel;
@property (nonatomic) BOOL isHasShow;

- (void)p_sideBarButtonDidClicked;
- (void)layoutSublayersOfLayer:(id)a0;
- (void).cxx_destruct;

@end
