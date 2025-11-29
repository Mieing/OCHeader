@class NSString;

@interface AWEFeedScreenCastController : AWEBaseController <AWEFeedControllerProtocol, AWEScreenCastFloatingViewServiceDelegate, AWEScreenCastVideoDelegate, AWEScreenCastPendantDataProvider>

@property (nonatomic) BOOL isViewAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)leftVideoCountToLoadMore;

- (void)loadMoreCompletion:(id)a0 error:(id)a1 isFooterRefreshing:(BOOL)a2;
- (void)refreshCompletion:(id)a0 error:(id)a1 needAnimation:(BOOL)a2;
- (id)curSceneString;
- (id)floatingViewService;
- (id)pendantService;
- (void)getInnerListArgsWith:(id /* block */)a0;
- (void)enterInnerListWithUpdateScreenCastDatas:(BOOL)a0;
- (void)setupContextHandler;
- (void)updateScreenCastModels;
- (void)castPlayVideoDidChange:(id)a0;
- (id)screenCastCurReferString;
- (BOOL)isScreenCastInLandscape;
- (id)castPendantScene;
- (BOOL)isCurrentCellScreenCasting;
- (long long)screenCastFloatingViewShowType;
- (void)screenCastFloatingViewDidClicked:(id)a0;
- (double)maxYForScreenCastFloatingViewPosition:(long long)a0;
- (id)screenCastFloatingViewCurrentAwemeModel;
- (void)addScreenCastFloatingView:(id)a0;
- (void)updateForbiddenAttachmentAreas;
- (id)interactionControllerWithCell:(id)a0;
- (id)currentFeedCell;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;

@end
