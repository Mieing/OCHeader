@class NSString, RTVSessionContextCaptureOperation;

@interface RTVSessionContext : NSObject <RTVSessionContextPreviewProcotol>

@property (nonatomic) BOOL onTheCall;
@property (nonatomic) BOOL handsfreeOn;
@property (nonatomic) BOOL disableHandsfree;
@property (nonatomic) long long availableInputsCount;
@property (nonatomic) BOOL isInBluetoothOutput;
@property (readonly, nonatomic) BOOL muteOnAudio;
@property (readonly, nonatomic) BOOL muteOnVideo;
@property (readonly, nonatomic) BOOL onFloatWindow;
@property (readonly, nonatomic) unsigned long long currentStatus;
@property (readonly) RTVSessionContextCaptureOperation *microphone;
@property (readonly) RTVSessionContextCaptureOperation *camera;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onSessionWithFloatWindow:(BOOL)a0;
- (void)applyMicrophoneOperation:(id)a0;
- (void)applyCameraOperation:(id)a0;
- (void)onSessionAudioStatusDidChanged:(BOOL)a0;
- (void)onSessionVideoStatusDidChanged:(BOOL)a0;
- (void)onSessionCoPlayWatchDidChanged:(BOOL)a0;
- (void)onSessionCoPlayGameDidChanged:(BOOL)a0;
- (void).cxx_destruct;

@end
