@class MMTimer, NSString;
@protocol VoicePrintVerifyViewControllerDelegate;

@interface VoicePrintVerifyViewController : VoicePrintBaseViewController <WCAudioModuleDelegate>

@property (retain, nonatomic) MMTimer *timeoutTimer;
@property (weak, nonatomic) id<VoicePrintVerifyViewControllerDelegate> delegate;
@property (retain, nonatomic) NSString *digits;
@property (nonatomic, getter=isRecordButtonPressed) BOOL recordButtonPressed;
@property (nonatomic, getter=isRecording) BOOL recording;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)showAutioConflictToastWithCompletion:(id /* block */)a0;
- (void)onStartRecord;
- (void)attemptStopRecordForReason:(unsigned int)a0;
- (void)stopRecord;
- (void)onStopRecord;
- (void)showError:(id)a0 canRecover:(BOOL)a1;
- (void)showOK;
- (void)reset;
- (void)onOK;
- (void)onClose;
- (void)onTimeout;
- (void)onVoiceRecordButtonTouchDown:(id)a0;
- (void)onVoiceRecordButtonTouchUp:(id)a0;
- (void)onVolumeChanged:(double)a0;
- (void)audioModuleInterruptionBegin:(id)a0 param:(id)a1;
- (void).cxx_destruct;

@end
