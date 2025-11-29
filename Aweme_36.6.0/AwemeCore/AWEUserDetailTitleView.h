@class UILabel, AWEUserModel, AWEUserDetailIconView;

@interface AWEUserDetailTitleView : UIView

@property (nonatomic) BOOL isLoginUser;
@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) long long followStatus;
@property (nonatomic) long long followerStatus;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEUserDetailIconView *iconView;
@property (nonatomic) BOOL customerMsgEventHasSend;
@property (copy, nonatomic) id /* block */ clickFollowCallBack;
@property (copy, nonatomic) id /* block */ clickMessageCallBack;
@property (nonatomic) BOOL isFromFamiliar;

+ (Class)aAWEUserProfileMutiTargetConfigCommonAdapterClass;

- (void)refreshWithUser:(id)a0;
- (id)aAWEUserProfileMutiTargetConfigCommonAdapter;
- (void)updateSubviewStatus;
- (void)clickSelf;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)iconViewCornerRadius;
- (void)setAlpha:(double)a0;

@end
