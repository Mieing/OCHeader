@class MMFinderLiveMilestoneLotteryDetailWinnerResultView, FinderLiveMilestoneLotteryInfo, NSString;

@interface MMFinderLiveMilestoneLotteryDetailResultView : MMFinderLiveMilestoneLotteryDetailBaseView <MMFinderLiveMilestoneLotteryViewModelExt>

@property (retain, nonatomic) FinderLiveMilestoneLotteryInfo *lotteryInfo;
@property (retain, nonatomic) MMFinderLiveMilestoneLotteryDetailWinnerResultView *winnerResultView;
@property (nonatomic) BOOL hasCheckedGiftAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0 lotteryId:(id)a1;
- (void)dealloc;
- (void)commonInit;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (BOOL)checkParamValid;
- (BOOL)updateLotteryAdaptedPercentIfNeeded;
- (void)onOngoingMilestoneLotteryInfoChanged:(id)a0 prevInfo:(id)a1;
- (void)onOngoingMilestoneLotteryInfoUpdated:(id)a0;
- (void)onCurrentMilestoneLotteryMetaInfoChanged:(id)a0 prevInfo:(id)a1;
- (void).cxx_destruct;

@end
