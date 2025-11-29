@class ZZFLEXAngelViewBatchEditChainModel, NSString, ZZFLEXAngel, ZZFLEXAngelViewEditChainModel, NSMutableArray, ZZFLEXAngelIndexPathChainModel, MMTableView, UIScrollView;

@interface ZZFLEXTableViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, ZZFLEXAngelAPIProtocol>

@property (nonatomic) long long tableViewStyle;
@property (readonly, nonatomic) MMTableView *tableView;
@property (readonly, nonatomic) NSMutableArray *data;
@property (readonly, nonatomic) ZZFLEXAngel *angel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) UIScrollView *hostView;
@property (readonly, copy, nonatomic) id /* block */ reload;
@property (readonly, copy, nonatomic) id /* block */ clear;
@property (readonly, copy, nonatomic) id /* block */ clearAllItems;
@property (readonly, copy, nonatomic) id /* block */ clearAllCells;
@property (readonly, copy, nonatomic) id /* block */ update;
@property (readonly, copy, nonatomic) id /* block */ updateAllItems;
@property (readonly, copy, nonatomic) id /* block */ updateAllCells;
@property (readonly, copy, nonatomic) id /* block */ isEmpty;
@property (readonly, copy, nonatomic) id /* block */ addSection;
@property (readonly, copy, nonatomic) id /* block */ insertSection;
@property (readonly, copy, nonatomic) id /* block */ sectionForTag;
@property (readonly, copy, nonatomic) id /* block */ deleteSection;
@property (readonly, copy, nonatomic) id /* block */ hasSection;
@property (readonly, copy, nonatomic) id /* block */ setHeader;
@property (readonly, copy, nonatomic) id /* block */ setXibHeader;
@property (readonly, copy, nonatomic) id /* block */ setFooter;
@property (readonly, copy, nonatomic) id /* block */ setXibFooter;
@property (readonly, copy, nonatomic) id /* block */ addCell;
@property (readonly, copy, nonatomic) id /* block */ addXibCell;
@property (readonly, copy, nonatomic) id /* block */ addCells;
@property (readonly, copy, nonatomic) id /* block */ addXibCells;
@property (readonly, copy, nonatomic) id /* block */ addSeperatorCell;
@property (readonly, copy, nonatomic) id /* block */ insertCell;
@property (readonly, copy, nonatomic) id /* block */ insertXibCell;
@property (readonly, copy, nonatomic) id /* block */ insertCells;
@property (readonly, copy, nonatomic) id /* block */ insertXibCells;
@property (readonly, copy, nonatomic) ZZFLEXAngelViewEditChainModel *deleteCell;
@property (readonly, copy, nonatomic) ZZFLEXAngelViewBatchEditChainModel *deleteCells;
@property (readonly, copy, nonatomic) ZZFLEXAngelViewEditChainModel *updateCell;
@property (readonly, copy, nonatomic) ZZFLEXAngelViewBatchEditChainModel *updateCells;
@property (readonly, copy, nonatomic) ZZFLEXAngelViewEditChainModel *hasCell;
@property (readonly, copy, nonatomic) ZZFLEXAngelViewEditChainModel *dataModel;
@property (readonly, copy, nonatomic) ZZFLEXAngelViewBatchEditChainModel *dataModelArray;
@property (readonly, copy, nonatomic) ZZFLEXAngelIndexPathChainModel *indexPath;

- (id)init;
- (void)loadView;
- (void)viewDidTransitionToNewSize;
- (void)dealloc;
- (void)reloadView;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void).cxx_destruct;

@end
