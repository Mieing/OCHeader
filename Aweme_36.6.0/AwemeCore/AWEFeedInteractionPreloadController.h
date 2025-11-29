@class NSString, AWEFeedCellManager;

@interface AWEFeedInteractionPreloadController : AWEBaseController <AWEFeedControllerProtocol, AWEFeedInteractionPreloadControllerProtocol>

@property (retain, nonatomic) AWEFeedCellManager *cellManager;
@property (nonatomic) BOOL isColdFirstCell;
@property (nonatomic) double lastContentOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (id)feedPageContext;
- (void)viewDidLoadBeforeTableviewSetup;
- (void)viewDidLoadAfterTableviewSetup;
- (void)willConfigureCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (id)preloadManager;
- (void)cancelInteractionPreload;
- (void)preloadInteraction;
- (void)configDequeExpectedIndexWithModel:(id)a0 andDirection:(id)a1;
- (BOOL)ifPreloadWithModel:(id)a0;
- (void)onFeedScrollDidEnd;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tableViewBounds;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;

@end
