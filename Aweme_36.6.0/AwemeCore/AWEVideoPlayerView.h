@class AWEVideoPlayerController, AVPlayerLayer;

@interface AWEVideoPlayerView : UIView

@property (retain, nonatomic) AVPlayerLayer *playerLayer;
@property (nonatomic) BOOL initialized;
@property (weak, nonatomic) AWEVideoPlayerController *playerController;
@property (nonatomic) BOOL shouldProhibitImplicitAnimationWhenLayoutSubviews;

- (void)setRotateType:(long long)a0;
- (void)setPlayer:(id)a0 scaleMode:(long long)a1 rotateType:(long long)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setScalingMode:(long long)a0;
- (void)resetPlayer;

@end
