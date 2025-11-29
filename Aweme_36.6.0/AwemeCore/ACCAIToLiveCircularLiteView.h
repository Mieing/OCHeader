@class BDImageView, UILabel, UIView;

@interface ACCAIToLiveCircularLiteView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) BDImageView *iconLoopCircle;
@property (retain, nonatomic) UILabel *processTextLabel;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) double progress;

- (void)stopLoadingAnimated:(BOOL)a0;
- (void)setupUILayout;
- (void)updateProcessText:(double)a0;
- (void)updateProcessTextWithForceUpdate:(double)a0;
- (void)startAnimation;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
