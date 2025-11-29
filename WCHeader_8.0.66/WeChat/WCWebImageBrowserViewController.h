@class WCWebImageBrowserConfig, WCImageSearchEntity, NSCache, MMWebViewMpInfoModel, WCWebImageButtonsContainerView, WCWebImageSourceInfoButton, ImageBrowseButton;

@interface WCWebImageBrowserViewController : PhotoViewController {
    NSCache *_watermarkImageCache;
}

@property (retain, nonatomic) WCWebImageButtonsContainerView *bottomBarContainerView;
@property (retain, nonatomic) ImageBrowseButton *moreBtn;
@property (retain, nonatomic) ImageBrowseButton *downloadImageBtn;
@property (retain, nonatomic) ImageBrowseButton *searchBtn;
@property (retain, nonatomic) ImageBrowseButton *circleToSearchBtn;
@property (retain, nonatomic) WCWebImageSourceInfoButton *imageSourceBtn;
@property (retain, nonatomic) WCWebImageBrowserConfig *config;
@property (retain, nonatomic) WCImageSearchEntity *searchEntity;
@property (retain, nonatomic) MMWebViewMpInfoModel *mpInfoModel;

- (id)initWithConfig:(id)a0;
- (void)initImageViewerWithUrls:(id)a0 current:(id)a1 appID:(id)a2 appScene:(unsigned long long)a3 referer:(id)a4;
- (void)initBottomBar;
- (void)initBottomBarForCircleToSearch;
- (void)relayoutBottomBar;
- (void)showBottomBarContainerInAnimation;
- (void)hideBottomBarContainerInAnimation;
- (void)reportSearchBtnExposed;
- (void)reportCircleToSearchBtnExposed;
- (void)tryReportSimilarImgOperation:(unsigned long long)a0;
- (BOOL)shouldAddWatermark;
- (id)getWatermarkImage:(id)a0 data:(id)a1;
- (id)getColorL1;
- (void)onClickMoreBtn;
- (void)onClickSavedPhotosAlbumButton;
- (void)onClickImageSourceBtn;
- (void)onClickCircleToSearchBtn;
- (void)updateCurrentImageSourceButton;
- (void)updateCurrentImageSearchButton;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)multiImageScrollViewDidEndDecelerating;
- (void)onFullScreenItemDragCancel;
- (void).cxx_destruct;

@end
