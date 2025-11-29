@interface AWEMultiContentImpl.MultiContentModuleServiceImpl : HTSService <AWEMultiContentModuleService>

- (Class)slidesClipCellClass;
- (id)videoCoverModelWithAweme:(id)a0;
- (BOOL)canProgressPan:(unsigned long long)a0;
- (BOOL)isHitFriendsStoryProgressBarOptimization;
- (id)imageCoverEmptyModel;
- (id)albumPageContext;
- (BOOL)isNonVideoCardContentWithModel:(id)a0;
- (Class)storyVideoAlbumSectionViewModelClass;
- (id)storyVideoAlbumSectionViewModelWithModel:(id)a0 pageContext:(id)a1;
- (id)createClipVideoAdapterWithContainerView:(id)a0;
- (id)albumPreviewImagesWithImageModel:(id)a0;
- (id)createRichAwemeViewController;
- (Class)imagePreloader;
- (Class)musicImageBeatsPreloader;
- (id)createAlbumFinishTriggerWith:(id)a0;
- (Class)albumFinishTrigger;
- (id)createSlidesViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 awemeModel:(id)a1 referString:(id)a2 trackPlayFinishBlock:(id /* block */)a3 trackNewPlayFinishBlock:(id /* block */)a4;
- (long long)scaleModeWithImageSize:(struct CGSize { double x0; double x1; })a0;
- (id)createSlidesViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 playMode:(unsigned long long)a1 awemeModel:(id)a2 referString:(id)a3 trackPlayFinishBlock:(id /* block */)a4 trackNewPlayFinishBlock:(id /* block */)a5;
- (Class)albumPreviewFlowLayoutClass;
- (id)albumPreviewInteractionManager;
- (id)videoProgressInteractionManager;
- (Class)videoProgressInteractionManagerClass;
- (id)progressInteractionHotZoneManager;
- (id)awemeModelWithRichContentDataModel:(id)a0;
- (void)loadMoreClipsIfNeedWithAweme:(id)a0 atIndex:(long long)a1 completion:(id /* block */)a2;
- (void)preloadImageWithDatasource:(id)a0 currentIndex:(long long)a1 referString:(id)a2;
- (void)preloadImageAndVideoWithDatasource:(id)a0 currentIndex:(long long)a1 referString:(id)a2 bizScene:(id)a3;
- (void)preloadVideoWithDatasource:(id)a0 currentIndex:(long long)a1 referString:(id)a2 bizScene:(id)a3;
- (void)preloadLivePhotoWithDatasource:(id)a0 currentIndex:(long long)a1 referString:(id)a2 bizScene:(id)a3;
- (void)loadAggregationListIfNeededWithModel:(id)a0;
- (void)trackPureClearScreenModeExit:(id)a0 enterFrom:(id)a1 exitMethod:(id)a2 zoomSize:(double)a3;
- (id)createRichContentViewController;
- (id)init;

@end
