@class NSMutableDictionary, NSMutableSet;

@interface AWEDCFeedCellTitleTrackerController : AWEDCFeedBaseController

@property (retain, nonatomic) NSMutableDictionary *titleParams;
@property (retain, nonatomic) NSMutableSet *showSet;
@property (retain, nonatomic) NSMutableSet *unvisibleCellsSet;
@property (retain, nonatomic) NSMutableDictionary *trackParams;
@property (nonatomic) BOOL isShowing;

- (void)containerBeforeViewDidLoad;
- (void)containerViewDidAppear:(BOOL)a0;
- (void)containerViewDidDisappear:(BOOL)a0;
- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)setParamsWithIndexPath:(id)a0;
- (void).cxx_destruct;

@end
