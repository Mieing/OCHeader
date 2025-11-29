@class UIImageView, CALayer, UIView, UILabel;

@interface IESLLLiveShelfCellSeckillView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *progressView;
@property (retain, nonatomic) CALayer *progressMaskLayer;
@property (retain, nonatomic) UILabel *progressLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *warmUpLabel;
@property (retain, nonatomic) UILabel *warmUpPriceLabel;
@property (nonatomic) unsigned long long progress;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) double minVariableLength;
@property (nonatomic) BOOL isWarmUpStatus;

- (void)updateServerTime:(double)a0;
- (void)updateTimeLabelWithServerTime:(double)a0;
- (void)configWithProgress:(double)a0 stock:(long long)a1 skillStock:(long long)a2 serverTime:(double)a3 startTime:(double)a4 endTime:(double)a5 isWarmUpStatus:(BOOL)a6 price:(id)a7;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateSubviews;

@end
