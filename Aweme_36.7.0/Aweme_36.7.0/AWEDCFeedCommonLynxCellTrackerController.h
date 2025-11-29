@class NSMutableSet;

@interface AWEDCFeedCommonLynxCellTrackerController : AWEDCFeedBaseController

@property (retain, nonatomic) NSMutableSet *reportedLynxCardItemIDs;

- (void)containerViewDidAppear:(BOOL)a0;
- (void)containerViewDidDisappear:(BOOL)a0;
- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)trackLynxCardShowEventIfNeededForCell:(id)a0;
- (void).cxx_destruct;

@end
