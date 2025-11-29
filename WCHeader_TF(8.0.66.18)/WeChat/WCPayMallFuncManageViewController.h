@class NSString, NSMutableDictionary, NSMutableArray, MMTableView;
@protocol WCPayMallFuncManageViewControllerDelegate;

@interface WCPayMallFuncManageViewController : WCPayBaseViewController <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate> {
    id<WCPayMallFuncManageViewControllerDelegate> m_delegate;
    MMTableView *m_tableView;
}

@property (retain, nonatomic) NSMutableArray *updateFuncTypeList;
@property (retain, nonatomic) NSMutableDictionary *updateFuncDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDelegate:(id)a0;
- (void)viewDidLoad;
- (BOOL)shouldInteractivePop;
- (void)initNavigationBar;
- (id)navigationBarBackgroundColor;
- (void)refreshViewWithData:(id)a0;
- (void)copyData;
- (void)updateTableView;
- (void)onSwipeRight:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)getTableViewFooterView;
- (id)getTableViewHeaderView;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)makePayFuncItemCell:(id)a0 indexPath:(id)a1;
- (void)onSwitchChanged:(id)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (BOOL)isUpdate;
- (void)onBack;
- (void).cxx_destruct;

@end
