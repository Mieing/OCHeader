@class AWEIMUIButtonPresenter, NSArray, AWEIMUILabelPresenter, NSString, AWEIMRecommendInvitationUserDetailPresenter;

@interface AWEIMRecommendInvitationUserContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (retain, nonatomic) AWEIMUILabelPresenter *titleLabel;
@property (retain, nonatomic) AWEIMRecommendInvitationUserDetailPresenter *userAvatarPanel;
@property (retain, nonatomic) AWEIMUIButtonPresenter *inviteButton;
@property (copy, nonatomic) NSArray *recommendUserIDs;
@property (nonatomic) BOOL cardShowHasTracked;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (id)p_imageWithColor:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_createTitleLabel;
- (void)p_createPresenter;
- (void)p_configRecommendUserList;
- (void)p_trackGroupMemberInvitationCardShow;
- (void)p_createUserAvatarPanel;
- (void)p_createInviteButton;
- (void)p_selectedUserIDsChanged:(id)a0;
- (void)p_inviteButtonTapped;
- (BOOL)p_canInviteUserRecommendUserWhenTapMsgNeedSetTime:(BOOL)a0;
- (void)p_enableInviteButton:(BOOL)a0;
- (id)p_isFriendWithUserID:(id)a0 userManager:(id)a1;
- (id)p_inviteFriends:(id)a0;
- (id)p_inviteNotFriends:(id)a0;
- (void).cxx_destruct;
- (id)displayMessage;
- (id)message;

@end
