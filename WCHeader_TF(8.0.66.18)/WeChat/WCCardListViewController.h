@class NSString, NSMutableArray, MMTableView;
@protocol WCCardListViewControllerDelegate;

@interface WCCardListViewController : MMUIViewController <MMTableViewDelegate, UITableViewDelegate, UITableViewDataSource> {
    MMTableView *m_tableView;
}

@property (retain, nonatomic) NSMutableArray *cardDataList;
@property (weak, nonatomic) id<WCCardListViewControllerDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initData;
- (void)changeDataSource:(id)a0;
- (void)initTableView;
- (void)initView;
- (void)onCancel;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewDidBeDismissed:(BOOL)a0;
- (void)dealloc;
- (void)OnDataChange;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)loadCellSubView:(id)a0 cardIndex:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
