@class AWEMusicOnboardOwnerModel, AWEUserNameLabel, UIImageView, NSString, UIView, AWEVerifiedUserViewLayoutManager, UIButton;

@interface AWESoleVerifiedUserView : UIView <AWEVerifiedUserViewProtocol>

@property (retain, nonatomic) AWEVerifiedUserViewLayoutManager *layoutManager;
@property (retain, nonatomic) UIButton *followButton;
@property (retain, nonatomic) UIButton *followButtonWithClearBackground;
@property (nonatomic) long long followStatus;
@property (nonatomic) BOOL isNewStyleForInspirationHeaderView;
@property (weak, nonatomic) AWEMusicOnboardOwnerModel *onboardModel;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *verifiedImageView;
@property (retain, nonatomic) AWEUserNameLabel *usernameLabel;
@property (retain, nonatomic) AWEUserNameLabel *verifiedNameLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *containerView;
@property (copy, nonatomic) id /* block */ followBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateFollowStatus:(long long)a0;
- (void)followButtonDidClicked:(id)a0;
- (id)initAsInspirationHeaderWith:(BOOL)a0 layoutManager:(id)a1;
- (void)configVerifiedOwnerWithVerifiedType:(unsigned long long)a0 avatarUrl:(id)a1 username:(id)a2 followStatus:(long long)a3 userModel:(id)a4;
- (id)currentFollowButton;
- (id)p_accessibilityLabel;
- (void)p_updateClearBackgroundFollowButtonStatus:(long long)a0;
- (void)p_updateFollowButtonStatus:(long long)a0;
- (void)configOnboardOwnerWithIsVerified:(BOOL)a0 avatarUrl:(id)a1 nickName:(id)a2 handle:(id)a3;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setupUI;

@end
