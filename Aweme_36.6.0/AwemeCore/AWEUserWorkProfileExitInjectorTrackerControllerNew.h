@interface AWEUserWorkProfileExitInjectorTrackerControllerNew : AWEUserWorkController

@property (nonatomic) long long profileTabType;

- (void)containerScrollViewWillBeginDragging:(id)a0;
- (void)containerViewDidAppear:(BOOL)a0;
- (void)containerViewDidDisappear:(BOOL)a0;
- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)sessionParamsManager;
- (void)containerViewDidLoad;

@end
