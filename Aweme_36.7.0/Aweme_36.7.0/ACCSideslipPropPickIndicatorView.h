@class ACCMBCircularProgressBarView, UIView;

@interface ACCSideslipPropPickIndicatorView : UIView

@property (retain, nonatomic) UIView *whiteCircleView;
@property (retain, nonatomic) ACCMBCircularProgressBarView *progressView;
@property (retain, nonatomic) UIView *loadingMask;
@property (nonatomic) BOOL isShowProgress;
@property (nonatomic) double commonRadius;
@property (retain, nonatomic) UIView *applyRetryView;
@property (retain, nonatomic) UIView *extendView;
@property (nonatomic) double progress;

- (void)configIndicatorViewRadius:(double)a0;
- (void)showProgress:(BOOL)a0 animated:(BOOL)a1;
- (void)showRetryView:(BOOL)a0;
- (void)p_updateShowProgress:(BOOL)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
