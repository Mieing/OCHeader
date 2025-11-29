@class UIButton, NSString, UILabel, UIView, AWEIMRecommendInvitationUserDetailView;

@interface AWEIMRecommendInvitationUserTableViewCell : AWEIMSystemMessageTableViewCell <AWEIMRecommendInvitationUserDetailViewDelegate>

@property (readonly, nonatomic) UIView *backGrayView;
@property (readonly, nonatomic) UILabel *inviteTitleLabel;
@property (readonly, nonatomic) AWEIMRecommendInvitationUserDetailView *invitationUserDetailView;
@property (readonly, nonatomic) UIButton *inviteButton;
@property (nonatomic) BOOL cardShowHasTracked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)identifier;

- (void)__createComponents;
- (void)__layoutComponents;
- (void)configWithMessage:(id)a0;
- (void)__configInviteButtonWithMessage:(id)a0;
- (BOOL)__canInviteUserRecommendUserWhenTapMsg:(id)a0 needSetTime:(BOOL)a1;
- (void)__enableInviteButton:(BOOL)a0;
- (id)__isFriendWithUserID:(id)a0 userManager:(id)a1;
- (id)__inviteFriends:(id)a0;
- (id)__inviteNotFriends:(id)a0;
- (void)__inviteBtnTapped:(id)a0;
- (id)__iesMsgWithIMMsg:(id)a0;
- (void)recommendUserDetailView:(id)a0 selectedUserChanged:(id)a1;
- (void)trackGroupMemberInvitationCardShow;
- (void).cxx_destruct;
- (void)setupUI;

@end
