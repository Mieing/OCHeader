@class UIImageView, UILabel, UIView, UIButton;
@protocol AWERVLVAppointmentViewDelegate;

@interface AWERVLVAppointmentView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UIView *seperatorView;
@property (retain, nonatomic) UILabel *subTitle;
@property (retain, nonatomic) UIButton *appointmentButton;
@property (weak, nonatomic) id<AWERVLVAppointmentViewDelegate> delegate;

- (void)didClickedButton:(id)a0;
- (void)configWithTitle:(id)a0 subTitle:(id)a1;
- (void)setAppointmentState:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
