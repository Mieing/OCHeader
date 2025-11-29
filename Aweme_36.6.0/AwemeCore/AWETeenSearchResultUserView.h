@class UIButton, AWEBillboardLabel, NSDictionary, UILabel, AWEUserModel, AWETeenUserAvatarView;

@interface AWETeenSearchResultUserView : UIView

@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) AWETeenUserAvatarView *avatarView;
@property (retain, nonatomic) AWEBillboardLabel *userNameLabel;
@property (retain, nonatomic) UIButton *tagButton;
@property (retain, nonatomic) UILabel *subscribeNumLabel;
@property (retain, nonatomic) UILabel *verifyLabel;
@property (retain, nonatomic) UIButton *subscribeButton;
@property (retain, nonatomic) NSDictionary *extra;
@property (nonatomic) BOOL isRequesting;
@property (copy, nonatomic) id /* block */ containerViewClickBlock;
@property (copy, nonatomic) id /* block */ followButtonClickBlock;

- (void)awe_themeDidChange:(long long)a0;
- (void)updateSubscribeStatus:(long long)a0 subscribedCount:(long long)a1;
- (void)configWithModel:(id)a0 extra:(id)a1;
- (void)p_containerViewClick;
- (void)p_updateBlockStatusWithStatus:(long long)a0 verifyType:(long long)a1;
- (void)searchResultClickTrackerWithButtonType:(id)a0;
- (id)followTrackerParams:(id)a0;
- (void)p_subscribeButtonClick;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
