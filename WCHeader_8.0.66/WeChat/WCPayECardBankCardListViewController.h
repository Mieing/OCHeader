@class NSString, MMTableView;
@protocol WCPayECardBankCardListViewControllerDelegate;

@interface WCPayECardBankCardListViewController : WCPayBaseViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) MMTableView *tableView;
@property (weak, nonatomic) id<WCPayECardBankCardListViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(BOOL)a0;
- (void)setupTableView;
- (void)leftBarButtonItemClick;
- (void)reloadTableView;
- (id)setupTableHeaderView;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)makeBankInfoCell:(id)a0 bankInfo:(id)a1 isLastOne:(BOOL)a2;
- (void)makeSelectNewCardToVerifyCell:(id)a0;
- (void).cxx_destruct;

@end
