@class UIImageView, UILabel, UIView;

@interface IESMultiDeviceChooseTypeView : UIView

@property (retain, nonatomic) UIImageView *deviceTypeImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *delayLabel;
@property (retain, nonatomic) UIView *delayView;

- (void)setDeviceTypeImage:(id)a0;
- (void)setTitle:(id)a0 subTitle:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnable:(BOOL)a0;
- (void)setupUI;

@end
