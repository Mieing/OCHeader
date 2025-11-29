@interface WSWebViewPlugin_Camera : WSWebViewPluginBase <WCActionSheetDelegate, MMImagePickerManagerDelegate, WeChat.WCImageSearchCameraViewControllerDelegate, MMSightCameraViewControllerDelegate> {
    void /* unknown type, empty encoding */ searchEntity;
    void /* unknown type, empty encoding */ isInitiativeSearch;
    void /* unknown type, empty encoding */ searchSource;
    void /* unknown type, empty encoding */ sessionId;
}

- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithInfo:(id)a1;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)didPickImage:(id)a0;
- (id)getImagePickerOption;
- (BOOL)shouldCloseAfterDone;
- (void)onSightPictureTaken:(id)a0 imageData:(id)a1 withFrontCamera:(BOOL)a2 editImageAttr:(id)a3;
- (void)nativeImageSearchWithSource:(unsigned long long)a0;
- (void)nativeImageSearchWithSource:(unsigned long long)a0 sessionId:(id)a1;
- (void)openCameraForImageSearch;
- (id)init;
- (void).cxx_destruct;

@end
