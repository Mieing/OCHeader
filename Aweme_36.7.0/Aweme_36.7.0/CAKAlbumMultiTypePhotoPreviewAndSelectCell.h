@class NSString, UIImageView, PHLivePhotoView, UIView, UIButton;
@protocol CAKCommonConfigProtocol, CAKAlbumMultiTypePhotoPreviewAndSelectCellDelegate;

@interface CAKAlbumMultiTypePhotoPreviewAndSelectCell : CAKAlbumPreviewAndSelectCell <UIScrollViewDelegate, PHLivePhotoViewDelegate>

@property (nonatomic) int imageRequestID;
@property (nonatomic) int imageRequestIDForLivePhoto;
@property (nonatomic) double zoomScaleBeforeZooming;
@property (retain, nonatomic) UIView *previewContainer;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) PHLivePhotoView *livePhotoPreview;
@property (retain, nonatomic) UIButton *livePhotoSwitchButton;
@property (nonatomic) BOOL hasLivePhotoData;
@property (nonatomic) long long currentState;
@property (nonatomic) BOOL hasChangedToStatic;
@property (nonatomic) BOOL enableLivePhotoPreview;
@property (nonatomic) BOOL enableGIFPreview;
@property (weak, nonatomic) id<CAKAlbumMultiTypePhotoPreviewAndSelectCellDelegate> delegate;
@property (retain, nonatomic) id<CAKCommonConfigProtocol> commonConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)previewConfig;
- (id)p_getLivePhotoRequestOptions;
- (void)handleLongTap:(id)a0;
- (void)switchLivePhotoPlayState:(long long)a0;
- (void)switchLivePhotoPlayState;
- (void)setupZoomScrollView;
- (void)setPlayerLayer:(id)a0 withPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)removeCoverImageView;
- (void)assetEditResultDidChange;
- (void)willAppearCellWithAsset:(id)a0 withPlayFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 greyMode:(BOOL)a2;
- (void)configCellWithAsset:(id)a0 withViewModel:(id)a1 withPlayFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 greyMode:(BOOL)a3;
- (void)configLivePhotoPreview;
- (void)configImageView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getSwitchButtonFrameWithImageSize:(struct CGSize { double x0; double x1; })a0;
- (int)normalPhotoHandler:(id)a0 complete:(id /* block */)a1;
- (id)p_getPHImageRequestOptions:(BOOL)a0;
- (void)updateImageViewWithImageIfNeeded:(id)a0;
- (int)iCloudPhotoHandler:(id)a0 complete:(id /* block */)a1;
- (void)requestLivePhoto:(id)a0 successHandler:(id /* block */)a1 failureHandler:(id /* block */)a2;
- (void)playLivePhotoIfNeed;
- (struct CGSize { double x0; double x1; })p_resizeFromSize:(struct CGSize { double x0; double x1; })a0 toWidth:(double)a1;
- (void)livePhotoView:(id)a0 didEndPlaybackWithStyle:(long long)a1;
- (void)livePhotoView:(id)a0 willBeginPlaybackWithStyle:(long long)a1;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidZoom:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (struct CGSize { double x0; double x1; })imageSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)handleDoubleTap:(id)a0;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
