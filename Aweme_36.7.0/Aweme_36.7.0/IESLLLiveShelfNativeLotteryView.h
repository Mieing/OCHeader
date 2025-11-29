@class IESLLLiveShelfCardElementLotteryModel, UIImageView, UILabel, UIView;

@interface IESLLLiveShelfNativeLotteryView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) IESLLLiveShelfCardElementLotteryModel *lotteryModel;
@property (retain, nonatomic) UIView *drawView;
@property (retain, nonatomic) UILabel *drawLabel;

- (void)updateServerTime:(double)a0;
- (void)updateTimeLabelWithServerTime:(double)a0;
- (void)configWithCurrentTime:(double)a0 lottery:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
