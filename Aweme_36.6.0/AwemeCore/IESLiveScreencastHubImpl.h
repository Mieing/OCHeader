@class IESLiveScreencastAudioContext, NSDictionary, NSString;
@protocol IESLiveRoomExtensionCommunicator, IESScreenshotExtensionAwaken, IESLiveScreencastPushStreamer, IESScreenshotTimeline, IESLiveRoomService, IESLivePushStreamLifeCycle;

@interface IESLiveScreencastHubImpl : NSObject <IESLiveScreencastLiveInjectService, IESLiveScreencastLiveInitService, IESLiveScreencastLiveDestroyService, IESLiveScreenshotHub>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) BOOL isLiving;
@property (nonatomic) long long liveState;
@property (retain, nonatomic) id<IESLiveRoomExtensionCommunicator> extensionCommunicator;
@property (retain, nonatomic) id<IESScreenshotTimeline> timeline;
@property (retain, nonatomic) id<IESScreenshotExtensionAwaken> extensionAwaken;
@property (retain, nonatomic) id<IESLiveScreencastPushStreamer> pushStreamer;
@property (retain, nonatomic) IESLiveScreencastAudioContext *audioContext;
@property (retain, nonatomic) id<IESLivePushStreamLifeCycle> pushStreamLifeCycle;
@property (nonatomic) BOOL liveScreencastDiABFrequencyOpt;
@property (nonatomic) BOOL liveScreencastFrequencyMethodOpt;
@property (nonatomic) BOOL liveScreencastMultiDeviceEnable;
@property (nonatomic) BOOL liveScreencastLiveCoreLazyLoading;
@property (nonatomic) BOOL hasPassPauseBackgroundImage;
@property (nonatomic) BOOL isBackgroundMode;
@property (nonatomic) long long delayToPassPauseImageTime;
@property (retain, nonatomic) NSDictionary *videoEncoderParams;
@property (nonatomic) BOOL isRestartLive;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL shouldStartMicrophoneWhenActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property BOOL pushStreamSucceeded;

+ (id)sharedInstance;

- (void)appWillTerminateNotification;
- (void)pauseLive;
- (void)resumeLive;
- (void)stopLive;
- (void)startedLive;
- (void)privatePostNotification:(id)a0 extraInfo:(id)a1;
- (void)audioSessionRouteDidChange;
- (void)passVideoEncoderParams;
- (void)startLiveWithRoom:(id)a0 trackContext:(id)a1;
- (long long)currentMicVolumePower;
- (id)getVideoEncoderParams;
- (void)screencastLiveInitWithRoom:(id)a0 completion:(id /* block */)a1;
- (void)screencastLiveInitCancel;
- (void)screencastLiveDestroy;
- (void)listenExtensionState;
- (void)setupLiveCoreSession;
- (void)startAudioRecord;
- (void)passPauseBackgroundImage;
- (void)p_destroyLiveCore;
- (void)p_destroyScreencastLiveExtension;
- (void)p_resetScreencastLiveConfig;
- (void)listenStreamData;
- (void)delayToPassPauseBackgroundImage;
- (id)denoiseAndCaeParams;
- (id)fillColorWithImage:(id)a0 imageScale:(double)a1 imageCenterOffset:(struct CGPoint { double x0; double x1; })a2 fillColor:(id)a3 reSize:(struct CGSize { double x0; double x1; })a4;
- (void)loadPauseWebImageWithCompletion:(id /* block */)a0;
- (void)resizeImageAsyncWithImage:(id)a0 completion:(id /* block */)a1;
- (void)applicationWillResignActive:(id)a0;
- (void).cxx_destruct;
- (void)releaseResources;
- (id)init;
- (void)applicationDidBecomeActive:(id)a0;
- (void)applicationDidEnterBackground:(id)a0;
- (void)addObservers;

@end
