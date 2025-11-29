@class NSTimer, AWEIMTaskConversationDetailListDataSource, AWEIMTaskDetailistContext, NSString, AWEUILoadingView, UITableView, NSMutableArray, AWEIMTaskCardListCellItem, AWEIMTaskNetErrorView, UILabel, AWEIMTaskPlatformTracker;
@protocol IESLCMessageHandlerProtocol;

@interface AWEIMTaskConversationDetailViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEIMRendererProtocol, AWEIMSwipeTableViewCellDelegate, IESLCMessageHandlerService>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEIMTaskNetErrorView *netErrorView;
@property (retain, nonatomic) UILabel *emptyLabel;
@property (retain, nonatomic) AWEIMTaskConversationDetailListDataSource *dataSource;
@property (retain, nonatomic) AWEIMTaskCardListCellItem *pageItem;
@property (retain, nonatomic) NSTimer *timer;
@property (weak, nonatomic) AWEIMTaskDetailistContext *context;
@property (retain, nonatomic) NSMutableArray *cellTrackedArray;
@property (retain, nonatomic) AWEIMTaskPlatformTracker *taskPlatformTracker;
@property (retain, nonatomic) AWEUILoadingView *businessLoadingView;
@property (nonatomic) BOOL isFirstAppear;
@property (retain, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL needTrackEnterListPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;

- (void)ieslc_messageHandler:(id)a0 didReceiveMsg:(id)a1;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)p_addObserver;
- (id)tableView:(id)a0 editActionsForRowAtIndexPath:(id)a1 forOrientation:(long long)a2;
- (id)tableView:(id)a0 editActionsOptionsForRowAtIndexPath:(id)a1 forOrientation:(long long)a2;
- (BOOL)tableView:(id)a0 canBeginEditingRowAtIndexPath:(id)a1 forOrientation:(long long)a2 forGesture:(id)a3;
- (void)p_fetchData;
- (void)__trackEnterEvent;
- (void)p_handleReceivedPushServiceWithMsg:(id)a0;
- (double)pollingTimeInterval;
- (void)onRetryRequestData;
- (void)p_enableTimer;
- (void)p_disabletTimer;
- (id)productDeleteActionForRowAtIndexPath:(id)a0 cellModel:(id)a1;
- (id)swipeTextFont;
- (id)swipeTextColor;
- (id)deleteBackgroundColor;
- (void)p_setupUI;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)viewDidDisappear;

@end
