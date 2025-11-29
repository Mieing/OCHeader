@class NSString, UIImageView, IESLiveRecordCountDownView, IESLiveNormalStreamConfigFactory, IESLiveBackgroundStrategyFactory;
@protocol HTSLiveMediaStreamEngineDelegate, IESLivePushStreamLifeCycle, IESLiveFullLinkMonitor, IESLiveRoomService, IESLiveRealStreamingProvider;

@interface HTSLiveAudioStreamEngine : NSObject <IESLiveStreamStateProtocol, HTSLiveMediaStreamEngine>

@property (retain, nonatomic) UIImageView *bgPreviewView;
@property (retain, nonatomic) IESLiveRecordCountDownView *liveRecordLoadingView;
@property (retain, nonatomic) IESLiveNormalStreamConfigFactory *streamConfigFactory;
@property (retain, nonatomic) id<IESLiveRealStreamingProvider> streamingProvider;
@property (retain, nonatomic) id<IESLivePushStreamLifeCycle> pushStreamLifeCycle;
@property (retain, nonatomic) id<IESLiveFullLinkMonitor> fullLinkMonitor;
@property (nonatomic) long long engineState;
@property (nonatomic) BOOL started;
@property (retain, nonatomic) IESLiveBackgroundStrategyFactory *bgStrategyFactory;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) BOOL hideLiveRecordLoadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HTSLiveMediaStreamEngineDelegate> delegate;

- (void)startLiveStreamIfNeeded;
- (void)stopLiveStream;
- (void)pr_showCountDownLoadingView;
- (void)loadStreamer;
- (void)onPushStreamStateChange:(long long)a0;
- (void)onPushStreamLogDictCallback:(id)a0;
- (void)onPushStreamStateError:(long long)a0;
- (void)showAudioBackgroundView;
- (void)hideAudioBackgroundView;
- (void).cxx_destruct;
- (void)prepare;
- (void)dealloc;

@end
