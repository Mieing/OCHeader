@class MMLiveOperationView, MMLiveTaskId, NSString;
@protocol MMLiveConnectMicActionDelegate;

@interface MMLiveConnectMicLogic : NSObject

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (weak, nonatomic) id<MMLiveConnectMicActionDelegate> actionDelegate;
@property (retain, nonatomic) MMLiveOperationView *operationView;
@property (retain, nonatomic) NSString *meetId;
@property (nonatomic) BOOL networkReachable;

- (id)initWithTaskId:(id)a0;
- (void)onTrtcSwitchRoleFinished;
- (void)onTrtcSwitchRoleError:(int)a0 errMsg:(id)a1;
- (void)handleUser:(id)a0 audioAvailable:(BOOL)a1;
- (void)handleUser:(id)a0 videoAvailable:(BOOL)a1;
- (void)handleRemoteUserEnterRoomWithSdkUserId:(id)a0;
- (void)handleRemoteUserLeaveRoomWithSdkUserId:(id)a0 reason:(long long)a1;
- (void)handleConnectToOtherRoomResult:(BOOL)a0 userId:(id)a1 errCode:(int)a2 errMsg:(id)a3;
- (void)handleSEIConnectMicUserInfoListUpdated:(id)a0 listChanged:(BOOL)a1;
- (void)handleSEIMicMsgInfoUpdated:(id)a0 listChanged:(BOOL)a1;
- (void)handleSEIMicTalkingUsersListUpdated:(id)a0;
- (void)handleAllUserVoiceVolume:(id)a0 totalVolume:(long long)a1;
- (void)updateOtherConnectMicAnchor:(id)a0 anchorSeiStatus:(unsigned int)a1 anchorSEIInfo:(id)a2;
- (void)handleFirstShowCdnPlayerView;
- (void)handlePlayingViaCdnChanged:(BOOL)a0;
- (void)handleSendFirstLocalAudioFrame;
- (void)handleMicDidReady;
- (void)handleAudienceLocalAudioModeChangedTo:(BOOL)a0;
- (void)handleIsViewCapturingChangedTo:(BOOL)a0;
- (void)connectMicActionForAudience;
- (void)connectMicAction;
- (void)connectMicActionWithAiAssistantInfo:(id)a0;
- (BOOL)tryStopConnectMic;
- (BOOL)audienceShouldTryStopConnectMicWhenLiveIsPaused;
- (void)enterBackground;
- (void)enterForeground;
- (void)showToastWithTitle:(id)a0;
- (void)showToastWithTitle:(id)a0 shouldVibrate:(BOOL)a1;
- (void)showErrorToastWithText:(id)a0;
- (void)showErrorToastWithText:(id)a0 shouldVibrate:(BOOL)a1;
- (void)handleConnectMicSettingUpdatedChanges:(id)a0;
- (void)handleLiveStreamServerTimeUpdated:(unsigned long long)a0;
- (void)handleAudioRoomSceneChangedTo:(unsigned long long)a0;
- (void)handleAudioRoomSEIMicMsgInfoUpdated:(id)a0 listChanged:(BOOL)a1;
- (void).cxx_destruct;

@end
