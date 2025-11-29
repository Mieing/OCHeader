@class FinderBulkBuyInfo, MMFinderLiveBulkBuyPromoteContentView, NSString;

@interface MMFinderLiveBulkBuyPromotePubbleContentView : MMFinderLivePromotePubbleContentView <MMFinderLiveBulkBuyPromoteContentViewDelegate, WCFinderLiveLogReportValueProvider>

@property (retain, nonatomic) MMFinderLiveBulkBuyPromoteContentView *bulkBuyView;
@property (retain, nonatomic) FinderBulkBuyInfo *bulkBuyInfo;
@property (nonatomic) unsigned int startExposingTime;
@property (nonatomic) BOOL closeBySelf;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPromoteMsgInfo:(id)a0 taskId:(id)a1;
- (void)convertPromoteMsgInfo:(id)a0;
- (void)layoutUI;
- (void)refreshData;
- (BOOL)isCurrentPromoteItem:(id)a0;
- (void)updatePromoteItem:(id)a0;
- (void)updatepromoteBuffer:(id)a0;
- (void)updateFromSyncPromoteResp:(id)a0;
- (void)handleSingleTapGesture:(id)a0;
- (void)onBulkBuyPromoteContentViewActionButtonClicked:(id)a0;
- (void)reportForExpose;
- (void)onClosed;
- (void)onDismissed;
- (void)onShowed;
- (void)onWebImageGetDifferentSize;
- (void)startDisplayAnimationWithPart1Duration:(double)a0 part2Duration:(double)a1;
- (void)startHideAnimationWithPart1Duration:(double)a0 part2Duration:(double)a1;
- (void).cxx_destruct;

@end
