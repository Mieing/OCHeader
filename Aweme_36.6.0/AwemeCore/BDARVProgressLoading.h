@class UIColor, CAShapeLayer, NSTimer, UILabel, UIView;

@interface BDARVProgressLoading : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *progressView;
@property (retain, nonatomic) UILabel *progressLab;
@property (retain, nonatomic) CAShapeLayer *bgLayer;
@property (retain, nonatomic) CAShapeLayer *progressLayer;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double progressValue;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIColor *backgroundColor;

- (void)hideLoading;
- (void)destroyTimer;
- (void)progressAction;
- (void)showLoadingWithText:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerRadius:(double)a1 backgroundColor:(id)a2;
- (void).cxx_destruct;
- (void)setupUI;
- (void)createTimer;

@end
