@class NSString;
@protocol VoicePrintCreateViewControllerDelegate;

@interface VoicePrintCreateViewController : VoicePrintBaseViewController

@property (weak, nonatomic) id<VoicePrintCreateViewControllerDelegate> delegate;
@property (retain, nonatomic) NSString *digits;
@property (nonatomic, getter=isRecordButtonPressed) BOOL recordButtonPressed;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)showPrepareError:(id)a0 canRecover:(BOOL)a1;
- (void)prepareReset;
- (void)showCreate;
- (void)createReset;
- (void)showCreateError:(id)a0 rollback:(unsigned int)a1;
- (void)showRollbackToFirstWithWording:(id)a0;
- (void)showOK;
- (void)forceRecordButtonLift;
- (void)onClose;
- (void)onOK;
- (void)onVerifyAfterOK;
- (void)onVoiceRecordButtonTouchDown:(id)a0;
- (void)onVoiceRecordButtonTouchUp:(id)a0;
- (void)onStartRecord;
- (void)onStopRecordWithLoading:(BOOL)a0;
- (void)onVolumeChanged:(double)a0;
- (void).cxx_destruct;

@end
