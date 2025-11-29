@class AWEChallengeDetailFeedSectionController, NSString, NSDictionary, UIViewController;
@protocol AWEChallengeDetailBaseFeedViewControllerDelegate, AWEChallengeDetailContainerContextProtocol, UIViewControllerPreviewing;

@interface AWEChallengeDetailBaseFeedViewController : AWEBaseListViewController <UIScrollViewDelegate, AWEPreviewable, AWEListControllerLifeCycle, AWEChallengeDetailBaseFeedViewControllerOverride, AWEChallengeDetailFeedVCProtocol, AWEZoomTransitionOuterContextProvider>

@property (retain, nonatomic) id<UIViewControllerPreviewing> forceTouchToken;
@property (retain, nonatomic) AWEChallengeDetailFeedSectionController *feedSectionController;
@property (nonatomic) struct CGPoint { double x; double y; } originalScrollViewOffset;
@property (weak, nonatomic) UIViewController<AWEChallengeDetailContainerContextProtocol> *containerViewController;
@property (weak, nonatomic) id<AWEChallengeDetailBaseFeedViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *zoomTransitionContext;

+ (id)controllerWithFeedSectionViewModel:(id)a0;

- (void)listDidReloadDataWithCollectionView:(id)a0;
- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (void)listDidPerformBatchUpdatesWithCollectionView:(id)a0;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (void)bindViewModel;
- (BOOL)shouldHideNoMoreText;
- (id)previewingViewControllerForView:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewingSourceRectForView:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)didCommitViewController:(id)a0;
- (void)unregisterForceTouch;
- (void)showFooter:(id)a0;
- (void)updateStreamingCellIfNeeded;
- (void)updateContainerOffset:(BOOL)a0;
- (id)previewingViewControllerAtIndexPath:(id)a0;
- (void)updateFeedWithDataState:(long long)a0;
- (BOOL)checkCellIsInScreen:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (id)navigationController;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (void)setupUI;
- (void)setupCollectionView:(id)a0;
- (void)releaseMemory;

@end
