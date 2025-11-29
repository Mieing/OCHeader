@class UIViewController, NSString, UIImage, CAKAlbumViewController, ACCAlbumConfigure, UIImagePickerController;
@protocol AWESearchImagePickerDelegate;

@interface AWESearchImagePicker : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate>

@property (copy, nonatomic) id /* block */ pickCompletion;
@property (retain, nonatomic) UIImage *pickedImage;
@property (retain, nonatomic) ACCAlbumConfigure *albumConfig;
@property (retain, nonatomic) CAKAlbumViewController *albumVC;
@property (retain, nonatomic) UIImagePickerController *cameraVC;
@property (weak, nonatomic) UIViewController *sourceVC;
@property (weak, nonatomic) id<AWESearchImagePickerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openAlbum;
- (void)openCamera;
- (void)cameraDismiss;
- (void)albumDismiss;
- (void)pickImageFromAlbumWithCompletion:(id /* block */)a0;
- (void)pickImageFromCameraWithCompletion:(id /* block */)a0;
- (void)pickImageFromCameraWithCompletion:(id /* block */)a0 sourceVC:(id)a1;
- (void).cxx_destruct;
- (void)releaseResource;
- (id)init;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;

@end
