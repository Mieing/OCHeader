@class UIView;

@interface IESLiveActivityDetailProgressView : UIView

@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIView *progressView;

- (void)updateWithProgressInfo:(id)a0;
- (void).cxx_destruct;
- (id)initWithCornerRadius:(double)a0;
- (void)setup;

@end
