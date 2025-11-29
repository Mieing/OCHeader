@class UILabel, CAShapeLayer, UIView;

@interface IESLiveScreenRecordProgressView : UIView

@property (retain, nonatomic) UIView *controlView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIView *stopSquareView;
@property (retain, nonatomic) CAShapeLayer *progressLayer;
@property (nonatomic) long long recordTime;
@property (nonatomic) long long maxTime;
@property (copy, nonatomic) id /* block */ actionBlock;

- (void)didTapContainerActions:(id)a0;
- (id)makeCircleLayerColor:(id)a0 start:(double)a1 end:(double)a2;
- (void)remakeProgressLayer;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupViews;

@end
