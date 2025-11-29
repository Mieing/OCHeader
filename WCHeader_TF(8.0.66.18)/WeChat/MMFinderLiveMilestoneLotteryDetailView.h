@class MMFinderLiveMilestoneLotteryDetailMenuView, MMFinderLiveMilestoneLotteryDetailAttendView, MMFinderLiveMilestoneLotteryDetailQuestionView, MMFinderLiveMilestoneLotteryDetailWinnerResultView, MMFinderLiveTaskId, NSString;

@interface MMFinderLiveMilestoneLotteryDetailView : MMFinderLiveMilestoneLotteryDetailBaseView <MMFinderLiveMilestoneLotteryViewModelExt>

@property (weak, nonatomic) MMFinderLiveMilestoneLotteryDetailMenuView *mainMenuView;
@property (weak, nonatomic) MMFinderLiveMilestoneLotteryDetailAttendView *attendView;
@property (weak, nonatomic) MMFinderLiveMilestoneLotteryDetailQuestionView *questionView;
@property (weak, nonatomic) MMFinderLiveMilestoneLotteryDetailWinnerResultView *winnerResultView;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0 taskId:(id)a1;
- (void)refreshOnViewAppear;
- (void)commonInit;
- (id)convertedMenuItems;
- (void)handleItemDidSelect:(id)a0;
- (void)_gotoLotteryDetailWithLotteryInfo:(id)a0;
- (BOOL)updateLotteryAdaptedPercentIfNeeded;
- (void)showInView:(id)a0 aniamted:(BOOL)a1;
- (void)onCurrentMilestoneLotteryMetaInfoChanged:(id)a0 prevInfo:(id)a1;
- (void)onCurrentMilestoneLotteryMetaInfoUpdated:(id)a0;
- (void)reloadMenuView;
- (void)reportMenuItemExposeWithItems:(id)a0 prevItems:(id)a1;
- (void)openAttendViewWithLotteryId:(id)a0 animated:(BOOL)a1;
- (void)openQuestionViewWithLotteryId:(id)a0;
- (void).cxx_destruct;

@end
