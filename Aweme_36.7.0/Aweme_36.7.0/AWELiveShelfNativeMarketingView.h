@class AWELiveShelfCellSeckillView, NSString, AWELiveShelfNativeMarketingToolView, AWELiveShelfNativeMarketingPriceView, UIButton;

@interface AWELiveShelfNativeMarketingView : UIView <AWELiveShelfGlobalTimerDelegate>

@property (retain, nonatomic) UIButton *actionBtn;
@property (retain, nonatomic) AWELiveShelfNativeMarketingPriceView *priceView;
@property (retain, nonatomic) AWELiveShelfCellSeckillView *seckillView;
@property (retain, nonatomic) AWELiveShelfNativeMarketingToolView *marketingToolView;
@property (copy, nonatomic) id /* block */ actionBtnClickedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)actionBtnClicked:(id)a0;
- (void)configWithCellModel:(id)a0;
- (id)_formatPriceStrWithPrice:(long long)a0;
- (void)configWithMarketingModel:(id)a0 actionArea:(id)a1 hasLottery:(BOOL)a2 feConfig:(id)a3;
- (void).cxx_destruct;
- (void)timerFired;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
