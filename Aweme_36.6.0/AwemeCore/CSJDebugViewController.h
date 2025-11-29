@class CSJMaterialMeta, NSArray, NSMutableDictionary, NSString, UIView, UITableView;

@interface CSJDebugViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UIView *custormNavigationView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *footerView;
@property (copy, nonatomic) NSArray *dataArray;
@property (retain, nonatomic) CSJMaterialMeta *meta;
@property (retain, nonatomic) NSMutableDictionary *cellHeightDictionry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_creatUI;
- (id)_creatCellLabelTextWithDict:(id)a0;
- (void)_copyAll;
- (id)initWithMaterialMeta:(id)a0;
- (void).cxx_destruct;
- (void)_close:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
