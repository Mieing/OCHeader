@class UIView, AWESearchAnchorListModel, NSString, AFDRichAwemeFullPagePersonViewModel, AWEUserModel, UIImageView, UIButton, AWEAnimatedButton, AFDFullPageRecommendStickedHeaderView, UILabel;
@protocol AWEUnfollowGreetAlertLifeCycleProtocol, AWEDiscoverFeedEntranceViewProtocol;

@interface AFDRichAwemeFullPageHeaderAvatarView : UIView <AWEUserMessage>

@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) AWEAnimatedButton *relationTitleBtn;
@property (retain, nonatomic) UIView *separateView;
@property (nonatomic) BOOL isFollowAnimating;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIView<AWEDiscoverFeedEntranceViewProtocol> *discoverEntranceView;
@property (retain, nonatomic) AWESearchAnchorListModel *anchorListModel;
@property (nonatomic) BOOL isFollowStatusFriends;
@property (copy, nonatomic) id /* block */ backButtonClicked;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *trackAuthorId;
@property (copy, nonatomic) NSString *itemID;
@property (retain, nonatomic) AFDRichAwemeFullPagePersonViewModel *personViewModel;
@property (retain, nonatomic) AFDFullPageRecommendStickedHeaderView *searchBarView;
@property (weak, nonatomic) id<AWEUnfollowGreetAlertLifeCycleProtocol> target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)onDiscoverButtonClicked:(id)a0;
- (void)configWithUser:(id)a0;
- (void)backBtnClicked:(id)a0;
- (id)initWithStyle:(long long)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)addDiscoverEntranceView:(long long)a0;
- (BOOL)isFollowStatusFriends:(id)a0;
- (void)setUpUIWithViewStyle:(long long)a0;
- (void)updateRelationBtnWithAnimation:(BOOL)a0 followStatus:(long long)a1;
- (id)__getFollowRelationContext;
- (void)changeToUnfollowStatus:(long long)a0 userID:(id)a1;
- (void)updateUserName;
- (void)_executeUnfollow;
- (void)_executeFollow;
- (void)relationTitleBtnClicked:(id)a0;
- (void)configWithSearchWords:(id)a0;
- (void)showRecommendLabelWithAlpha:(double)a0;
- (void)trackSearchIconShow;
- (void).cxx_destruct;
- (id)contentView;
- (void)dealloc;

@end
