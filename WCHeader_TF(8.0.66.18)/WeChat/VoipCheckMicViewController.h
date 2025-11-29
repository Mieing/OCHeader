@class WCUIAlertView, NSString, UIImageView, StreamVoiceInputControlView, UILabel, UIButton;

@interface VoipCheckMicViewController : MMUIViewController <IRecordPermissionCheckExt, MonoServiceLogicExt, IAUAudioDeviceExt, StreamVoiceInputControlViewDelegate, WCAudioSessionExt>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *recordTipLabel;
@property (retain, nonatomic) UILabel *recordTipDescLabel;
@property (retain, nonatomic) UILabel *resultTitleLabel;
@property (retain, nonatomic) UILabel *resultDescLabel;
@property (retain, nonatomic) UIImageView *resultIconView;
@property (retain, nonatomic) UILabel *recordTipShortDescLabel;
@property (retain, nonatomic) StreamVoiceInputControlView *recordButton;
@property (retain, nonatomic) UIButton *nextStepButton;
@property (nonatomic) int recordState;
@property (nonatomic) int lastRecordState;
@property (nonatomic) BOOL isProcessForConfirmation;
@property (nonatomic) BOOL isCheckingPermission;
@property (nonatomic) BOOL isPressingRecordButton;
@property (nonatomic) unsigned long long micRmsMeterAnimationStartTime;
@property (nonatomic) unsigned long long recordStartTime;
@property (nonatomic) unsigned long long micRmsCount;
@property (nonatomic) BOOL hasPausedWXMusic;
@property (retain, nonatomic) WCUIAlertView *alertView;
@property (nonatomic) unsigned long long micRms0Count;
@property (nonatomic) unsigned long long micRms50Count;
@property (nonatomic) unsigned long long micRms300Count;
@property (nonatomic) unsigned long long micRms2000Count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (void)onReturn;
- (void)initSubviews;
- (void)checkGlobalRecordState;
- (void)updateSubviews;
- (void)realStartRecording;
- (void)checkAndStopRecording;
- (void)stopAudioDevice;
- (void)interruptedByOther;
- (void)onNextStepButtonPressed:(id)a0;
- (void)checkMicRms;
- (void)checkAndFinishRecording;
- (void)applicationWillResignActiveNotification;
- (void)viewWillDisappear:(BOOL)a0;
- (void)showAlertWithTitle:(id)a0 andMessage:(id)a1;
- (void)updateRmsMeterAnimationWithValue:(float)a0;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)onMonoServiceVoipWillStart;
- (void)onMonoServiceMultitalkWillStart;
- (void)onMonoServiceWalkieTalkieWillStart;
- (void)onMonoServiceDidEnd;
- (void)audioDeviceInputMeterLevel:(id)a0 Peak:(float)a1;
- (void)audioDeviceInputMeterLevel:(id)a0 Rms:(float)a1;
- (void)audioDeviceStartedFail:(id)a0;
- (void)userDidHoldBegin;
- (void)userDidHoldEnd:(BOOL)a0;
- (void)onStartVoiceInputFail;
- (void)onWCAudioSessionNewDeviceAvailable;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void).cxx_destruct;

@end
