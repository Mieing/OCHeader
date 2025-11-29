@class NSString;

@interface VQMManager : NSObject <VQMObserverBase, MMServiceProtocol, VoipUIManagerExt, IVOIPExt, IVOIPUILogicMgrExt, VoIPAudioServiceExtension, VoIPPIPServiceExt, WeChat.ICarPlayUIExt, VoIPilinkMgrVideoStreamObserver, MonoServiceMsgMgrExtension>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double lastBackgroundRemainingTime;
@property (nonatomic) double lastCheckBackgroundRemainingTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)launch;
+ (id)sharedInstance;

- (unsigned long long)identifier;
- (void)didBegin;
- (void)willEnd;
- (void)didPoll;
- (void)didUpdateProfile:(int)a0 bytesFromProfile:(id)a1 bytesToProfile:(id)a2;
- (void)didReport:(id)a0 profileApp:(id)a1 profileMatrix:(id)a2 profileAudio:(id)a3 profileVisual:(id)a4 profileNotification:(id)a5 profileWxconf:(id)a6 profileSystemauth:(id)a7;
- (void)updateMatrixInfoBits:(int)a0;
- (void)clearFlags;
- (void)checkBackgroundRemainingTime;
- (void)storeRoomInfoWithRoomID:(unsigned long long)a0 roomKey:(long long)a1;
- (id)init;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)VoIPPIPServiceWillStartPictureInPicture;
- (void)VoIPPIPServiceDidStartPictureInPicture;
- (void)VoIPPIPServiceDidStopPictureInPicture;
- (void)VoIPPIPServiceEnterForeground:(BOOL)a0;
- (void)VoIPPIPServiceOnRestoreUserInterfaceForPictureInPictureStop;
- (void)VoIPPIPServiceDidRemoteCaptureSuspend;
- (void)onCarPlayConnected;
- (void)onCarPlayDisconnected;
- (void)onMatrixPerfWarning:(id)a0;
- (void)UIManagerWillOpenWindowWithContact:(id)a0 isCaller:(BOOL)a1 monoMsg:(id)a2 startInApp:(BOOL)a3 isEarMode:(BOOL)a4 isAudioMode:(BOOL)a5 from:(unsigned long long)a6 isIlink:(BOOL)a7;
- (void)UIManagerDidOpenWindowWithContact:(id)a0 isCaller:(BOOL)a1 startInApp:(BOOL)a2 isEarMode:(BOOL)a3 isAudioMode:(BOOL)a4 from:(unsigned long long)a5;
- (void)onSetIfIsIlink:(BOOL)a0;
- (void)UIManagerWillQuitWindow;
- (void)UIManagerDidCloseCompletely;
- (void)UIManagerDidSpeakerSetupedFirstAfterBeginTalk;
- (void)UIManagerDidReceiverCardExtendAtFirst;
- (void)UIManagerDidUIShowAtApplcationStateActiveIfIsCaller:(BOOL)a0;
- (void)UIManagerDidVideoSessionStartCompleteAtFirst;
- (void)UIManagerDidVideoSessionRecvFrameAtFirst;
- (void)onVoipAccept:(id)a0;
- (void)onVoipMaximized;
- (void)OnCall:(id)a0 ErrNo:(int)a1;
- (void)OnBeginTalk:(id)a0;
- (void)voIPAudioServiceWillClose;
- (void)voIPAudioServiceInterruptionBegin;
- (void)voIPAudioServiceInterruptionEnd;
- (void)voIPAudioServiceDidReceiveAudioUnitCallbackFirstEachStartup;
- (void)voIPAudioServiceWillStartAudioUnit;
- (void)voIPAudioServiceWillStartAudioUnitFirst;
- (void)voIPAudioServiceDidStartAudioUnit;
- (void)voIPAudioServiceDidReceiveAudioUnitPlaybackCallbackFirst:(id)a0;
- (void)voIPAudioServiceDidReceiveAudioUnitRecordingCallbackFirst:(id)a0;
- (void)VoIPAudioServiceWillPrewarmAudioUnit;
- (void)VoIPAudioServiceDidPrewarmAudioUnit;
- (BOOL)shouldIgnoreDefaultRender;
- (void)voIPilinkMgrDidReceiveLocalFramePixelBuffer:(struct __CVBuffer { } *)a0;
- (void)voIPilinkMgrDidReceiveRemoteFrameYUVData:(char *)a0 Width:(unsigned int)a1 Height:(unsigned int)a2;
- (void)voIPilinkMgrDidReceiveLocalFrameAtFirst;
- (void)voIPilinkMgrDidReceiveRemoteFrameAtFirst;
- (void)monoServiceMsgMgrWillHandleMsg:(id)a0 withSetting:(id)a1 shouldShow:(BOOL)a2;

@end
