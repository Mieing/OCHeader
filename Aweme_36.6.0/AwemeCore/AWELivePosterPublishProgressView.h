@class UIImageView, MBCircularProgressBarView, UIView;

@interface AWELivePosterPublishProgressView : UIView

@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) UIView *progressMaskView;
@property (retain, nonatomic) MBCircularProgressBarView *circleProgressBar;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIImageView *coverImageView;

- (void).cxx_destruct;
- (id)init;
- (double)progress;
- (void)reset;
- (void)setProgress:(double)a0;

@end
