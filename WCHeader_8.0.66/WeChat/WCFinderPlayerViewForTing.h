@protocol WCFinderPlayerViewForTingDelegate;

@interface WCFinderPlayerViewForTing : WCFinderSimplePlayerView

@property (weak, nonatomic) id<WCFinderPlayerViewForTingDelegate> tingDelegate;

- (void)playWithParams:(id)a0;
- (void)stopPlay;
- (id)getPlayerViewAndClear;
- (void)restorePlayerView:(id)a0;
- (void)tryHookDisplayViewAddSubviewFunc;
- (void)tryRemoveHookDisplayViewAddSubviewFunc;
- (void)tryHookDisplayViewLayoutSubviewFunc;
- (void)tryRemoveHookDisplayViewLayoutSubviewFunc;
- (id)hookTagForSelector:(SEL)a0;
- (void)layoutSubviews;
- (void)finderPlayerControllerViewUpdateVideoCurrentTime:(double)a0 videoDuration:(double)a1 maxPlayVideoTime:(double)a2;
- (long long)playerContentMode;
- (void)onVideoFrameOut:(id)a0;
- (void)onVideoPrepareToPlay:(id)a0;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)onPlayToEnd;
- (void)showBufferingView;
- (void)hiddenBufferingView;
- (void)onVideoPlayFail:(unsigned long long)a0 errorCode:(int)a1 LocalizedErrorDes:(id)a2;
- (void).cxx_destruct;

@end
