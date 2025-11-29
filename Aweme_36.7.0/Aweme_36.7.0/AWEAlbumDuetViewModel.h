@class NSString, UIImage;

@interface AWEAlbumDuetViewModel : AWEAlbumBaseViewModel

@property (retain, nonatomic) NSString *convertTaskId;
@property (nonatomic) BOOL isCancelRequest;
@property (retain, nonatomic) UIImage *fakeFrameImage;

- (void)convertAssetModelsToValidAssetModels:(id)a0 taskID:(id)a1 convertID:(id)a2 completion:(id /* block */)a3;
- (id)initWithInputData:(id)a0;
- (BOOL)shouldSelectAlbumAsset:(id)a0;
- (void)goToNextWithMultiSelect:(BOOL)a0;
- (void)trackSelectAsset:(id)a0 fromPreview:(BOOL)a1;
- (BOOL)needFetchAlbumAssetsWhenClickNext;
- (void)p_trackerUploadNextEventWithLabel:(id)a0;
- (id)assembleAssets;
- (void)genFakeFrameElementWithDuetAssets:(id)a0;
- (void)genDuetLeftToRightFakeFrameWithPublishViewModel:(id)a0 canvasSize:(struct CGSize { double x0; double x1; })a1;
- (void)genDuetTopToBottomFakeFrameWithPublishViewModel:(id)a0 canvasSize:(struct CGSize { double x0; double x1; })a1;
- (void)configTaskID:(id)a0 createID:(id)a1 assetModels:(id)a2 subTrackAssetModel:(id)a3;
- (id)genFakeFrameImageWithFirstImage:(id)a0 secondImage:(id)a1 firstRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 secondRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 canvasSize:(struct CGSize { double x0; double x1; })a4;
- (id)cropImage:(id)a0 targetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
