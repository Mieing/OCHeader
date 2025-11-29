@interface AWEUserWorkCellCoverControllerNew : AWEUserWorkController

- (void)containerViewWillAppear:(BOOL)a0;
- (void)containerViewDidDisappear:(BOOL)a0;
- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerCollectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)sectionController:(id)a0 configCell:(id)a1 model:(id)a2 index:(long long)a3;
- (BOOL)enableOptimizeAnimationCoverLeak;
- (void)applicationDidEnterBackgroundActive:(id)a0;
- (void)clearAnimatedImageBufferAndStopAnimation:(BOOL)a0;
- (void)dealloc;
- (void)containerViewDidLoad;

@end
