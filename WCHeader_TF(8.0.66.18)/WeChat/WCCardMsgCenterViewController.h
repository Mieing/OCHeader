@class UIScrollView, NSString, MMTableView, WCNewShareCardConsumedView, NSMutableDictionary, NSMutableArray, MMUILabel, MMUIButton, MMUIActivityIndicatorView;

@interface WCCardMsgCenterViewController : MMUIViewController <IWCShareCardPkgExt, WCNewShareCardConsumedViewDelegate, UITableViewDataSource, UITableViewDelegate, MMTableViewDelegate, WCActionSheetDelegate, MMWebImageViewDelegate, WCCardMsgViewDelegate> {
    NSMutableDictionary *_cellHeightDic;
    UIScrollView *_emptyView;
    MMTableView *_tableView;
    MMUIButton *_footerView;
    MMUIActivityIndicatorView *_activityView;
    MMUILabel *_loadLabel;
    unsigned int _curMinUpdateTime;
    NSString *_lastShareCardConsumedMsgCardID;
    WCNewShareCardConsumedView *_newConsumendView;
}

@property (retain, nonatomic) NSMutableArray *msgList;
@property (nonatomic) BOOL bForNewMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initNavigationBar;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)initTableView;
- (void)viewDidLayoutSubviews;
- (void)updateTableFooterHasMore:(BOOL)a0;
- (void)initEmptyView;
- (void)genNormalCell:(id)a0 IndexPath:(id)a1;
- (void)sortMsgList;
- (void)hideEmptyView;
- (void)reloadTableView;
- (void)initData;
- (void)safeAddMsgList:(id)a0;
- (BOOL)isAddedMsg:(id)a0;
- (void)onFooterClicked;
- (void)onLoadMore;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)onOperate;
- (void)onClearAllMsg;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)onLoadImageOK:(id)a0;
- (void)onAction:(id)a0;
- (void)onAcceptCard:(id)a0;
- (void)onJumpUrl:(id)a0;
- (void)onShareCardAfterConsumed:(BOOL)a0;
- (void).cxx_destruct;

@end
