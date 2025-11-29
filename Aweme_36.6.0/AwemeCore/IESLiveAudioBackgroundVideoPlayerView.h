@class IESLiveGCDTimer, AVAsset, AVPlayerItem, NSURL, AVPlayerLayer, AVURLAsset, AVPlayer;

@interface IESLiveAudioBackgroundVideoPlayerView : UIView

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) AVAsset *avAsset;
@property (retain, nonatomic) AVPlayer *avPlayer;
@property (retain, nonatomic) AVPlayerLayer *playLayer;
@property (retain, nonatomic) AVPlayerItem *playerItem;
@property (retain, nonatomic) AVURLAsset *tempLoadingAsset;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRect;
@property (copy, nonatomic) id /* block */ playStateBlock;

- (void)handleDidBecomeActiveNotification:(id)a0;
- (void)setupObserver;
- (void)setVideoFileUrl:(id)a0;
- (void)moviePlayDidEnd;
- (void)updatePlayerFrameWithVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setVideoFileUrl:(id)a0 visibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setupWithAsset:(id)a0;
- (void)setVideoFileUrlWithRetry:(id)a0 visibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 retryCount:(long long)a2 maxRetries:(long long)a3 completion:(id /* block */)a4;
- (void)handleAVPlayerNoti:(id)a0;
- (void)setVideoFileUrlWithRetry:(id)a0 visibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completion:(id /* block */)a2;
- (struct CGSize { double x0; double x1; })defaultResourceSize;
- (void).cxx_destruct;
- (void)play;
- (void)stop;
- (struct CGSize { double x0; double x1; })resourceSize;
- (void)layoutSubviews;
- (void)dealloc;
- (void)clean;

@end
