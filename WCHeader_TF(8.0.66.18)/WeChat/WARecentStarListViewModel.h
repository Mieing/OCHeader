@class NSString, WAMainListStarLogic, WAPackageSweeperLogic, WAMainListPageLogic;
@protocol WADesktopStarListDelegate;

@interface WARecentStarListViewModel : WAStarListViewModel <WAMainListPageLogicDelegate> {
    WAPackageSweeperLogic *m_sweepLogic;
}

@property (retain, nonatomic) WAMainListPageLogic *pageLogic;
@property (weak, nonatomic) id<WADesktopStarListDelegate> listDelegate;
@property (weak, nonatomic) WAMainListStarLogic *starLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (long long)count;
- (BOOL)hasData;
- (BOOL)hasNoMore;
- (BOOL)isReachLimit;
- (long long)getStarNumberLimitation;
- (id)dataForIndex:(long long)a0;
- (void)initPageLogic;
- (void)refreshData;
- (BOOL)canMove;
- (void)moveItemFrom:(long long)a0 toIndex:(long long)a1;
- (BOOL)deleteItem:(long long)a0;
- (BOOL)starItem:(long long)a0;
- (void)starOrMoveItem:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)fetchNextPageItems;
- (void)onItemDeleted:(id)a0 index:(long long)a1;
- (void)onItemStared:(id)a0 index:(long long)a1;
- (void)onItemMoveFrom:(id)a0 fromIndex:(long long)a1 to:(long long)a2;
- (void)didFinishFetchNextPageItems:(id)a0 pageNum:(unsigned int)a1 beginPos:(unsigned long long)a2;
- (void)didFinishFetchNextPageItemsErrorWithErrCode:(int)a0;
- (void)onWeAppItemOpened:(id)a0;
- (void).cxx_destruct;

@end
