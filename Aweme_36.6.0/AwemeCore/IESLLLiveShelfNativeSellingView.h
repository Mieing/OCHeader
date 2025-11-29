@class IESLLLiveShelfNativeLotteryView, NSString, UILabel, NSMutableArray, UIView;

@interface IESLLLiveShelfNativeSellingView : UIView <IESLLLiveShelfGlobalTimerDelegate>

@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UILabel *soldCountLabel;
@property (retain, nonatomic) UILabel *sellingPointLabel;
@property (retain, nonatomic) NSMutableArray *mutableLabels;
@property (retain, nonatomic) IESLLLiveShelfNativeLotteryView *lotteryView;
@property (copy, nonatomic) id /* block */ lotteryViewClickedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hiddenTopView;
- (void)setupWithSoldCount:(id)a0 labels:(id)a1 sellingPointLabels:(id)a2 hasPoi:(BOOL)a3 numberOfLinesForTitle:(long long)a4 rightWidth:(double)a5 bizCode:(id)a6 lottery:(id)a7;
- (id)convertToColor:(id)a0;
- (void)clearMutableLabels;
- (void)showSellingViewLabelWithRegionNumber:(long long)a0 sellingPointLabels:(id)a1 rightWidth:(double)a2;
- (void)showEquityViewLabelWithRightWidth:(double)a0 labels:(id)a1;
- (void)showLotteryViewWithLottery:(id)a0;
- (void)lotteryClicked:(id)a0;
- (void).cxx_destruct;
- (void)timerFired;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
