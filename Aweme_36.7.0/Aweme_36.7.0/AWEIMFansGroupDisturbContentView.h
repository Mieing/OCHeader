@class UIButton, YYLabel, UIImageView, AWEIMFansGroupDisturbContentProps, UILabel, UIView;
@protocol IESIMSwitchProtocol;

@interface AWEIMFansGroupDisturbContentView : UIView

@property (retain, nonatomic) AWEIMFansGroupDisturbContentProps *props;
@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *titleIcon;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *disturbLabel;
@property (retain, nonatomic) UIView<IESIMSwitchProtocol> *disturbSwitch;

- (void)__handleCloseButtonClicked:(id)a0;
- (void)updateWithProps:(id)a0;
- (void)__handleDisturbSwitchChanged:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
