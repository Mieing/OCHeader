@class AWELandscapeSplitScreenViewController, NSString, NSIndexPath, DUXToast;

@interface AWELandscapeFeedSplitScreenController : AWELandscapeFeedBaseController <AWELandscapeSplitScreenDelegate, AWELandscapeFeedSplitScreenControllerProtocol>

@property (retain, nonatomic) AWELandscapeSplitScreenViewController *splitScreenVC;
@property (retain, nonatomic) DUXToast *toast;
@property (nonatomic) double startSpliteInterval;
@property (retain, nonatomic) NSIndexPath *beginDragIndexInMixSplit;
@property (retain, nonatomic) NSIndexPath *endDragIndexInMixSplit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)exitLandscapeWithCompletion:(id /* block */)a0;
- (void)exitSplitScreenWithMethod:(id)a0 completion:(id /* block */)a1;
- (void)enterSplitScreenToMode:(long long)a0 dataController:(id)a1 completionBlock:(id /* block */)a2;
- (void)insertAndScrollCollectionViewToModel:(id)a0;
- (void)transfromDataSourceToOriginDataWithCompletion:(id /* block */)a0;
- (void)updateScreenCastModels;
- (void)addSplitScreenVCIfNeeded;
- (void)setupCollectionViewFooter:(id)a0;
- (void)configCollectionViewHeader;
- (void)showAnimationForEnterSplitScreen:(long long)a0 completion:(id /* block */)a1;
- (void)enterSplitPostModeWithCurrentUserModel:(id)a0 completion:(id /* block */)a1;
- (void)enterSplitMixModeWithBlock:(id /* block */)a0;
- (void)enterSpiltScreen:(long long)a0 completionBlock:(id /* block */)a1;
- (void)enterSplitLVSelectEpisodeModeWithCompletionBlock:(id /* block */)a0;
- (void)enterSplitScreenWithType:(long long)a0;
- (void)configCollectionViewAfterEnterSplit:(long long)a0;
- (void)transfromDataSourceToSplitData:(long long)a0 dataController:(id)a1 completionBlock:(id /* block */)a2;
- (void)changeDataToSpiltScreen:(long long)a0 dataController:(id)a1 completionBlock:(id /* block */)a2;
- (void)changeDataToFullScreenWithCompletion:(id /* block */)a0;
- (void)showAnimationForExitSplitScreen:(id /* block */)a0;
- (void)recoverCollectionViewHeaderIfNeed;
- (void)recoverCollectionViewFooterForSplitIfNeed;
- (void)trackSplitModeStayTime;
- (BOOL)shouldShowAlbumSkipToastInMixSplit;
- (void)showSkipAlbumToastInMixSplitIfNeed;
- (void)scrollCollectionViewToItemAtIndexPath:(id)a0 completionBlock:(id /* block */)a1;
- (void)setupMixSlideRefreshBlock;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndScrolling;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)setupCollectionView:(id)a0;

@end
