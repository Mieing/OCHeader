@class MMTimer, NSString, VoipDescriptionButton, UIView;

@interface VideoVoipCSCallerView : VideoVoipCSView <IRecordPermissionCheckExt>

@property (retain, nonatomic) UIView *m_cameraPreviewView;
@property (retain, nonatomic) VoipDescriptionButton *m_forceToAudioButton;
@property (retain, nonatomic) VoipDescriptionButton *m_hangupButton;
@property (retain, nonatomic) MMTimer *m_notOnlineTimer;
@property (retain, nonatomic) MMTimer *m_actingTimer;
@property (nonatomic) unsigned int m_dotCountIncresement;
@property (nonatomic) unsigned int m_callingTimes;
@property (nonatomic) BOOL m_hasHangup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)autoUpdateMainStatusString;
- (void)updateStatusLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andContact:(id)a1 isEarMode:(BOOL)a2 andInitViewMode:(int)a3 appid:(id)a4 headUrl:(id)a5 isAllowBackCamera:(BOOL)a6 isShowCSVideo:(BOOL)a7;
- (BOOL)isCaller;
- (void)showRemoteNotOnlineTips;
- (void)checkAndShowAlertView;
- (void)viewDidLoad;
- (void)layoutCameraPreview;
- (void)viewDidLayoutSubviews;
- (void)onVideoSessionStartComplete;
- (void)call;
- (void)cancelCall;
- (void)realCancelCall;
- (void)initCameraView;
- (void)switchToAudioModeAnimation;
- (void)layoutHangupButton;
- (void)onConfirmSwitchToVoice;
- (void)onClickVideoToVoiceButton;
- (void)switchToAudioViewAnimation;
- (void)showAlertTips;
- (void)OnCall:(id)a0 ErrNo:(int)a1;
- (void)OnCallBanned:(id)a0 errNo:(int)a1 errMsg:(id)a2;
- (void)OnCallOverLoad:(id)a0 errNo:(int)a1 errMsg:(id)a2;
- (void)startCamera;
- (void)OnNoAnswer:(id)a0;
- (void)OnPreConnect:(id)a0;
- (void)OnBeAccepted:(id)a0;
- (void)OnTimeOut:(id)a0;
- (void)OnBeRejected:(id)a0;
- (void)OnBeHanguped:(id)a0;
- (void)OnBeginTalk:(id)a0;
- (void)OnTalkBrokenError:(id)a0 ErrNo:(int)a1;
- (void)OnError:(id)a0 ErrNo:(int)a1;
- (void)OnSyncError:(id)a0 ErrNo:(int)a1;
- (void)OnCallInterrupt:(id)a0;
- (void)OnAutoHangUp:(id)a0;
- (void)endCallAfterDelay:(double)a0;
- (BOOL)hasVideoVoipTalkingViewClickChangeToAudioMode;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)OnRecordDeniedByWeChat;
- (void)continueCallAction;
- (void).cxx_destruct;

@end
