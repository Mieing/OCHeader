@class NSString, NSMutableArray;
@protocol AWEShareTask;

@interface AWESharePanelListManager : NSObject <AWESharePanelListDataSource>

@property (retain, nonatomic) NSMutableArray *sections;
@property (retain, nonatomic) id<AWEShareTask> task;
@property (copy, nonatomic) NSString *configuratorClassName;
@property (retain, nonatomic) NSMutableArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)replaceItem:(id)a0 atIndex:(long long)a1;
- (void)configWithItems:(id)a0;
- (long long)numbersOfSections;
- (void)configWithItems:(id)a0 panel:(id)a1;
- (id)sectionWithListItem:(id)a0 panel:(id)a1;
- (void)reloadDataWithSection:(long long)a0;
- (id)cellModelForRowAtIndexPath:(id)a0;
- (id)sectionModelAtSection:(long long)a0;
- (void)registerCellIfNeededWithTableView:(id)a0;
- (void)updateDataWithSection:(long long)a0 updateModel:(id)a1;
- (id)displayCellItem;
- (id)containerViewAtIndex:(long long)a0;
- (void)reloadData;
- (id)initWithTask:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (long long)numberOfRowsInSection:(long long)a0;
- (void)setup;
- (double)heightForRowAtIndexPath:(id)a0;
- (double)heightForHeaderInSection:(long long)a0;
- (double)heightForFooterInSection:(long long)a0;
- (id)viewForHeaderInSection:(long long)a0;
- (id)viewForFooterInSection:(long long)a0;
- (void)addSection:(id)a0;
- (id)currentItems;

@end
