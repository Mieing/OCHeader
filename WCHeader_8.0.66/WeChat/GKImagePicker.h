@class UIImagePickerController, NSString;
@protocol GKImagePickerDelegate;

@interface GKImagePicker : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate, GKImageCropControllerDelegate>

@property (retain, nonatomic) UIImagePickerController *imagePickerController;
@property (weak, nonatomic) id<GKImagePickerDelegate> delegate;
@property (nonatomic) struct CGSize { double width; double height; } cropSize;
@property (nonatomic) BOOL resizeableCropArea;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)_hideController;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void)imageCropController:(id)a0 didFinishWithCroppedImage:(id)a1;
- (void).cxx_destruct;

@end
