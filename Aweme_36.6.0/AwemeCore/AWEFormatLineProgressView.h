@class AWEFormatLineProgressViewConfig, UIView;

@interface AWEFormatLineProgressView : UIView

@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UIView *animationView;
@property (nonatomic) double barWidth;
@property (nonatomic) double progress;
@property (retain, nonatomic) AWEFormatLineProgressViewConfig *config;
@property (nonatomic) double remainingTime;

- (void)updateProgress:(double)a0 inDuration:(double)a1 force:(BOOL)a2 completion:(id /* block */)a3;
- (double)getRemainingAnimationTimeForView:(id)a0 animationKey:(id)a1;
- (void)updateProgress:(double)a0 completion:(id /* block */)a1;
- (void)updateProgress:(double)a0 inDuration:(double)a1 completion:(id /* block */)a2;
- (void)willResignActive;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)didEnterForeground;
- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (void)setupUI;

@end
