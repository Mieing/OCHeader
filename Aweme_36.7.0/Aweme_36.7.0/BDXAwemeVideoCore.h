@class NSString, NSDictionary, BDXVideoPlayerVideoModel, BDXVideoPlayerConfiguration, UIView, BDXAweVideoPlayerWrapper;
@protocol BDXVideoCorePlayerDelegate;

@interface BDXAwemeVideoCore : NSObject <BDXAweVideoPlayerWrapperDelegate, BDXVideoCorePlayerProtocol>

@property (retain, nonatomic) BDXAweVideoPlayerWrapper *player;
@property (retain, nonatomic) BDXVideoPlayerVideoModel *videoModel;
@property (nonatomic) unsigned long long currentPlayState;
@property (nonatomic) double stallStartTimestamp;
@property (copy, nonatomic) NSString *networkTypeString;
@property (retain, nonatomic) BDXVideoPlayerConfiguration *configuration;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (nonatomic) double actionTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *view;
@property (nonatomic) BOOL mute;
@property (nonatomic) BOOL repeat;
@property (nonatomic) double volume;
@property (nonatomic) BOOL enableHardDecode;
@property (weak, nonatomic) id<BDXVideoCorePlayerDelegate> delegate;

- (void)player:(id)a0 playbackFailedWithError:(id)a1;
- (void)playerDidReadyForDisplay:(id)a0;
- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)player:(id)a0 didChangeStallState:(long long)a1;
- (void)player:(id)a0 playbackFailedForURL:(id)a1 error:(id)a2;
- (double)currPlayableDuration;
- (void)setStartPlayTime:(double)a0;
- (double)currPlaybackTime;
- (id)playerTypeString;
- (id)playerNetworkTypeString;
- (id)__createPlayerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1;
- (long long)__scaleModeForVideo;
- (id)_getVideoPlayAccess;
- (void)refreshVideoModel:(id)a0;
- (void)rereshPlayerScale:(id)a0;
- (void)playerWillLoopPlaying:(id)a0;
- (double)videoDuration;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (BOOL)isPlaying;
- (void)stop;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1;
- (void)addPeriodicTimeObserverForInterval:(double)a0 queue:(id)a1 usingBlock:(id /* block */)a2;
- (struct __CVBuffer { } *)currentPixelBuffer;
- (void)seekToTime:(double)a0 completion:(id /* block */)a1;

@end
