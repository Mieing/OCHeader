@class NSArray, NSDictionary, NSString, NSNumber, UITableView;

@interface WCFinderCommentSortSheet : WCFinderCustomPanelSheet <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSDictionary *titleNameArray;
@property (retain, nonatomic) NSArray *sortItemList;
@property (retain, nonatomic) NSNumber *selectedIndex;
@property (copy, nonatomic) id /* block */ sortChangeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSortCtrl:(id)a0 selectedIndex:(unsigned long long)a1;
- (id)loadContentView;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;

@end
