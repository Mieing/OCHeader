@class UIImageView, UILabel, AWEUserNameLabel, UIView;

@interface AWEIMVideoCommentAlertTopView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) AWEUserNameLabel *userNameLabel;
@property (retain, nonatomic) UIView *separateView;
@property (retain, nonatomic) UIImageView *verifiedLogoView;
@property (retain, nonatomic) UILabel *commentLabel;

- (void)configWithAweme:(id)a0 withComment:(id)a1;
- (id)p_verifyBadgeImageByUser:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
