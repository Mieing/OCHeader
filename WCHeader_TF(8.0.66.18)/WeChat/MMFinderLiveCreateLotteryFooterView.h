@class MMFinderLivePrizeConfigItem, MMUIButton;

@interface MMFinderLiveCreateLotteryFooterView : MMUIView

@property (retain, nonatomic) MMFinderLivePrizeConfigItem *configItem;
@property (retain, nonatomic) MMUIButton *actionButton;
@property (copy, nonatomic) id /* block */ actionBlock;

- (void)updatePrizeConfigItem:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)actionButtonClick:(id)a0;
- (void).cxx_destruct;

@end
