@class MMLiveCommentDataItem, NSArray, NSString, MMLiveTaskId, UITableView;

@interface MMFinderLiveKeepDisplayCommentTableViewModel : NSObject <MMLiveCommentDataExt, MMLiveCommentPubbleCellFrameChangeDelegate, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (nonatomic) BOOL currentCommentDisabled;
@property (retain, nonatomic) NSArray *displayCommetDataItemArr;
@property (retain, nonatomic) NSArray *displayCommentCellFrameArr;
@property (retain, nonatomic) MMLiveCommentDataItem *anchorNoticeCommentDataItem;
@property (nonatomic) double contentWidth;
@property (nonatomic) double contentHeight;
@property (copy, nonatomic) id /* block */ onKeepDisplayCommentUpdateCallback;
@property (retain, nonatomic) UITableView *commentView;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)updateCommentDisabled:(BOOL)a0;
- (void)onCommentDisable;
- (void)onCommentEnable;
- (void)onKeepDisplayCommentUpdate;
- (void)reloadDisplayCommetDataItemArr;
- (void)updateContentFrameProperty;
- (BOOL)updateAnchorNoticeCommentDataItemWithReceivedItem:(id)a0;
- (void)onMMLiveCommentDataAppendNeedKeepDisplayComments:(id)a0 taskId:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)commentPubbleCellFrameExpandChangeAndTop:(BOOL)a0 cellFrame:(id)a1;
- (void).cxx_destruct;

@end
