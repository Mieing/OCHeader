@interface UIScrollViewHookHelper : NSObject

+ (void)searchAndHookScrollViewCell:(id)a0;
+ (void)hookUITableView:(id)a0;
+ (void)hookUICollectionView:(id)a0;
+ (void)unHookUITableView:(id)a0;
+ (void)unHookUICollectionView:(id)a0;
+ (void)addInstanceMethodWithSelectors:(SEL)a0 object:(id)a1 fromClass:(Class)a2 toClass:(Class)a3;
+ (void /* function */ *)implementationOfMethodSelector:(SEL)a0 fromClass:(Class)a1;
+ (void)addInstanceMethodWithSelector:(SEL)a0 fromClass:(Class)a1 toClass:(Class)a2;
+ (void)addInstanceMethodWithDestinationSelector:(SEL)a0 sourceSelector:(SEL)a1 fromClass:(Class)a2 toClass:(Class)a3;
+ (BOOL)isHookSwitch;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;

@end
