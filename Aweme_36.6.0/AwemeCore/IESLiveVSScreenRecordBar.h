@class UIImageView, UILabel, IESLiveRoundProgressView;

@interface IESLiveVSScreenRecordBar : UIView

@property (retain, nonatomic) IESLiveRoundProgressView *progressView;
@property (retain, nonatomic) UIImageView *redSquareView;
@property (retain, nonatomic) UILabel *recordDurationLabel;
@property (copy, nonatomic) id /* block */ stopRecordAction;

- (void)onStopScreenRecordAction:(id)a0;
- (void)updateWithDuration:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupViews;

@end
