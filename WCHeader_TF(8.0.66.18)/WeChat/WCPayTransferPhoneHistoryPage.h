@class UILabel, UIView, NSString, TransferPhoneGetHisRcvrsResp, MMRefreshTableFooterView, WCPayCss, MMTableView, MMUIActivityIndicatorView;
@protocol WCPayTransferPhoneHistoryPageDelegate;

@interface WCPayTransferPhoneHistoryPage : WCPayBaseViewController <MMRefreshTableFooterDelegate, UITableViewDelegate, UITableViewDataSource>

@property (weak) id<WCPayTransferPhoneHistoryPageDelegate> m_delegate;
@property (retain) MMTableView *m_tableView;
@property (retain) WCPayCss *css;
@property (retain) TransferPhoneGetHisRcvrsResp *hisRcvrsResp;
@property (retain) UILabel *loadingLabel;
@property (retain) MMUIActivityIndicatorView *indicatorView;
@property unsigned long long loadingState;
@property (retain) UIView *headerView;
@property (retain) MMRefreshTableFooterView *footerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidBePoped:(BOOL)a0;
- (void)viewDidBeDismissed:(BOOL)a0;
- (void)viewDidLoad;
- (void)updateHeaderView;
- (void)updateFooterView;
- (void)updateLoadingLabel;
- (void)updateIndicator;
- (void)reloadTableView;
- (void)setDelegate:(id)a0;
- (void)refreshViewWithData:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (void).cxx_destruct;

@end
