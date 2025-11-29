@interface AWECommentMainSwiftImpl.CommentMediaVideoPlayerController : NSObject <AWEPlayVideoDelegate, AWECommentMediaMainVideoPlayerViewControllerProtocol> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ videoViewController;
}

- (double)customTimerPeriodic:(id)a0;
- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void)awemePlay;
- (void)playerSeekProgress:(double)a0 completion:(id /* block */)a1;
- (void)updatePlayerRate:(double)a0;
- (double)currentPlayerRate;
- (void)videoDidTap:(id)a0;
- (void)hidePauseButton:(BOOL)a0;
- (void)updateData:(id)a0 author:(id)a1 referString:(id)a2 enterFrom:(id)a3;
- (id)playerViewController;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (BOOL)isPlaying;
- (id)init;
- (void)stop;
- (void)reset;
- (id)viewController;
- (long long)playState;
- (void)willDisplay;

@end
