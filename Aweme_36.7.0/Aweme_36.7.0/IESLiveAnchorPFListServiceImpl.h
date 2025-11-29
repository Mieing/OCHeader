@class NSString, NSHashTable, IESLiveAnchorPFListView, NSMutableArray;

@interface IESLiveAnchorPFListServiceImpl : IESLiveGeneralBaseService <IESLiveAnchorPFListService, UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) NSHashTable *listObservers;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) IESLiveAnchorPFListView *listView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

- (void)serviceUninstall;
- (void)serviceWillLaunchWithParam:(id)a0;
- (id)popupContainer;
- (id)popupService;
- (BOOL)isValidItem:(id)a0;
- (BOOL)containsListItem:(id)a0;
- (void)addListItem:(id)a0;
- (void)removeListItem:(id)a0;
- (void)reloadListItem:(id)a0;
- (BOOL)listItemIsShowing:(id)a0;
- (void)hideListView;
- (BOOL)listViewIsShowing;
- (void)pfListViewWillAppear;
- (void)pfListViewDidAppear;
- (void)pfListViewWillDisAppear;
- (void)pfListViewDidDisAppear;
- (void)initializeParams;
- (void)destroyParams;
- (long long)findInsertIndexForItem:(id)a0;
- (void)setupListView;
- (void)setupPopupItem;
- (long long)popupItemType;
- (double)listViewHeight;
- (void)cleanListView;
- (void)addListObserver:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)showListView;
- (void)removeListObserver:(id)a0;
- (void)insertRowsAtIndexPaths:(id)a0 withRowAnimation:(long long)a1;
- (void)deleteRowsAtIndexPaths:(id)a0 withRowAnimation:(long long)a1;
- (void)reloadRowsAtIndexPaths:(id)a0 withRowAnimation:(long long)a1;
- (long long)indexForItem:(id)a0;

@end
