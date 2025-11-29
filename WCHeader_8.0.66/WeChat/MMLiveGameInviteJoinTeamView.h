@class FinderLiveAppMsgGameInvitationInfo, UIView, NSString, MMFinderLiveGameTeamInfo, MMFinderLiveTaskId, WCFinderGameLiveJumpGameGuideTipsViewController, MMUIButton, MMUILabel;

@interface MMLiveGameInviteJoinTeamView : MMPageSheetBaseView <UIGestureRecognizerDelegate, WCFinderLiveExt>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMUIButton *closeBtn;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *rankDescLabel;
@property (retain, nonatomic) MMUILabel *teamupMemberDescLabel;
@property (retain, nonatomic) MMUIButton *joinTeamButton;
@property (retain, nonatomic) MMUILabel *explainDescLabel;
@property (retain, nonatomic) MMFinderLiveGameTeamInfo *gameTeamInfo;
@property (retain, nonatomic) WCFinderGameLiveJumpGameGuideTipsViewController *tipsVC;
@property (nonatomic) unsigned int curJoinTeamMode;
@property (readonly, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) FinderLiveAppMsgGameInvitationInfo *invitationInfo;
@property (copy, nonatomic) id /* block */ showGoToGameAlertEventAction;
@property (copy, nonatomic) id /* block */ joinTeamAction;
@property (copy, nonatomic) id /* block */ rejectJoinTeamAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 invitationInfo:(id)a1;
- (void)dealloc;
- (void)initUI;
- (void)layoutSubviews;
- (void)showWithAnimated:(BOOL)a0;
- (void)fetchGameTeamInfo;
- (id)liveTask;
- (void)onJoinTeamButtonClicked;
- (void)onGetFinderLiveGameLiveTeamUpInfoWithTaskId:(id)a0 appMsgGameTeamInfo:(id)a1;
- (void)onGetFinderLiveMessage:(id)a0 taskId:(id)a1 onlineContacts:(id)a2 msgList:(id)a3 finderLiveInfo:(id)a4 onlineCount:(unsigned int)a5 liveInfoEnable:(BOOL)a6 liveClosed:(BOOL)a7 liveExtFlag:(unsigned int)a8 onlineViewCount:(unsigned int)a9 ktvPlayerCount:(unsigned int)a10 nextRequestInterval:(unsigned int)a11 currentLikeCount:(unsigned long long)a12 extraClientConfigUpdated:(BOOL)a13 liveGameData:(id)a14 respContext:(id)a15;
- (id)audienceLogReporter;
- (void).cxx_destruct;

@end
