@class UIView, NSString, MMDragManager, UIImageView, ImageMessageViewModel, MMAssetICloudLoadingView, YYAsyncImageView, UIDragInteraction, SightIconView;

@interface ImageMessageCellView : CommonMessageCellView <IDownloadImageExt, IMessageWrapImgExt, IMMAssetICloudExt, MMDragDelegate, MsgImgFullScreenTransitionObject> {
    YYAsyncImageView *m_imageView;
    UIImageView *m_imageDownloadFailView;
    UIImageView *m_imageLoadingBackgroundView;
    SightIconView *m_imageLoadingView;
    BOOL m_bhasDownloadComplete;
    UIImageView *m_icloudBackground;
    MMAssetICloudLoadingView *m_icloudLoadingView;
    MMDragManager *dragManager;
    UIImageView *tmp_liftingImgView;
    UIDragInteraction *dragInteraction;
    UIView *m_imageMaskView;
}

@property (readonly, nonatomic) ImageMessageViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)setViewModel:(id)a0;
- (void)updateDragAndDrop;
- (void)prepareForReuse;
- (BOOL)canBeReused;
- (void)layoutContentView;
- (void)updateStatus;
- (id)displayViewForImageBrowser;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })showRectForMenuController;
- (void)initImageView;
- (id)getCoverImage;
- (void)addDownloadFailView;
- (void)startLoading;
- (void)startLoadingWithUseProgress:(BOOL)a0;
- (void)stopLoading;
- (void)showICloudLoading:(BOOL)a0;
- (void)removeICloudIcon;
- (void)setHighlighted:(BOOL)a0;
- (BOOL)canShowForwardMenuItem;
- (BOOL)canShowFavoriteMenuItem;
- (BOOL)canShowEditMenuItem;
- (BOOL)canShowSearchMenuItem;
- (BOOL)canShowStarMenuItem;
- (id)operationMenuItems;
- (void)doFavorite;
- (void)onForward:(id)a0;
- (void)showImage;
- (void)showImageNeedEdit:(BOOL)a0;
- (void)onEdit:(id)a0;
- (void)onChatImageSearch;
- (void)onCircleToSearch;
- (void)onImageForwardToFinder:(id)a0;
- (void)onTouchEnded;
- (void)onSendFailButtonClicked:(id)a0;
- (id)liftingItemWithImage:(id)a0 parameters:(id)a1;
- (void)liftingImageNeedRemove;
- (void)onThumbImageSave:(id)a0;
- (void)OnDownloadImageOk:(id)a0;
- (void)onAssetImageDonwloadProgress:(double)a0 assetUrl:(id)a1;
- (void)onAssetImageDonwloadStart:(id)a0;
- (BOOL)canPeek;
- (id)viewControllerForPreview:(id)a0;
- (id)viewControllerToPreviewWithFromController:(id)a0 forLocation:(struct CGPoint { double x0; double x1; })a1 inCoordinateView:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewingSourceRectForLocation:(struct CGPoint { double x0; double x1; })a0 inCoordinateView:(id)a1;
- (void)onClickAsRefer;
- (id)accessibilityLabel;
- (void)hideComponent;
- (void)showComponent;
- (void)animateShowComponentWithDuration:(double)a0;
- (void).cxx_destruct;

@end
