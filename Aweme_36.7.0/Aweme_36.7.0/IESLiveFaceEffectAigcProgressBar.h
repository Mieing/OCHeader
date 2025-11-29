@class IESLiveGCDTimer, UIView;

@interface IESLiveFaceEffectAigcProgressBar : UIView

@property (retain, nonatomic) UIView *progressBar;
@property (retain, nonatomic) IESLiveGCDTimer *progressTimer;
@property (nonatomic) double currentProgress;
@property (nonatomic) double targetProgress;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)setProgressTo:(double)a0 duration:(double)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)updateProgress;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
