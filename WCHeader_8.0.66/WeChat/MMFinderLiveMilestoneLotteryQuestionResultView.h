@class FinderLiveMilestoneLotteryInfo, MMFinderLiveMilestoneLotteryViewModel, UIView, UIScrollView, UILabel;

@interface MMFinderLiveMilestoneLotteryQuestionResultView : MMFinderLiveMilestoneLotteryDetailSecondaryView

@property (retain, nonatomic) MMFinderLiveMilestoneLotteryViewModel *vm;
@property (retain, nonatomic) FinderLiveMilestoneLotteryInfo *lotteryInfo;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) struct CGSize { double width; double height; } lastLayoutSize;

- (id)initWithViewModel:(id)a0 lotteryId:(id)a1;
- (void)initUI;
- (id)backButtonColor;
- (void)layoutSubviews;
- (void)rebuildContentViews;
- (void)layoutGradientMask;
- (void).cxx_destruct;

@end
