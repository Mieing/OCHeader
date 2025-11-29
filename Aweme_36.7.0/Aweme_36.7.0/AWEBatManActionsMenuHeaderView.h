@class UIImageView, AWEUIButton, UILabel, UIView;
@protocol AWEBatManActionsMenuHeaderViewDelegate;

@interface AWEBatManActionsMenuHeaderView : UIView

@property (weak, nonatomic) UIView *rootView;
@property (weak, nonatomic) UIImageView *avatarImgView;
@property (weak, nonatomic) UIImageView *userBenefitsImgView;
@property (weak, nonatomic) UILabel *nameLbl;
@property (weak, nonatomic) UILabel *timeLbl;
@property (weak, nonatomic) UIView *vipBackView;
@property (weak, nonatomic) UIImageView *vipArrowView;
@property (weak, nonatomic) UILabel *vipLevelLbl;
@property (weak, nonatomic) UIImageView *crownImgView;
@property (weak, nonatomic) UIView *tempUserLoginView;
@property (weak, nonatomic) UILabel *tempUserLoginLable;
@property (weak, nonatomic) UIImageView *tempUserArrowView;
@property (weak, nonatomic) AWEUIButton *loginBtn;
@property (weak, nonatomic) id<AWEBatManActionsMenuHeaderViewDelegate> delegate;

- (long long)getRandomNumber:(long long)a0 to:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isShowNewUserBenefitsIcon:(BOOL)a1 isLogin:(BOOL)a2 isTempUser:(BOOL)a3;
- (void)updateNickname:(id)a0 isTempUser:(BOOL)a1;
- (void)updateAvatarUrl:(id)a0;
- (void)updateVipState:(BOOL)a0 level:(int)a1;
- (void)onLoginButtonClicked;
- (void)createActionsMenuHeaderViewWithLoginStatus:(BOOL)a0 isShowNewUserBenefitsIcon:(BOOL)a1 userStatus:(BOOL)a2;
- (id)tempUserLoginTap;
- (id)userBenefitsButtonTapIsTempUser:(BOOL)a0;
- (void)updateNickname:(id)a0;
- (void).cxx_destruct;

@end
