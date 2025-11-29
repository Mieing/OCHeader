@class UIImage, UIViewController, NSString;
@protocol AWEAwemeLongPressModalViewControllerProtocol;

@interface LSIMImagePreviewerServiceImpl : NSObject <LSIMImagePreviewerService>

@property (retain, nonatomic) UIViewController<AWEAwemeLongPressModalViewControllerProtocol> *longPressVC;
@property (retain, nonatomic) UIImage *currentImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onPressDownLoad;
- (void)showNewPressPanelForScene:(id)a0;
- (void)p_saveImage;
- (void)p_saveImageToDevice;
- (void)imagePreviewWithURL:(id)a0 placeholder:(id)a1 completion:(id /* block */)a2;
- (void)imagePreview:(id)a0;
- (void)imagePreviewWithURL:(id)a0;
- (void)handleImageLongPressActionWithImage:(id)a0;
- (void).cxx_destruct;

@end
