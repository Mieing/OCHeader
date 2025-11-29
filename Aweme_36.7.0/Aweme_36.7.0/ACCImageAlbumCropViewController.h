@class ACCImageAlbumEditImageInputInfo, ACCImageAlbumCropContentView, ACCImageAlbumCropControlView, NSDictionary, NSString, ACCImageAlbumItemModel;

@interface ACCImageAlbumCropViewController : UIViewController <ACCImageAlbumCropControlDelegate, ACCImageAlbumCropContentViewDelegate>

@property (retain, nonatomic) ACCImageAlbumItemModel *imageAlbumItem;
@property (retain, nonatomic) ACCImageAlbumEditImageInputInfo *imageEditOriginalImage;
@property (retain, nonatomic) ACCImageAlbumCropContentView *cropContentView;
@property (retain, nonatomic) ACCImageAlbumCropControlView *cropControlView;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ switchToThumbnailListBlock;
@property (copy, nonatomic) NSDictionary *commonTrackParams;
@property (nonatomic) unsigned long long selectCropRatio;
@property (nonatomic) double zoomScale;
@property (nonatomic) struct CGSize { double width; double height; } originalImageSize;
@property (nonatomic) BOOL showed9_16Toast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupView;
- (void)p_setupLayout;
- (id)initWithData:(id)a0 imageEditOriginalImage:(id)a1 commonTrackParams:(id)a2 confirmBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4 switchToThumbnailListBlock:(id /* block */)a5;
- (void)didEndZoom:(double)a0;
- (BOOL)croppingImageIsDragging;
- (void)closeCrop;
- (void)confirmCropRatio:(unsigned long long)a0;
- (void)selectCropRatio:(unsigned long long)a0;
- (void)switchToThumbnailList:(BOOL)a0;
- (void)p_trackCloseCrop;
- (void)p_trackConfirmCropRatio:(unsigned long long)a0;
- (void)p_showCropRatio9_16ToastIfNeeded:(unsigned long long)a0;
- (void)p_trackSelectCropRatio:(unsigned long long)a0;
- (void)p_trackDidEndZoom:(double)a0;
- (void)p_showCropRatio9_16Toast;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
