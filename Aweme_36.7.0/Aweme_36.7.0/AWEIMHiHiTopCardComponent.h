@class AWEIMUIImageViewPresenter, NSString, AWEIMUILabelPresenter, AWEIMUIViewPresenter;

@interface AWEIMHiHiTopCardComponent : AWEIMFlexComponent <AWEIMMessageContentInterface, AWEIMMessageListUserInfoAction, AWEIMHiHiEnterChatAction>

@property (retain, nonatomic) AWEIMUIImageViewPresenter *avatar;
@property (retain, nonatomic) AWEIMUILabelPresenter *nickname;
@property (retain, nonatomic) AWEIMUIViewPresenter *labels;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)didFetchFullDetailUser:(id)a0 fullDetailUser:(id)a1;
- (void)p_updateConstraints;
- (void)p_createPresenter;
- (void)p_transferToProfileWithUserID:(id)a0 secUserID:(id)a1 additionalParams:(id)a2;
- (void)transToUserProfile;
- (void)didFetchInterestToLabels:(id)a0 fromLabels:(id)a1;
- (void)p_createAvatar;
- (void)p_createNickName;
- (void)p_createLabels;
- (void)p_updateAvatarConstraints;
- (void)refreshPresentersWithLabels:(id)a0;
- (void).cxx_destruct;
- (id)displayMessage;
- (id)message;

@end
