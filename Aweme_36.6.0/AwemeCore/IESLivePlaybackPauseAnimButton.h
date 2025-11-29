@class NSMutableArray, IESLivePlaybackPauseParallel, IESLivePlaybackPauseTriangle;

@interface IESLivePlaybackPauseAnimButton : UIView <HTSLivePluginLayoutView>

@property (retain, nonatomic) IESLivePlaybackPauseParallel *pauseIcon;
@property (retain, nonatomic) IESLivePlaybackPauseTriangle *reStartIcon;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) BOOL isParallelAnimate;
@property (nonatomic) BOOL isTriangleAnimate;
@property (retain, nonatomic) NSMutableArray *allAnimationArray;

- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)setupAccessibilityLabel;
- (void)updateIsPlaying:(BOOL)a0 IsLandscape:(BOOL)a1;
- (void)parallelAnimate;
- (void)triangleAnimate;
- (void)playWithAnim;
- (void)pauseWithAnim;
- (void)tryAnimation;
- (void)isNeedTryAnimation;
- (void)delayUpdateAnimateIsPlaying:(BOOL)a0 IsLandscape:(BOOL)a1;
- (void).cxx_destruct;
- (id)viewType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
