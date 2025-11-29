@class NSString, FinderBulkBuyInfo, WAWebViewController, MMFinderLiveBulkBuyPromoteContentView, MMFinderLiveReplayMessageSource, MMFinderLiveReplayGoodsPromoteContentView, MMFinderLiveGoodsItem;
@protocol MMFinderLivePromotionReplayOperationViewDelegate;

@interface MMFinderLivePromotionReplayOperationView : MMFinderLiveReplayOperationView <MMFinderLiveTaskExt, MMFinderLiveBaseGoodsPromoteContentViewDelegate, WAAppTaskNavigateBackNativeExt, MMFinderLiveBulkBuyPromoteContentViewDelegate>

@property (retain, nonatomic) MMFinderLiveReplayMessageSource *messageSource;
@property (nonatomic) unsigned long long lastMessageUpdateTime;
@property (nonatomic) BOOL supressMessageUpdate;
@property (retain, nonatomic) MMFinderLiveReplayGoodsPromoteContentView *goodsTipView;
@property (retain, nonatomic) MMFinderLiveBulkBuyPromoteContentView *bulkBuyTipView;
@property (retain, nonatomic) MMFinderLiveGoodsItem *product;
@property (retain, nonatomic) FinderBulkBuyInfo *bulkBuy;
@property (weak, nonatomic) WAWebViewController *lastBuyPageViewController;
@property (copy, nonatomic) id /* block */ productRefresher;
@property (weak, nonatomic) id<MMFinderLivePromotionReplayOperationViewDelegate> promotionReplayOperationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 product:(id)a1 productRefresher:(id /* block */)a2;
- (id)initWithTaskId:(id)a0 bulkBuy:(id)a1;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (BOOL)shouldHideTopMaskWhenCLeanScreen;
- (BOOL)shouldHideBottomMaskWhenCLeanScreen;
- (void)onEnterLive;
- (void)layoutUI;
- (void)createReplayControlView;
- (void)showContents;
- (void)hideContents;
- (void)layoutGoodsPubbleTipView;
- (void)onBulkBuyBubbleClicked;
- (void)onGoodsTipBubbleClicked;
- (void)onGoodsPromoteContentViewActionButtonClicked:(id)a0;
- (void)updateWAAppTaskHandlerWrapperForAutoPlayControl:(id)a0;
- (void)onWillJumpToMiniAppAfterBackNativeWithContext:(id)a0;
- (void)onBulkBuyPromoteContentViewActionButtonClicked:(id)a0;
- (void)onVideoPlay;
- (void)onSliderSeekBegin;
- (void)onSliderSeekToTime:(float)a0;
- (double)toolViewBottom;
- (void).cxx_destruct;

@end
