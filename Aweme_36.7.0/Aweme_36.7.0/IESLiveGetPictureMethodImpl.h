@class IESLiveImageEditViewController, IESLiveGetPictureHandler, IESLiveGetPictureParamModel;

@interface IESLiveGetPictureMethodImpl : IESLiveGetPictureMethod

@property (retain, nonatomic) IESLiveGetPictureHandler *handler;
@property (retain, nonatomic) IESLiveGetPictureParamModel *config;
@property (weak, nonatomic) IESLiveImageEditViewController *imageEditViewController;

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)p_getPictureWithCompletion:(id /* block */)a0;
- (void)p_checkImageAndOpenCropVC:(id)a0 pickerVC:(id)a1 completion:(id /* block */)a2;
- (void)p_openImageCropVC:(id)a0 withPickerController:(id)a1 completion:(id /* block */)a2;
- (void)p_parseImage:(id)a0 completion:(id /* block */)a1;
- (id)p_cacheContainerDirPath;
- (id)p_fullCachePathWithDirectory:(id)a0 fileName:(id)a1;
- (void).cxx_destruct;

@end
