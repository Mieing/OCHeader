@class UIView;
@protocol ACCLoadingViewProtocol;

@interface AWEStudioAssertModelHelper : NSObject

@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *progressIndicator;

+ (id)sharedTool;

- (void)handleAsset:(id)a0 effectModel:(id)a1 completion:(id /* block */)a2;
- (void)getVideoPathWithAssetModel:(id)a0 completion:(id /* block */)a1;
- (void)getLivePhotoVideoPathWithAssetModel:(id)a0 completion:(id /* block */)a1;
- (void)getImagePathWithAssetModel:(id)a0 effectModel:(id)a1 completion:(id /* block */)a2;
- (void)hidProgress;
- (void)p_saveImageToTemporaryDirectory:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)showProgress;

@end
