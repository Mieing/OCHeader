@class MMUIViewController, NSString, VoicePrintCreateViewController, VoicePrintRecorder, VoicePrintMgr, VoicePrintEnvironmentChecker, VoicePrintResourceItem, NSNumber;

@interface VoicePrintCreateLogic : NSObject <VoicePrintCreateViewControllerDelegate, VoicePrintRecorderDelegate>

@property (weak, nonatomic) MMUIViewController *fromViewController;
@property (retain, nonatomic) VoicePrintCreateViewController *createViewController;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ closeHandler;
@property (nonatomic, getter=isFirstRecording) BOOL firstRecording;
@property (retain, nonatomic) NSNumber *result;
@property (nonatomic) BOOL needVerify;
@property (retain, nonatomic) VoicePrintMgr *voicePrintManager;
@property (retain, nonatomic) VoicePrintRecorder *recorder;
@property (retain, nonatomic) VoicePrintEnvironmentChecker *environmentChecker;
@property (retain, nonatomic) VoicePrintResourceItem *resourceItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)startLogicFromViewController:(id)a0 completion:(id /* block */)a1 closeHandler:(id /* block */)a2;
- (void)presentCreateViewController;
- (void)attemptGetResourceWithCompletion:(id /* block */)a0;
- (void)requestMicrophoneWithCompletion:(id /* block */)a0;
- (void)checkEnvironment;
- (void)showCreate;
- (void)endCreateWithResult:(unsigned int)a0;
- (void)prepare;
- (void)onCreateError;
- (void)onCreateClose;
- (void)onVerifyAfterOK;
- (void)onRecordButtonPressed;
- (void)onRecordButtonLifted;
- (id)digitTitle;
- (void)onCannotActivateAudioWithWording:(id)a0;
- (BOOL)isRecordButtonPressed;
- (void)forceRecordButtonLift;
- (void)onRecordingStart;
- (void)onRecordingStopWithLoading:(BOOL)a0;
- (void)onRecordingFailedWithError:(id)a0 rollback:(unsigned int)a1;
- (void)onRecordingFirstStepOK;
- (void)onRecordingOK;
- (void)onVolumeChanged:(double)a0;
- (void).cxx_destruct;

@end
