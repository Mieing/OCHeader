@class UILabel, UIImageView, CAShapeLayer;

@interface AWEIMUploadProgressView : UIView

@property (retain, nonatomic) CAShapeLayer *baseLayer;
@property (retain, nonatomic) CAShapeLayer *progressLayer;
@property (retain, nonatomic) UILabel *progressLabel;
@property (retain, nonatomic) UIImageView *cloudImageView;
@property (nonatomic) double progress;
@property (nonatomic) unsigned long long style;

- (void)p_updateProgress;
- (void).cxx_destruct;
- (void)resetProgress;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
