@class AWEIMUIImageViewPresenter, NSString, AWEIMUILabelPresenter, AWEIMUIViewPresenter;

@interface AWEIMOfficialAccountCardContentComponent : AWEIMFlexComponent <AWEIMMessageListUserInfoAction, AWEIMMessageContentInterface>

@property (retain, nonatomic) AWEIMUIImageViewPresenter *avatar;
@property (retain, nonatomic) AWEIMUIViewPresenter *nicknameContainer;
@property (retain, nonatomic) AWEIMUILabelPresenter *nickname;
@property (retain, nonatomic) AWEIMUIImageViewPresenter *roleImage;
@property (retain, nonatomic) AWEIMUIViewPresenter *roleContainer;
@property (retain, nonatomic) AWEIMUILabelPresenter *roleLabel;
@property (retain, nonatomic) AWEIMUILabelPresenter *intro;
@property (nonatomic) BOOL useDoctorCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long scene;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)didFetchFullDetailUser:(id)a0 fullDetailUser:(id)a1;
- (void)p_updateConstraints;
- (void)p_createPresenter;
- (void)p_createAvatar;
- (void)p_createNickName;
- (void)p_updateAvatarConstraints;
- (void)p_updateContents;
- (void)p_createRoleImage;
- (void)p_createRoleLabel;
- (void)p_createIntroLabel;
- (void)p_createRoleContainer;
- (void)p_createNickNameContainer;
- (void)p_updateRoleImage;
- (void)p_updateRoleLabelText;
- (void)p_updateIntroLabel;
- (void)p_updateNickNameConstraints;
- (void)p_updateRoleContainerConstraints;
- (void)p_updateRoleImageConstraints;
- (id)p_roleIconImage;
- (id)p_verifyIconImage;
- (void)p_updateRoleContainer;
- (void).cxx_destruct;
- (id)displayMessage;
- (id)message;

@end
