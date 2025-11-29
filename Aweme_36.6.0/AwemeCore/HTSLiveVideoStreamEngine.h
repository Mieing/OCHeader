@class NSString, IESLiveRecordCountDownView, IESLiveRoomExtraConfigModel, IESLiveNormalStreamConfigFactory;
@protocol IESLiveRoomService, IESLiveEffectProcessLifyCycle, HTSLiveMediaStreamEngineDelegate, IESLivePushStreamLifeCycle, IESLiveFullLinkMonitor, IESLivePerfSampler, IESLiveRealStreamingProvider;

@interface HTSLiveVideoStreamEngine : NSObject <IESLiveStreamStateProtocol, IESLiveAnchorRoomStatusChangeEvents, IESLiveInteractStreamStateProtocol, HTSLiveMediaStreamEngine>

@property (retain, nonatomic) IESLiveRecordCountDownView *liveRecordLoadingView;
@property (retain, nonatomic) id<IESLivePushStreamLifeCycle> pushStreamLifeCycle;
@property (retain, nonatomic) id<IESLiveEffectProcessLifyCycle> videoEffectLifeCycle;
@property (retain, nonatomic) id<IESLiveRealStreamingProvider> streamingProvider;
@property (retain, nonatomic) id<IESLiveFullLinkMonitor> fullLinkMonitor;
@property (retain, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (retain, nonatomic) IESLiveNormalStreamConfigFactory *streamConfigFactory;
@property (nonatomic) BOOL countDownFinish;
@property (nonatomic) BOOL started;
@property (nonatomic) BOOL isPausedManually;
@property (nonatomic) BOOL hasLogPushStreamTime;
@property (nonatomic) double startPushTime;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveRoomExtraConfigModel *configModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hideLiveRecordLoadingView;
@property (readonly, nonatomic) long long engineState;
@property (weak, nonatomic) id<HTSLiveMediaStreamEngineDelegate> delegate;

- (void)pauseAnchorLiveWithType:(unsigned long long)a0;
- (void)resumeAnchorLiveWithType:(long long)a0;
- (BOOL)isLiveMute;
- (void)startLiveStreamIfNeeded;
- (void)stopLiveStream;
- (void)onPushStreamStateChange:(long long)a0;
- (void)onPushStreamLogDictCallback:(id)a0;
- (void)onPushStreamStateError:(long long)a0;
- (void)loadStreamModule;
- (void)showCountDownLoadingView;
- (void)startLiveStream;
- (void)recordVideoOutFpsWithLog:(id)a0;
- (void)collectPreViewFps:(id)a0;
- (void)onInteractMixStreamTypeDidChange:(long long)a0;
- (void).cxx_destruct;
- (void)prepare;
- (void)dealloc;
- (void)appDidBecomeActive;

@end
