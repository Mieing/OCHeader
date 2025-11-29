@class NSString, UIViewController;

@interface WCFinderTakePhotoHelper : NSObject <MMImagePickerManagerDelegate, MMSightCameraViewControllerDelegate>

@property (weak, nonatomic) UIViewController *vc;
@property (copy, nonatomic) id /* block */ complete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)show:(id)a0 toVC:(id)a1;

- (void)setTarget:(id)a0 action:(SEL)a1;
- (void)setBlock:(id /* block */)a0;
- (void)_onPickerSelectedImage:(id)a0;
- (void)_onPickerCancel;
- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithInfo:(id)a1;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)close;
- (void)onSightPictureTaken:(id)a0 imageData:(id)a1 withFrontCamera:(BOOL)a2 editImageAttr:(id)a3;
- (void)onSightCameraCancel:(id)a0;
- (void)onShortVideoTakenFailedToSaveToLibrary:(id)a0;
- (void).cxx_destruct;

@end
