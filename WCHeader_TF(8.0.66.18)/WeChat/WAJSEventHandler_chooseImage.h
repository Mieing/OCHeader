@class NSString;

@interface WAJSEventHandler_chooseImage : WAJSEventHandler_BaseEvent <WCActionSheetDelegate, MMImagePickerManagerDelegate> {
    unsigned int m_imgCnt;
    long long m_sizeType;
    long long m_sourceType;
    BOOL _frontCamera;
}

@property (nonatomic) unsigned long long failedCount;
@property (nonatomic) BOOL userDidSelect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)showAlbum;
- (void)showCamera;
- (void)handleJSEvent:(id)a0;
- (void)asyncHandleCancel;
- (void)showImagePicker:(long long)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (long long)getImagePickerSizeType:(id)a0;
- (void)MMImagePickerManager:(id)a0 didFailToPickAssets:(id)a1;
- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithInfo:(id)a1;
- (void)processImages:(id)a0;
- (void)MMImagePickerManagerDidPopOrDismiss:(id)a0;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)onLocalImageSaveFinish:(id)a0;
- (void)delayNotifyWeb:(id)a0;

@end
