@class ACCEditAIFakeProgressViewConfig, NSTimer, UIImageView, UILabel, AWEEditAIProgressView;

@interface ACCEditAIFakeProgressView : UIView

@property (nonatomic) double progress;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSTimer *secondPhaseTimer;
@property (retain, nonatomic) UIImageView *tagImageView;
@property (retain, nonatomic) UILabel *progressLabel;
@property (retain, nonatomic) AWEEditAIProgressView *progressView;
@property (retain, nonatomic) ACCEditAIFakeProgressViewConfig *config;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)startFakeProgress;
- (void)endFakeProgress;
- (void)endFakeProgressWithDuration:(double)a0 completion:(id /* block */)a1;
- (void)updateWaitSeconds:(double)a0;
- (void)updateProgressWithRealTimeUpdateStrategy;
- (void)p_updateProgress;
- (void)p_switchToSecondPhaseOptTimer;
- (double)unitForRealTimeUpdateStrategyFrom:(double)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)reset;

@end
