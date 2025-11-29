@interface MMLiveFeedStreamCommentTableViewModel : MMLiveCommentTableViewModel

@property (nonatomic) BOOL needTableViewAutoScrollToRereshBeforeUnDisplay;
@property (nonatomic) BOOL hasSuccessLoadLocalDataAfterDisplay;
@property (nonatomic) BOOL hasSuccessFetchRemoteDataAfterDisplay;

- (long long)commentCellFrameStyle;
- (id)initWithTaskId:(id)a0;
- (id)initWithTaskId:(id)a0 boxId:(id)a1;
- (id)commentDataMgr;
- (void)initData;
- (Class)commentTableViewCellFrameClass;
- (id)createCommentPubbleViewWithCommentItem:(id)a0 taskId:(id)a1;
- (id)createTableViewCellFrame:(id)a0;
- (void)prepareTableViewCellForReuse:(id)a0;
- (void)handleForCommentContentViewDisplay:(BOOL)a0;
- (unsigned long long)getCurrentUnReadCountForDisplay;
- (void)checkIsHasTrackingData:(BOOL)a0;
- (void)checkisFirstLocalDataLoaded;
- (void)checkisFirstRemoteDataLoaded;
- (struct CGPoint { double x0; double x1; })convertLocation:(struct CGPoint { double x0; double x1; })a0 fromCellToTableView:(id)a1;
- (void)loopMetricsCollection:(id)a0 didFinishCollectingMetrics:(id)a1;
- (void)onMMLiveCommentDataUpdateForTaskId:(id)a0 boxId:(id)a1 isHistoryComment:(BOOL)a2;
- (void)onMMLiveCommentDataResetForTaskId:(id)a0 boxId:(id)a1;
- (BOOL)calculateCellFrameAsync;
- (void)setLoadingFirstLocalData:(BOOL)a0;
- (void)setLoadingFirstRemoteData:(BOOL)a0;

@end
