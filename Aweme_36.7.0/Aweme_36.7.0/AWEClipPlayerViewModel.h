@class AWEStudioClipViewModel, AWEStudioClipModel, UIView, AVPlayer;

@interface AWEClipPlayerViewModel : NSObject

@property (nonatomic) BOOL isPlaying;
@property (retain, nonatomic) AWEStudioClipModel *clipModel;
@property (retain, nonatomic) id avPlayerPeriodicObserver;
@property (retain, nonatomic) UIView *currentDisplayView;
@property (retain, nonatomic) AVPlayer *avPlayer;
@property (nonatomic) BOOL playerShouldPlay;
@property (weak, nonatomic) AWEStudioClipViewModel *clipViewModel;
@property (copy, nonatomic) id /* block */ willReplaceBlock;
@property (copy, nonatomic) id /* block */ didReplaceBlock;
@property (copy, nonatomic) id /* block */ didReplaceBlockAndSeekTimeOnce;
@property (copy, nonatomic) id /* block */ playerPeriodicCallback;
@property (copy, nonatomic) id /* block */ playerPeriodicCallbackAndIsAI;
@property (readonly, nonatomic) BOOL isPlayingCurrentTotalItem;

- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentPlayTime;
- (double)timeDuration;
- (void)addPlayerObserver;
- (void)removePlayerObserver;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })assetDuration;
- (void)videoPlayerTapped:(id)a0;
- (void)moviePause;
- (void)moviePlay;
- (void)movieRestore;
- (void)movieSeekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (double)radiansForRotateType:(unsigned long long)a0;
- (void)requestCoverImageWithVideoData:(id)a0 completion:(id /* block */)a1;
- (void)addAvPlayerPeriodicObserver;
- (void)removeAvPlayerObserver;
- (void)addAvPlayerPeriodicObserverIfNeeded;
- (BOOL)movieIsPlaying;
- (void)updateCurrentCoverImage;
- (id)requestCoverImageWithAsset:(id)a0 videoComposition:(id)a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 radians:(double)a3;
- (void)requestCoverImageWithStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 radians:(double)a1 completion:(id /* block */)a2;
- (long long)orientationWithRadians:(double)a0;
- (id)initWithClipModel:(id)a0;
- (void)addPlayerPeriodicObserverIfNeeded;
- (void)moviePlayWithStatusChanged;
- (void)moviePauseWithStatusChanged;
- (void)movieSeekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completion:(id /* block */)a1;
- (void)replaceWithPlayerItem:(id)a0;
- (void)requestFirstFrameCompletion:(id /* block */)a0;
- (double)orientationRadiansFromTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)playerViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isCurrentPlayerItem:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (int)timescale;
- (id)asset;
- (void)setupPlayer;

@end
