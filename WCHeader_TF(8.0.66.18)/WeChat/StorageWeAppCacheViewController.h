@class NSString, NSMutableArray, MMTableView;

@interface StorageWeAppCacheViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) NSMutableArray *weappDataArray;
@property (retain, nonatomic) MMTableView *tableView;
@property (copy, nonatomic) id /* block */ afterSelectCompletion;
@property (retain, nonatomic) NSMutableArray *selectedDataArray;
@property (nonatomic) BOOL bSelectAll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithClassification:(id)a0 withCompletion:(id /* block */)a1;
- (void)viewDidLoad;
- (void)initTableView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getTableViewFrame;
- (void)onReturn;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
