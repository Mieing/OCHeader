@interface AWEDCFeedInnerPreparePlayController : AWEDCFeedBaseController

- (id)referString;
- (void)detailTableViewControllerDidDisappear:(id)a0 currentAwemeModel:(id)a1;
- (void)containerCollectionView:(id)a0 didHighlightItemAtIndexPath:(id)a1;
- (void)willEnterDetailVCAtIndexPath:(id)a0 withModel:(id)a1 referString:(id)a2 selectedCell:(id)a3;
- (BOOL)enablePreparePlay:(id)a0;
- (BOOL)enableOptimizePrerenderProcess;
- (void)prerenderPlayerIfNeeded:(id)a0 prerenderTime:(unsigned long long)a1;
- (unsigned long long)prerenderTimeForPlayer;

@end
