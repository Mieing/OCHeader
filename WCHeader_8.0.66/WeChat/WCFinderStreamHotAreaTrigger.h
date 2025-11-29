@class NSMutableArray, NSString, UITableViewCell, NSObject, UIViewController;
@protocol WCFinderStreamHotAreaAdapter, WCFinderStreamHotAreaTriggerDelegate;

@interface WCFinderStreamHotAreaTrigger : NSObject <UIScrollViewDelegate, UITableViewDelegate, UICollectionViewDelegate>

@property (weak, nonatomic) UIViewController *vc;
@property (retain, nonatomic) id<WCFinderStreamHotAreaAdapter> adapter;
@property (weak, nonatomic) UITableViewCell *lastPlayCell;
@property (retain, nonatomic) NSObject *lastPlayIdentifier;
@property (nonatomic) BOOL isScrolling;
@property (retain, nonatomic) NSMutableArray *pendingRelease;
@property (weak, nonatomic) id<WCFinderStreamHotAreaTriggerDelegate> delegate;
@property (nonatomic) double guideLine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTableView:(id)a0;
- (void)hookScrollViewDelegate:(id)a0 fromHook:(BOOL)a1;
- (void)hookDelegate:(id)a0 selector:(SEL)a1 empty:(SEL)a2 block:(id)a3;
- (void)beforeScrollViewSetDelegate:(id)a0;
- (void)willMoveToWindow:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)trigger;
- (void)throttleTrigger;
- (void)_doTrigger:(double)a0 forDrag:(BOOL)a1;
- (void)_dropFocusForLast:(id)a0;
- (void)_pushReleaseBlock:(id /* block */)a0;
- (void)cleanPendingReleasePlayer;
- (void)emptyScrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)emptyScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)emptyScrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)emptyTableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)emptyCollectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void).cxx_destruct;

@end
