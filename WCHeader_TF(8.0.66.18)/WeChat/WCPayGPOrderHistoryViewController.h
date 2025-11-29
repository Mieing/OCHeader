@class MMUILabel, NSString, NSMutableArray, MMTableView;
@protocol WCPayGPOrderHistoryControllerDelegate;

@interface WCPayGPOrderHistoryViewController : WCPayBaseViewController <UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate>

@property (weak, nonatomic) id<WCPayGPOrderHistoryControllerDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *orderHistory;
@property (retain, nonatomic) NSString *h5AARecordUrl;
@property (nonatomic) unsigned long long curHistoryScene;
@property (nonatomic) BOOL bIsLoadingMore;
@property (nonatomic) BOOL bIsDataLoadEnd;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) MMUILabel *tipsLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshViewControllerWithOrderHistoryListData:(id)a0 bIsReloadFromTop:(BOOL)a1 dataScene:(unsigned long long)a2;
- (void)refreshViewControllerWhenOrderHistoryRespBack;
- (void)refreshViewControllerWhenOrderHistoryError;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setupData;
- (void)setupNavigationBar;
- (void)setupContentView;
- (void)setupEmptyTipsView;
- (void)removeEmptyTipsView;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (id)genTableFooterView;
- (void)genTableFooterViewAfterLoadAllData;
- (void)orderHistoryVCCancel;
- (void)rightBarButtonClick;
- (void)h5RecordEnteranceBtnPress;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)userDidTakeScreenshot:(id)a0;
- (void).cxx_destruct;

@end
