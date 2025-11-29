@class NSString, RTVSessionContextCaptureOperation;
@protocol RxInjector;

@interface RTVVoipContext : NSObject <RTVSessionContextPreviewProcotol>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (nonatomic) BOOL muteOnAudio;
@property (nonatomic) BOOL muteOnVideo;
@property (nonatomic) BOOL onFloatWindow;
@property (nonatomic) unsigned long long currentStatus;
@property (retain) RTVSessionContextCaptureOperation *microphone;
@property (retain) RTVSessionContextCaptureOperation *camera;
@property (nonatomic) BOOL handsfreeOn;
@property (nonatomic) BOOL onTheCall;
@property (nonatomic) BOOL disableHandsfree;
@property (nonatomic) long long availableInputsCount;
@property (nonatomic) BOOL isInBluetoothOutput;
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
- (void)p_updateCurrentStatusWithType:(unsigned long long)a0 isOn:(BOOL)a1;
- (void).cxx_destruct;

@end
