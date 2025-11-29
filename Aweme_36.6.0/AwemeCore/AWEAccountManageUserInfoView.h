@class DUXAvatar, UILabel, UIButton;

@interface AWEAccountManageUserInfoView : UIView

@property (retain, nonatomic) DUXAvatar *avatarView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UILabel *douyinIdLabel;
@property (retain, nonatomic) UIButton *switchAccountButton;
@property (retain, nonatomic) UIButton *qrCodeButton;

- (void)qrCodeButtonTapped;
- (void)switchAccountButtonTapped;
- (void)douyinIdLabelTapped;
- (void)trackAccountManageClick;
- (void)copyIdString:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (id)idStr;

@end
