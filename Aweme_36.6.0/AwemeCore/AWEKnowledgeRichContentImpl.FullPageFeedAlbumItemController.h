@interface AWEKnowledgeRichContentImpl.FullPageFeedAlbumItemController : AWEKnowledgeSwiftBasic.FullPageBaseItemController <AFDAlbumContentModeDelegate, AWELivePhotoPlayControlButtonExternalDelegate, AWEFullPageFeedPageModeSensitiveComponentProtocol, AWEKnowledgeAlbumPreviewViewDelegate, AFDRichContentAlbumImageDelegateProtocol, AFDFullPageSliderContainerDelegate> {
    void /* unknown type, empty encoding */ currentSliderIndex;
    void /* unknown type, empty encoding */ sliderContainer;
    void /* unknown type, empty encoding */ progressBarView;
    void /* unknown type, empty encoding */ currentCell;
    void /* unknown type, empty encoding */ isFirstSectionDisplay;
    void /* unknown type, empty encoding */ needSkipOnceVideoPlayFinish;
    void /* unknown type, empty encoding */ albumPreviewView;
    void /* unknown type, empty encoding */ sliderContainerUpdateBlock;
    void /* unknown type, empty encoding */ sliderAnchorShowAnimatedBlock;
    void /* unknown type, empty encoding */ $__lazy_storage_$_visibleChecker;
    void /* unknown type, empty encoding */ isLivePhotoPlayControlMenuShown;
    void /* unknown type, empty encoding */ livePhotoPlayControlMenuDismissDate;
}

- (unsigned long long)setContentModeWithOriginMode:(unsigned long long)a0 index:(long long)a1 model:(id)a2;
- (id)livePhotoPlayControlButtonVisibleCheckerContainerView;
- (double)livePhotoPlayControlButtonTopShadedHeight;
- (double)livePhotoPlayControlButtonBottomShadedHeight;
- (void)onLivePhotoPlayControlButtonShown;
- (void)onLivePhotoPlayControlButtonClicked;
- (void)onLivePhotoPlayControlMenuClickedWithType:(unsigned long long)a0;
- (void)onPageModeWillChange:(unsigned long long)a0;
- (double)getDeltaHeightWhenPageModeChange:(unsigned long long)a0;
- (void)executePageModeChangeAnimation:(unsigned long long)a0;
- (void)didSelectImageAtIndex:(long long)a0;
- (void)imageConfigMsg:(id)a0;
- (BOOL)sliderShouldAddProgressView;
- (void)sliderDidCreateProgressView:(id)a0;
- (void)sliderScrollViewWillBeginDragging:(id)a0;
- (void)sliderScrollViewDidEndDragging:(id)a0;
- (void)sliderDidUpdatePaginatedProgressWithIndex:(long long)a0 totalCount:(long long)a1;
- (void)sliderDidScrollTo:(long long)a0 totalCount:(long long)a1 slideMethod:(unsigned long long)a2;
- (void)viewControllerDidAppear:(BOOL)a0;
- (void)configCellWithCell:(id)a0 viewModel:(id)a1;
- (void)cellDidEndDisplayWithCell:(id)a0 viewModel:(id)a1;
- (void)cellWillDisplayWithCell:(id)a0 viewModel:(id)a1;
- (void)sectionControllerWillDisplay;
- (void)sectionControllerDidEndDisplaying;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (Class)cellClass;

@end
