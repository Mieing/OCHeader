@class MMFinderLivePrizeActivitiesRouterActionSheetConfig, NSString, UIView, MMFinderLivePrizeActivitiesRouterActionSheetItemView;

@interface MMFinderLivePrizeActivitiesRouterActionSheet : MMPageSheetBaseView <MMLiveRelatedLiveExt>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *headView;
@property (retain, nonatomic) MMFinderLivePrizeActivitiesRouterActionSheetItemView *blueGiftItemView;
@property (retain, nonatomic) MMFinderLivePrizeActivitiesRouterActionSheetItemView *lotteryItemView;
@property (retain, nonatomic) MMFinderLivePrizeActivitiesRouterActionSheetItemView *redPacketItemView;
@property (retain, nonatomic) MMFinderLivePrizeActivitiesRouterActionSheetConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfig:(id)a0;
- (void)createUI;
- (void)layoutSubviews;
- (void)setupPageSheetConfig;
- (double)contentViewHeight;
- (void)pageSheetDidDismiss;
- (void)pageSheetWillAppear;
- (void)pageSheetDidDisappear;
- (id)liveTask;
- (void)onRelatedLiveEntryVetoRequested:(BOOL *)a0;
- (BOOL)checkLotteryPreconditionsAndShowMessages;
- (void).cxx_destruct;

@end
