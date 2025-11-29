@class NSString, NSTimer, NSMutableSet, NSMutableArray;

@interface AWEFeedDCMidSearchStateController : AWEDCFeedBaseController <AWEFeedDCMidSearchTrackerControllerProtocol>

@property (retain, nonatomic) NSTimer *checkStateTimer;
@property (retain, nonatomic) NSMutableSet *hasShownItemIDs;
@property (retain, nonatomic) NSMutableSet *showingItemIDs;
@property (retain, nonatomic) NSMutableArray *invisibleCells;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerScrollViewDidScroll:(id)a0;
- (void)containerScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)containerScrollViewDidEndDecelerating:(id)a0;
- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)onFetchListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)createStateTimer;
- (void)checkCellVisibleState;
- (void)addToShowingItems:(id)a0;
- (void)postShowingItemsIfNeeded;
- (void)clearShownItems;
- (void)stateTimerTick;
- (void)postStateSuccess;
- (void)lynxContainerContentDidUpdate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)containerViewDidLoad;

@end
