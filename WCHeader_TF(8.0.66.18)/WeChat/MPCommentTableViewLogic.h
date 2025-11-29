@class MMUIViewController, NSString, MPLandingPageCgiHandler, MPCommentMsg, MPCommentReplyCellViewModel, MPLandingPageReportLogic, NSMutableSet, MPLandingPageOpenParameter, NSMutableArray, MMTableView;
@protocol MPCommentTableViewLogicDelete;

@interface MPCommentTableViewLogic : MMObject <UITableViewDelegate, UITableViewDataSource, MPCommentViewCellDelegate>

@property (retain, nonatomic) MPCommentMsg *deletingCommentMsg;
@property (retain, nonatomic) MPCommentReplyCellViewModel *deletingReplyViewModel;
@property (nonatomic) int commentNextOffset;
@property (retain, nonatomic) NSMutableSet *commentMsgIdSet;
@property (nonatomic) BOOL isNoMoreComment;
@property (retain, nonatomic) NSMutableArray *arrSectionData;
@property (retain, nonatomic) MPLandingPageCgiHandler *cgiHandler;
@property (retain, nonatomic) MPLandingPageOpenParameter *openParam;
@property (nonatomic) unsigned int commentCellTheme;
@property (readonly, nonatomic) NSMutableArray *commentMsgArr;
@property (readonly, nonatomic) BOOL hasComment;
@property (readonly, nonatomic) BOOL onlyFansCanComment;
@property (readonly, nonatomic) BOOL funcEnable;
@property (nonatomic) BOOL isMultiReplySwitchOn;
@property (retain, nonatomic) MPLandingPageReportLogic *reportLogic;
@property (weak, nonatomic) MMUIViewController *viewController;
@property (weak, nonatomic) MMTableView *tableView;
@property (weak, nonatomic) id<MPCommentTableViewLogicDelete> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)clearAndFetchComment;
- (void)tryFetchMoreComment;
- (void)handleGetCommentList:(id)a0 funcEnable:(BOOL)a1 nextOffset:(int)a2 onlyFansCanComment:(BOOL)a3 resetData:(BOOL)a4;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)onClickDeleteBtn:(id)a0;
- (void)onClickReplyBtn:(id)a0;
- (void)onClickLikeBtn:(id)a0;
- (void)doDeleteSelectCommentMsg;
- (void)localDeleteCommentMsg:(id)a0;
- (void)doDeleteSelectCommentReply;
- (void)cancelDeleteSelectCommentMsg;
- (void).cxx_destruct;

@end
