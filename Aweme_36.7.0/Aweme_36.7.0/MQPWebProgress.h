@class NSTimer, UIView;

@interface MQPWebProgress : UIView

@property (nonatomic) float progress;
@property (retain, nonatomic) UIView *progressBarView;
@property (retain, nonatomic) NSTimer *timer;

- (void)clearTimer;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)startProgress;
- (void)dealloc;
- (void)setProgress:(float)a0 animated:(BOOL)a1;
- (void)configureViews;
- (void)handleTimer:(id)a0;
- (void)stopProgress;

@end
