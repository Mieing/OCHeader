@class UILabel, UIImageView, UIView;

@interface CJPayBackStyleBaseViewController : CJPayFullPageBaseViewController

@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UILabel *userNicknameLabel;
@property (retain, nonatomic) UIImageView *userAvatarImageView;
@property (retain, nonatomic) UIView *userInfoView;
@property (retain, nonatomic) UILabel *singleLineUserNicknameLabel;
@property (retain, nonatomic) UIImageView *singleLineUserAvatarImageView;
@property (retain, nonatomic) UIView *singleLineUserInfoView;

- (void)alertErrorWithMsg:(id)a0 clickAction:(id /* block */)a1;
- (double)halfVCContainerHeight;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)back;

@end
