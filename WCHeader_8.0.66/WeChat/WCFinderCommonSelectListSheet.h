@class NSArray, WCFinderCommonSelectListSheetItem, NSString, UITableView;

@interface WCFinderCommonSelectListSheet : WCFinderCustomPanelSheet <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) WCFinderCommonSelectListSheetItem *selectItem;
@property (copy, nonatomic) NSArray *itemArray;
@property (copy, nonatomic) NSString *headTitle;
@property (copy, nonatomic) id /* block */ selectBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithItemArray:(id)a0 selectedItem:(id)a1 title:(id)a2;
- (id)loadContentView;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;

@end
