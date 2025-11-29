@class MMUIButton;

@interface MMFinderLiveMilestoneLotteryDetailSecondaryView : MMFinderLiveMilestoneLotteryDetailSubView

@property (copy, nonatomic) id /* block */ secondaryViewDidPop;
@property (retain, nonatomic) MMUIButton *backButton;

- (id)backButtonColor;
- (BOOL)useSmallPadding;
- (void)initUI;
- (void)onBackButtonTapped;
- (id)getCardContainerView;
- (void)didAppear;
- (void)onLotteryCardWillCloseByCloseButton;
- (void).cxx_destruct;

@end
