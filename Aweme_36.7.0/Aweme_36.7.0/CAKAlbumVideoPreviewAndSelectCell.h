@class NSString, CAKAlbumVideoPreviewControlView, UIImage, UIView, UIImageView;

@interface CAKAlbumVideoPreviewAndSelectCell : CAKAlbumPreviewAndSelectCell <UIScrollViewDelegate>

@property (retain, nonatomic) UIImage *coverImage;
@property (nonatomic) int imageRequestID;
@property (nonatomic) double zoomScaleBeforeZooming;
@property (retain, nonatomic) CAKAlbumVideoPreviewControlView *playControlView;
@property (retain, nonatomic) UIView *playerView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (nonatomic) BOOL enablePlayerControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupPlayControlView;
- (void)setupZoomScrollView;
- (void)setPlayerLayer:(id)a0 withPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)removeCoverImageView;
- (void)assetEditResultDidChange;
- (void)willAppearCellWithAsset:(id)a0 withPlayFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 greyMode:(BOOL)a2;
- (void)configCellWithAsset:(id)a0 withViewModel:(id)a1 withPlayFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 greyMode:(BOOL)a3;
- (void)configImageView;
- (int)normalPhotoHandler:(id)a0 complete:(id /* block */)a1;
- (id)p_getPHImageRequestOptions:(BOOL)a0;
- (int)iCloudPhotoHandler:(id)a0 complete:(id /* block */)a1;
- (void)updatePlayControlAreaBottom:(double)a0;
- (void)updatePlayControlAlpha:(double)a0;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidZoom:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleDoubleTap:(id)a0;
- (void)dealloc;

@end
