@class AWESearchUserCardSocialCountView, NSString, UIImageView, DUXAvatar, UILabel, AWEUserModel, UIView;

@interface AWESearchSideBarUserCardCell : AWESearchSideBarBaseCell <AWEUserMessage>

@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) DUXAvatar *avatar;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UILabel *douyinIDHintLabel;
@property (retain, nonatomic) UILabel *douyinIDLabel;
@property (retain, nonatomic) UIView *homepageButtonBGView;
@property (retain, nonatomic) UIImageView *homepageButton;
@property (retain, nonatomic) AWESearchUserCardSocialCountView *getLikedCountView;
@property (retain, nonatomic) AWESearchUserCardSocialCountView *friendsCountView;
@property (retain, nonatomic) AWESearchUserCardSocialCountView *followCountView;
@property (retain, nonatomic) AWESearchUserCardSocialCountView *fansCountView;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishUpdateCurrentFullUserForReason:(unsigned long long)a0;
- (void)setupViewModel;
- (void)configWithModel:(id)a0;
- (void)trackShow;
- (void)didUpdateIMSetting:(BOOL)a0 source:(id)a1 currentModel:(id)a2;
- (id)p_commonTrackParams;
- (void)followStatusDidChange:(id)a0;
- (id)p_currentUser;
- (void)syncAwemeUserModelWithCompletion:(id /* block */)a0;
- (unsigned long long)p_clickDuration;
- (void)p_configLayout;
- (void)updateStatisticCount:(id)a0;
- (void)onClickHomepageButton:(id)a0;
- (void)onClickFriendsLabel;
- (void)onClickFollowLabel;
- (void)onClickFansLabel;
- (void)trackClickWithClickTarget:(id)a0;
- (void)trackEnterPersonalPageWithEnterMethod:(id)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addObserver;
- (void)layoutSubviews;
- (void)setupUI;
- (double)cellHeight;
- (void)updateWithModel:(id)a0;

@end
