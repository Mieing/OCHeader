@class UIStackView, CJPayAppUserInfo, UIImageView, CJPayRecommendUserInfo, UILabel, UIView, UIButton;

@interface CJPayDyPayRecommendAccountView : UIView

@property (retain, nonatomic) UILabel *openUserTitleLabel;
@property (retain, nonatomic) UIStackView *stackList;
@property (retain, nonatomic) UIView *currentAccountBgView;
@property (retain, nonatomic) UIImageView *currentAccountAvatarView;
@property (retain, nonatomic) UILabel *currentAccountNickNameLabel;
@property (retain, nonatomic) UILabel *currentAccountTagLabel;
@property (retain, nonatomic) UIView *recommendAccountBgView;
@property (retain, nonatomic) UIView *recommendAccountDetailView;
@property (retain, nonatomic) UIImageView *recommendAccountAvatarView;
@property (retain, nonatomic) UILabel *recommendAccountNickNameLabel;
@property (retain, nonatomic) UILabel *recommendAccountMobileMaskLabel;
@property (retain, nonatomic) UILabel *recommendMsgLabel;
@property (retain, nonatomic) UIButton *changeAccountBtn;
@property (retain, nonatomic) UIView *recommendAccountVoucherBgView;
@property (retain, nonatomic) UILabel *recommendAccountVoucherLabel;
@property (retain, nonatomic) CJPayAppUserInfo *currentAppUserInfo;
@property (retain, nonatomic) CJPayRecommendUserInfo *recommendUserInfo;
@property (copy, nonatomic) id /* block */ changeAccountBlock;

- (id)getChangeAccountTrackerParams;
- (void)updateOpenAccountUI:(id)a0 currentAppUserInfo:(id)a1 recommendUserInfo:(id)a2;
- (void)p_updateUIWithSwitchStyle:(id)a0;
- (void)p_updateUIWithLoginStyle:(id)a0;
- (void)p_changeAccountDidClick;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
