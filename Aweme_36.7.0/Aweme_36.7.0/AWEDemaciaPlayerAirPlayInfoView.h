@class UILabel, UIButton, UIView;

@interface AWEDemaciaPlayerAirPlayInfoView : UIView

@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UILabel *deviceNameLabel;
@property (retain, nonatomic) UIButton *exitButton;
@property (retain, nonatomic) UIButton *changeDeviceButton;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *buttonGroupView;
@property (retain, nonatomic) UIView *dimView;
@property (copy, nonatomic) id /* block */ onExitButtonTapped;
@property (copy, nonatomic) id /* block */ onChangeDeviceButtonTapped;

- (void)updateWithAirPlayDeviceName:(id)a0;
- (void)setDimViewHidden:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
