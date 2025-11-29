@class NSString, NSMapTable;

@interface AmoebaGeneralMonitorService : NSObject <AmoebaGeneralMonitorExt>

@property (retain, nonatomic) NSMapTable *monitorTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (id)init;
- (void)onAccountInit;
- (void)onAccountClearData;
- (void)addGeneralMonitor:(id)a0 observerType:(unsigned long long)a1;
- (void)removeGeneralMonitor:(id)a0;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)onEnterForeground2;
- (void)onEnterBackground2;
- (void)onViewDidAppear:(id)a0;
- (void)onViewDidDisappear:(id)a0;
- (void)onScrollViewDidScroll:(id)a0;
- (void)onScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)onScrollViewDidEndDecelerating:(id)a0;
- (void)onReloadData:(id)a0;
- (void)onReloadRowsAtIndexPaths:(id)a0;
- (void)onReloadSections:(id)a0;
- (void)onReloadItemsAtIndexPaths:(id)a0;
- (void)onInsertSectionsWithRowAnimation:(id)a0;
- (void)onDeleteSectionsWithRowAnimation:(id)a0;
- (void)onInsertRowsAtIndexPathsWithRowAnimation:(id)a0;
- (void)onDeleteRowsAtIndexPathsWithRowAnimation:(id)a0;
- (void)onInsertSections:(id)a0;
- (void)onDeleteSections:(id)a0;
- (void)onInsertItemsAtIndexPaths:(id)a0;
- (void)onDeleteItemsAtIndexPaths:(id)a0;
- (void)onSetHidden:(id)a0 hidden:(BOOL)a1;
- (void)onCellForRowAtIndexPath:(id)a0 indexPath:(id)a1;
- (void)onDidEndDisplayingCell:(id)a0 forRowAtIndexPath:(id)a1;
- (void)onNearbySubTabAppear:(unsigned long long)a0 withScene:(unsigned long long)a1;
- (void)onNearbySubTabDisappear:(unsigned long long)a0 withScene:(unsigned long long)a1;
- (BOOL)hookUICollectionView:(id)a0;
- (BOOL)hookUITableView:(id)a0;
- (void)addMonitorView:(id)a0 exposeBlock:(id /* block */)a1;
- (void)addMonitorView:(id)a0 exposeBlock:(id /* block */)a1 exposeRate:(double)a2 exposeMinTime:(unsigned long long)a3;
- (void)removeMonitorViewBlock:(id)a0;
- (void)forceChangeExpState:(id)a0 isExp:(BOOL)a1;
- (void)addMonitorVC:(id)a0 exposeBlock:(id /* block */)a1;
- (void)removeMonitorVCBlock:(id)a0;
- (void)viewDidAppear:(id)a0;
- (void)viewDidDisappear:(id)a0;
- (void)nearbySubTabAppear:(unsigned long long)a0 withScene:(unsigned long long)a1;
- (void)nearbySubTabDisappear:(unsigned long long)a0 withScene:(unsigned long long)a1;
- (void).cxx_destruct;

@end
