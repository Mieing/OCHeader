@class WCFinderAlbumScrollViewParamModel;

@interface WCFinderHalfScreenEditImageViewController : WCFinderRootEditImageViewController

@property (nonatomic) double stageFrameY;
@property (retain, nonatomic) WCFinderAlbumScrollViewParamModel *previewScrollViewParamModel;
@property (nonatomic) BOOL hiddenCropBtn;

- (id)initWithAssets:(id)a0 images:(id)a1;
- (void)viewDidLoad;
- (void)showEditImageViewOn;
- (void)onEditImageLayoutViewChangeAssetSuc;
- (BOOL)shouldSaveUnCropImages;
- (void).cxx_destruct;

@end
