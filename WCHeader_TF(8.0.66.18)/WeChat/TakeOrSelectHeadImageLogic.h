@class NSString, UIViewController;
@protocol TakeOrSelectHeadImageLogicDelegate;

@interface TakeOrSelectHeadImageLogic : MMObject <MMSightCameraViewControllerDelegate, WCActionSheetDelegate, MMImagePickerManagerDelegate> {
    UIViewController *m_viewController;
    id<TakeOrSelectHeadImageLogicDelegate> m_delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getViewController;
- (id)getNavigationController;
- (void)showImagePikcer:(long long)a0;
- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithInfo:(id)a1;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)onSightPictureTaken:(id)a0 imageData:(id)a1 withFrontCamera:(BOOL)a2 editImageAttr:(id)a3;
- (void)showGetHeadImage;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (id)initWithViewController:(id)a0 delegate:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;

@end
