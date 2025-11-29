@class NSString, NSMutableArray, WCStoryDataItem;

@interface WCStoryCommentsForSelfShowViewModel : NSObject <WCStoryFacadeExt, UITableViewDelegate, UITableViewDataSource>

@property (readonly, nonatomic) NSString *tid;
@property (retain, nonatomic) NSMutableArray *comments;
@property (retain, nonatomic) NSMutableArray *cellFrameArray;
@property (retain, nonatomic) WCStoryDataItem *dataItem;
@property (nonatomic) BOOL hadBubble;
@property (copy, nonatomic) id /* block */ configBlock;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewModelWithDataItemId:(id)a0;

- (id)initWithDataItemId:(id)a0;
- (id)init;
- (id)commentsWithDataItem:(id)a0;
- (id)cellFrameArrayWithDataItem:(id)a0;
- (BOOL)checkHadBubble:(id)a0;
- (unsigned long long)indexOfComment:(id)a0;
- (void)deleteComment:(id)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
- (void)commitBubbleWithReportObj:(id)a0;
- (void)commitWithText:(id)a0 forReplyComment:(id)a1 reportObj:(id)a2;
- (void)reload;
- (double)tableViewHeightFromTopToRow:(unsigned long long)a0;
- (unsigned long long)visitorCount;
- (BOOL)isVideoPostBySelf;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)onDataItemHasUpdate:(id)a0;
- (void).cxx_destruct;

@end
