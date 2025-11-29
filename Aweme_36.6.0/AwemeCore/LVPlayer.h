@class LVPlayerItem;
@protocol LVPlayerDelegate;

@interface LVPlayer : UIView {
    struct shared_ptr<cut::LVVEAdapter> { struct LVVEAdapter *__ptr_; struct __shared_weak_count *__cntrl_; } m_adapter;
}

@property (retain, nonatomic) LVPlayerItem *playItem;
@property (retain, nonatomic) id notificationToken;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (nonatomic) double startTime;
@property (nonatomic) double pauseTime;
@property (nonatomic) BOOL isFirstRenderEventTriggered;
@property (weak, nonatomic) id<LVPlayerDelegate> delegate;
@property (nonatomic) BOOL autoPlayWhenAppBecomeActive;
@property (nonatomic) BOOL autoRepeatPlay;

- (double)lastPlayFrameRate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 playItem:(id)a1;
- (void)setCallbackForPlayer;
- (id)vePlayer;
- (void)seekToTimeAndRender:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 seekMode:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)reloadCanvasSize;
- (void)playWithinTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)immediatelyPlayWithinTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)getFirstRenderTimeDic;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (struct shared_ptr<cut::LVVEAdapter> { struct LVVEAdapter *x0; struct __shared_weak_count *x1; })adapter;
- (void)didEnterBackground;
- (BOOL)isPlaying;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentTime;
- (id).cxx_construct;
- (void)layoutSubviews;
- (void)dealloc;
- (void)addObservers;
- (void)removeObservers;

@end
