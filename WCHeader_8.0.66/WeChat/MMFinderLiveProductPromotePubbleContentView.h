@class MMFinderLiveGoodsHotSaleAnimationView, NSString, FinderLiveProductHintAnimationInfo, MMFinderLiveHotSaleAnimationLogic, MMFinderLiveGoodsPromoteContentView, MMFinderLiveGoodsItem;

@interface MMFinderLiveProductPromotePubbleContentView : MMFinderLivePromotePubbleContentView <MMFinderLiveHotSaleAnimationDelegate, MMFinderLiveBaseGoodsPromoteContentViewDelegate, WCFinderLiveLogReportValueProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MMFinderLiveGoodsPromoteContentView *goodsView;
@property (retain, nonatomic) MMFinderLiveGoodsItem *goods;
@property (nonatomic) unsigned int startExposingTime;
@property (nonatomic) BOOL closeBySelf;
@property (retain, nonatomic) MMFinderLiveHotSaleAnimationLogic *hotSaleAnimationLogic;
@property (retain, nonatomic) MMFinderLiveGoodsHotSaleAnimationView *hotSaleAnimationView;
@property (readonly, nonatomic) BOOL isDuringHintAnimation;
@property (readonly, nonatomic) FinderLiveProductHintAnimationInfo *currentHintAnimationInfo;
@property (nonatomic) BOOL isDuringAnimationV2Part1;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transferPromoteBufferToGoodsItem:(id)a0;

- (void)startHotSaleAnimation:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)updateHotSaleAnimation:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)finishHotSaleAnimation:(id /* block */)a0;
- (id)animationFile;
- (BOOL)hasAnimationResource;
- (id)initWithPromoteMsgInfo:(id)a0 taskId:(id)a1;
- (void)convertPromoteMsgInfo:(id)a0;
- (void)layoutUI;
- (void)refreshData;
- (BOOL)isCurrentPromoteItem:(id)a0;
- (void)updatePromoteItem:(id)a0;
- (id)currentPromoteItem;
- (void)updateFromSyncPromoteResp:(id)a0;
- (void)updatepromoteBuffer:(id)a0;
- (id)getCurrentPromoteBuffer;
- (void)handleSingleTapGesture:(id)a0;
- (void)onGoodsPromoteContentViewActionButtonClicked:(id)a0;
- (void)onTapActionForAudience;
- (void)onTapActionButtonForAudience;
- (void)onClosed;
- (void)onDismissed;
- (void)reportGoodsBubbleExposeTimeAndReset;
- (void)reportGoodsBubbleExposeTime;
- (void)onShowed;
- (id)stockID;
- (id)productItem;
- (void)onWebImageGetDifferentSize;
- (void)receiveHintAnimationInfo:(id)a0;
- (unsigned long long)willHandleProductHintAnimation;
- (id)finderLiveLogReportValueForKey:(id)a0;
- (void)startDisplayAnimationWithPart1Duration:(double)a0 part2Duration:(double)a1;
- (void)startHideAnimationWithPart1Duration:(double)a0 part2Duration:(double)a1;
- (void).cxx_destruct;

@end
