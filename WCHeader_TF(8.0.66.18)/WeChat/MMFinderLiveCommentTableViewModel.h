@class MMFinderLiveCommentDataAppendLogic;

@interface MMFinderLiveCommentTableViewModel : MMLiveCommentTableViewModel

@property (nonatomic) BOOL needTableViewAutoScrollToRereshBeforeUnDisplay;
@property (nonatomic) BOOL hasSuccessLoadLocalDataAfterDisplay;
@property (nonatomic) BOOL hasSuccessFetchRemoteDataAfterDisplay;
@property (retain, nonatomic) MMFinderLiveCommentDataAppendLogic *commentDataAppendLogic;
@property (nonatomic) long long commentContentState;
@property (copy, nonatomic) id /* block */ finderCellModelDidTapBlock;
@property (copy, nonatomic) id /* block */ actionInvokeBlock;
@property (copy, nonatomic) id /* block */ getSingleEnableCommentCallback;
@property (copy, nonatomic) id /* block */ tableVMDidDoubleTapBlock;
@property (copy, nonatomic) id /* block */ localCommentAppendCallback;
@property (copy, nonatomic) id /* block */ tableVMRetryPostBlock;

- (long long)commentCellFrameStyle;
- (id)initWithTaskId:(id)a0;
- (id)initWithTaskId:(id)a0 boxId:(id)a1;
- (void)initData;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (id)commentDataMgr;
- (Class)commentTableViewCellFrameClass;
- (id)createCommentPubbleViewWithCommentItem:(id)a0 taskId:(id)a1;
- (void)prepareTableViewCellForReuse:(id)a0;
- (id)appendCommentContentFromMySelf:(id)a0 toDataItem:(id)a1;
- (id)appendCommentContentFromMySelf:(id)a0 toUser:(id)a1 postType:(unsigned long long)a2 extra:(id)a3;
- (id)appendCommentContentFromMySelf:(id)a0 toUser:(id)a1 postType:(unsigned long long)a2 poiAddrSubStr:(id)a3 extra:(id)a4;
- (id)appendEmoticonCommentFromMySelf:(id)a0 toUser:(id)a1 extra:(id)a2;
- (id)finderLiveTask;
- (void)handleForCommentContentViewDisplay:(BOOL)a0;
- (void)checkIsHasTrackingData:(BOOL)a0;
- (void)checkisFirstLocalDataLoaded;
- (void)checkisFirstRemoteDataLoaded;
- (struct CGPoint { double x0; double x1; })convertLocation:(struct CGPoint { double x0; double x1; })a0 fromCellToTableView:(id)a1;
- (void)onGetFinderLiveAppMsgListWithTaskId:(id)a0 appMsgList:(id)a1 isHistoryMsg:(BOOL)a2;
- (void)onInsertLiveCommentFail;
- (void)loopMetricsCollection:(id)a0 didFinishCollectingMetrics:(id)a1;
- (BOOL)canAddHotWords;
- (void)onMMLiveCommentDataUpdateForTaskId:(id)a0 boxId:(id)a1 isHistoryComment:(BOOL)a2;
- (void)onMMLiveCommentDataInsertPreForTaskId:(id)a0 boxId:(id)a1;
- (void)onMMLiveCommentDataLoadedForTaskId:(id)a0 boxId:(id)a1;
- (void)onMMLiveCommentDataResetForTaskId:(id)a0 boxId:(id)a1;
- (void)onMMFinderGroupLiveChatMessageSuccessLoaded:(id)a0;
- (void)onMMFinderGroupLiveChatLocalMessageLoaded:(id)a0;
- (BOOL)calculateCellFrameAsync;
- (void)setLoadingFirstLocalData:(BOOL)a0;
- (void)setLoadingFirstRemoteData:(BOOL)a0;
- (void)updateEnableCustomData;
- (void)showHotWord:(id)a0 prevCount:(long long)a1 currentCount:(long long)a2;
- (void)hideHotWords;
- (void).cxx_destruct;

@end
