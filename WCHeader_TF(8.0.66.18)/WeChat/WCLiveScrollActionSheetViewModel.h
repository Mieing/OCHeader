@class MMFinderLiveTaskId;

@interface WCLiveScrollActionSheetViewModel : NSObject

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (nonatomic) BOOL isInStopState;

- (id)initWithTaskId:(id)a0;
- (BOOL)isCurrentInMainScene;
- (BOOL)isCommentEnable;
- (BOOL)isLikeEnable;
- (BOOL)isConnectMicEnabled;
- (BOOL)isRewardEnable;
- (BOOL)isShareEnable;
- (BOOL)isConcertTicket;
- (BOOL)isCommentAssistantEnable;
- (BOOL)isLiveGiftEffectOff;
- (BOOL)isCameraClosed;
- (BOOL)isMicMuted;
- (BOOL)isHiddenAudienceNameEnable;
- (BOOL)isHiddenAudienceName;
- (unsigned int)anchorSwitchFlag;
- (BOOL)isRewardAnchorOrAssistantEntrenceEnable;
- (BOOL)isLikeAnchorOrAssistantEntrenceEnable;
- (BOOL)isLiveGameTeamUpSwitchButtonEnable;
- (BOOL)isLiveGameJoinTeamEnabled;
- (BOOL)isShowEntranceForFeedbackHelp;
- (BOOL)enableDataBoardEntrance;
- (BOOL)enableShowFansGroupEntrance;
- (BOOL)canShowCreatorCenter;
- (BOOL)enableShowOpPromotionCardEntrance;
- (BOOL)enableShowTrafficEntrance;
- (BOOL)enableConnectMicEntrance;
- (BOOL)canShowVote;
- (BOOL)canShowPromote;
- (BOOL)canShowScreenShare;
- (BOOL)isLiveThemeReminderSwitchOpen;
- (BOOL)enableShowGameCanvasDebugEntrance;
- (BOOL)enableShowPerformanceAnalysisEntrance;
- (BOOL)isLiveQrCodeEnableForAnchor;
- (BOOL)isLiveQrCodeEnableForAudience;
- (BOOL)isRewardItemExpose;
- (BOOL)isAnchorCustomizeRewardEnabled;
- (BOOL)isDislikeEnable;
- (BOOL)canShowReplaySettingEntrance;
- (id)liveTask;
- (BOOL)showComplain;
- (void).cxx_destruct;

@end
