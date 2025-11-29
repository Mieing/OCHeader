@protocol WAStarListViewModelDelegate;

@interface WAStarListViewModel : MMObject

@property (weak, nonatomic) id<WAStarListViewModelDelegate> delegate;
@property (nonatomic) unsigned long long scene;

- (long long)count;
- (BOOL)hasData;
- (BOOL)hasNoMore;
- (BOOL)isReachLimit;
- (long long)getStarNumberLimitation;
- (id)dataForIndex:(long long)a0;
- (BOOL)canMove;
- (void)moveItemFrom:(long long)a0 toIndex:(long long)a1;
- (BOOL)deleteItem:(long long)a0;
- (BOOL)starItem:(long long)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)refreshData;
- (void)notifyEditMode:(BOOL)a0;
- (void)onItemDeleted:(id)a0 index:(long long)a1;
- (void)onItemStared:(id)a0 index:(long long)a1;
- (void)onItemMoveFrom:(id)a0 fromIndex:(long long)a1 to:(long long)a2;
- (void).cxx_destruct;

@end
