@class NSString, MMFinderLiveCompleteViewReplaySettingsCoverPickingRequest;

@interface MMFinderLiveCompleteViewReplaySettingsCoverPickingLogic : NSObject <WCActionSheetDelegate, MMSightCameraViewControllerDelegate, WCFinderCameraViewControllerDelegate>

@property (retain, nonatomic) MMFinderLiveCompleteViewReplaySettingsCoverPickingRequest *currentRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showCoverPickingActionSheetInView:(id)a0 pickerHostingVc:(id)a1 completionBlock:(id /* block */)a2;
- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithEditImageAttr:(id)a1;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)MMImagePickerManagerDidPopOrDismiss:(id)a0;
- (void)onSightPictureTaken:(id)a0 imageData:(id)a1 withFrontCamera:(BOOL)a2 editImageAttr:(id)a3;
- (void)onSightCameraCancel:(id)a0;
- (BOOL)isFrontCamera;
- (void)showCameraPickerWithHostingVc:(id)a0 completionBlock:(id /* block */)a1;
- (void)showAlbumPickerWithHostingVc:(id)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
