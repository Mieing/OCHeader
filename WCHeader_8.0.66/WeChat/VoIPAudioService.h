@class NSString, WCVolumeController;

@interface VoIPAudioService : MMUserService <WCAudioSessionExt, WCAudioModuleDelegate, IAUAudioDeviceExt, WCAudioSessionExt, WCAVAudioSessionSwizzleExtension, MMServiceProtocol>

@property (nonatomic) BOOL isWorking;
@property (nonatomic) BOOL isActived;
@property (nonatomic) unsigned long long audioDeviceModeBeforeClosing;
@property (nonatomic) unsigned long long currentDeviceMode;
@property (nonatomic) BOOL isCallKit;
@property (nonatomic) int audioUnitStartUpCount;
@property (nonatomic) int audioUnitStartUpAtFirstFailedCount;
@property (nonatomic) int audioUnitStartUpFailedCount;
@property (nonatomic) int audioUnitInterruptionCount;
@property (nonatomic) unsigned long long audioUnitStartUpAtFirstTimestamp;
@property (nonatomic) unsigned long long audioUnitRecvCallbackAtFirstTimestamp;
@property (nonatomic) unsigned long long audioUnitReceivePlaybackCallbackFirst;
@property (nonatomic) unsigned long long audioUnitReceiveRecordingCallbackFirst;
@property (nonatomic) BOOL hasAudioUnitCallbackFirst;
@property (nonatomic) BOOL hasAudioUnitCallbackFirstEachStartup;
@property (nonatomic) BOOL isInBackground;
@property (copy, nonatomic) id /* block */ resumeAfterInterruptionBlock;
@property (retain, nonatomic) WCVolumeController *volumnController;
@property (nonatomic) BOOL isInterruptingByAudioModule;
@property (nonatomic) unsigned long long roomID;
@property (nonatomic) long long roomKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loadStatusWithRouteChange:(id)a0 completion:(id /* block */)a1 callbackInMainThead:(BOOL)a2;
+ (void)loadStatusWithCompletion:(id /* block */)a0 callbackInMainThead:(BOOL)a1;

- (void)loadVolumeControllerWithCompletion:(id /* block */)a0;
- (void)clearResumeAfterInterruptionBlock;
- (BOOL)openIfIsCallKit:(BOOL)a0;
- (void)closeWithReset:(BOOL)a0;
- (void)start;
- (void)stop;
- (unsigned long long)audioDeviceModeInLastTalk;
- (BOOL)isUsingBuiltInReceiverInLastTalk;
- (BOOL)isUsingEarDeviceInLastTalk;
- (void)refreshStatusWithRouteChange:(id)a0;
- (void)refreshStatus;
- (void)receiveAudioUnitCallbackFirst;
- (void)receiveAudioUnitCallbackFirstEachStartup;
- (id)init;
- (void)dealloc;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onWCAudioSessionRouteChange:(id)a0 reasonValue:(unsigned long long)a1;
- (void)onWCAudioSessionSetActive:(BOOL)a0;
- (void)audioModuleInterruptionBegin:(id)a0 param:(id)a1;
- (void)audioModuleInterruptionEnd:(id)a0 param:(id)a1;
- (void)audioModuleDidRemoveFromInterruptList:(id)a0;
- (void)audioDeviceWillStart:(id)a0;
- (void)audioDeviceStartedFail:(id)a0;
- (void)audioDeviceStartedSuccess:(id)a0;
- (void)audioDeviceAudioServiceWillPrewarmAudioUnit;
- (void)audioDeviceAudioServiceDidPrewarmAudioUnit;
- (void)audioDeviceDidReceivePlaybackCallbackFirst:(id)a0;
- (void)audioDeviceDidReceiveRecordingCallbackFirst:(id)a0;
- (void)audioDeviceDidReceivePlaybackCallbackFirstEachStartup:(id)a0;
- (void)audioDeviceDidReceiveRecordingCallbackFirstEachStartup:(id)a0;
- (void)onMediaServicesWereLost:(id)a0;
- (void)onMediaServicesWereReset:(id)a0;
- (void)wcAVAudioSessionSwizzleDidCallMethod:(id)a0 error:(id)a1 ret:(BOOL)a2 caller:(id)a3;
- (void).cxx_destruct;

@end
