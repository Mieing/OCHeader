@class WCFinderPlayerViewForTing, WCFinderDataItem, NSString;

@interface TingFinderVideoPlayer : TingBizPlayer <WCFinderPlayerViewForTingDelegate>

@property (retain, nonatomic) WCFinderPlayerViewForTing *videoView;
@property (retain, nonatomic) WCFinderDataItem *fetchedDataItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTingItem:(id)a0 configuartion:(id)a1;
- (void)setupPlayerView;
- (id)playerView;
- (id)displayElement;
- (id)view;
- (BOOL)isPlayRateSupported;
- (BOOL)canSeek;
- (void)setPlayRate:(float)a0;
- (void)seekToTime:(double)a0;
- (int)playerKernelType;
- (void)prepareToPlay;
- (void)onSuccessWithDataItem:(id)a0;
- (void)play;
- (void)pause;
- (void)resume;
- (void)stop;
- (double)currentTime;
- (double)displayTime;
- (double)duration;
- (void)finderPlayerViewForTingOnDisplayViewMTKViewCreated:(id)a0;
- (void)finderPlayerViewForTingOnVideoPause:(id)a0;
- (void)finderPlayerViewForTingOnVideoPlay:(id)a0;
- (void)finderPlayerViewForTingOnVideoEnd:(id)a0;
- (void)finderPlayerViewForTing:(id)a0 onCurrentTimeUpdated:(double)a1 duration:(double)a2;
- (void)finderPlayerViewForTing:(id)a0 onVideoFrameOut:(id)a1;
- (void)finderPlayerViewForTing:(id)a0 onBufferingChanged:(BOOL)a1;
- (void)finderPlayerViewForTing:(id)a0 onVideoPlayFail:(int)a1 errorDesc:(id)a2;
- (void).cxx_destruct;

@end
