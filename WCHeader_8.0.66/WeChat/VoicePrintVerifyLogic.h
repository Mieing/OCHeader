@class VoicePrintResourceItem, VoicePrintMgr, MMUIViewController, NSString, NSNumber, VoicePrintVerifyViewController;

@interface VoicePrintVerifyLogic : NSObject <VoicePrintVerifyViewControllerDelegate, IVoicePrintMgrExt>

@property (weak, nonatomic) MMUIViewController *fromViewController;
@property (retain, nonatomic) VoicePrintVerifyViewController *verifyViewController;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) VoicePrintMgr *voicePrintManager;
@property (retain, nonatomic) VoicePrintResourceItem *resourceItem;
@property (nonatomic) unsigned int voiceId;
@property (nonatomic) double recordingBeginTime;
@property (nonatomic, getter=isRecordingTooShort) BOOL recordingTooShort;
@property (retain, nonatomic) NSNumber *result;
@property (retain, nonatomic) NSString *randomAuthKey;
@property (nonatomic, getter=isLoggedIn) BOOL loggedIn;
@property (retain, nonatomic) NSString *loggingUsername;
@property (retain, nonatomic) NSString *loggingTicket;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)startLogicFromViewController:(id)a0 completion:(id /* block */)a1;
- (void)presentVerifyViewController;
- (void)endVerifyWithResult:(unsigned int)a0;
- (void)onMicrophonePermissionDenied;
- (void)onAudioNotActiveOrInterrupted;
- (void)onVerifyStarted;
- (void)onVerifyEnded;
- (void)onVerifyClose;
- (void)OnStartRecord;
- (void)OnGetMatchingResult:(int)a0 andVoiceId:(unsigned int)a1;
- (void)OnUploadError:(int)a0 withVoiceId:(unsigned int)a1 andMessage:(id)a2;
- (void)OnVerifyOkWithRandomKey:(id)a0 andVoiceId:(unsigned int)a1;
- (void)OnLevelMeter:(unsigned int)a0 Peak:(float)a1;
- (void).cxx_destruct;

@end
