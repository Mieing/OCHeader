@class MMFinderLivePrizeConfigItem, MMUIImageView, UIView, MMUILabel;

@interface MMFinderLiveCreateLotteryHeaderView : MMUIView

@property (retain, nonatomic) MMFinderLivePrizeConfigItem *configItem;
@property (retain, nonatomic) MMUIImageView *prizeImageView;
@property (retain, nonatomic) MMUILabel *prizeLabel;
@property (retain, nonatomic) MMUILabel *prizeStateLabel;
@property (retain, nonatomic) UIView *sepelateLine;

- (void)updatePrizeConfigItem:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void).cxx_destruct;

@end
