@class NSString, NSMutableArray, MMTableView;
@protocol MMTableViewInfoDelegate;

@interface WCTableViewManager : NSObject <UITableViewDelegate, UITableViewDataSource, MMTableViewDelegate>

@property (retain, nonatomic) NSMutableArray *sections;
@property (retain, nonatomic) MMTableView *tableView;
@property (weak, nonatomic) id<MMTableViewInfoDelegate> delegate;
@property (nonatomic) BOOL disableAutoDeselectRows;
@property (nonatomic) BOOL disableEditingStyle;
@property (nonatomic) BOOL needReportClickAndExpose;
@property (retain, nonatomic) NSString *pageTitle;
@property (retain, nonatomic) Class customizedCellType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1 usedTableViewClass:(Class)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void)dealloc;
- (id)getTableView;
- (void)addTableViewToSuperView:(id)a0;
- (void)addTableViewToSuperViewWithoutResetTableViewFrame:(id)a0;
- (void)addSection:(id)a0;
- (void)insertSection:(id)a0 At:(unsigned int)a1;
- (unsigned long long)getSectionCount;
- (id)getSectionAt:(unsigned long long)a0;
- (void)removeSectionAt:(unsigned long long)a0;
- (void)removeCellAt:(id)a0;
- (id)getAllSections;
- (void)clearAllSection;
- (void)reloadTableView;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldIndentWhileEditingRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 editActionsForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (id)cellInfoAtIndexPath:(id)a0;
- (id)indexPathForCellInfo:(id)a0;
- (id)visibleCellForInfo:(id)a0;
- (id)getSeparator;
- (void)drawSeparatorFor:(id)a0 AtIndexPath:(id)a1 mode:(unsigned long long)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)mmTableView:(id)a0 touchesBegan:(id)a1 withEvent:(id)a2;
- (void)mmTableView:(id)a0 touchesMoved:(id)a1 withEvent:(id)a2;
- (void)mmTableView:(id)a0 touchesEnded:(id)a1 withEvent:(id)a2;
- (void)mmTableView:(id)a0 touchesCancelled:(id)a1 withEvent:(id)a2;
- (void).cxx_destruct;

@end
