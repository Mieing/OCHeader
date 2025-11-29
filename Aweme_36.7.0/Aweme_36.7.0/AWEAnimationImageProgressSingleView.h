@class UIView, BDImageView;

@interface AWEAnimationImageProgressSingleView : UIView

@property (retain, nonatomic) BDImageView *pointImageView;
@property (retain, nonatomic) BDImageView *tailImageView;
@property (retain, nonatomic) UIView *tintView;
@property (nonatomic) double currentProgress;
@property (nonatomic) double currentProcess;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) BOOL shouldAdjustAnimation;

- (void)setupWithBGColor:(id)a0 tintColor:(id)a1 pointImageConfig:(id)a2 tailImageConfig:(id)a3;
- (void)updateProgressWithDuration:(double)a0 progress:(double)a1 needAnimation:(BOOL)a2 isFinished:(BOOL)a3 isPlaying:(BOOL)a4;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
