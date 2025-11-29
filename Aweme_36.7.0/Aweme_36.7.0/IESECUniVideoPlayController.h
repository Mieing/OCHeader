@class IESECUniVideoPlayConfig, NSString, UIView;
@protocol IESECUniVideoPlayDelegate, IESECAwemeVideoViewProtocol;

@interface IESECUniVideoPlayController : NSObject <IESECAwemeVideoViewDelegate, IESECUniVideoPlayProtocol>

@property (retain, nonatomic) UIView<IESECAwemeVideoViewProtocol> *playerView;
@property (retain, nonatomic) IESECUniVideoPlayConfig *playConfig;
@property (weak, nonatomic) id<IESECUniVideoPlayDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPlayerSubTag:(id)a0;
- (void)setPlayerTag:(id)a0;
- (void)addPeriodicTimeObserver;
- (BOOL)isPause;
- (void)videoView:(id)a0 playbackFailedWithError:(id)a1;
- (void)videoViewDidReadyForDisplay:(id)a0;
- (void)videoView:(id)a0 didChangeStallState:(unsigned long long)a1;
- (void)videoView:(id)a0 onSubtitleInfoCallBack:(id)a1 context:(id)a2;
- (void)videoView:(id)a0 didChangePlayState:(unsigned long long)a1;
- (void)setupPlayerView;
- (void)reloadWithVideoId:(id)a0 urlList:(id)a1;
- (id)initWithPlayConfig:(id)a0;
- (id)fetchPlayerView;
- (void)reloadVideoInfo:(id)a0;
- (void)seekToPlaybackTime:(double)a0 complete:(id /* block */)a1;
- (id)constructAwemeVideoInfoWithVid:(id)a0 urlList:(id)a1;
- (void)periodTimeObserver;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (BOOL)isPlaying;
- (void)stop;
- (double)duration;
- (double)currentPlaybackTime;
- (void)setSubTitle:(id)a0;
- (double)currentProgress;
- (void)setPlaybackSpeed:(double)a0;

@end
