@class UINavigationController, NSString, CaptureVideoInfo, UIImage;

@interface WebviewJSEventHandler_recordVideo : WebviewJSEventHandlerBase <WCActionSheetDelegate, MMImagePickerManagerDelegate> {
    UINavigationController *m_oVideoPicker;
    CaptureVideoInfo *m_oVideoInfo;
    UIImage *m_oThumbImg;
    NSString *m_nsThumbLocalId;
    unsigned int _maxDuration;
    BOOL _isCameraMode;
    BOOL _isFrontCamera;
    BOOL _isFromPicker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)addSightCameraReadyObserver;
- (void)switchCamera;
- (void)showSightCamera;
- (void)showVideoPickerCameraMode:(BOOL)a0 isFrontCamera:(BOOL)a1 maxDuration:(unsigned int)a2;
- (void)onShortVideoTaken:(id)a0 thumbImg:(id)a1 editVideoAttr:(id)a2 paramModel:(id)a3;
- (void)onSightPictureTaken:(id)a0 imageData:(id)a1 withFrontCamera:(BOOL)a2 editImageAttr:(id)a3;
- (void)onSightCameraCancel:(id)a0;
- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithInfo:(id)a1;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)MMImagePickerManager:(id)a0 didFinishPickingVideoWithInfo:(id)a1;
- (void)handleVideo:(id)a0 ImagePicker:(id)a1;
- (void)processVideoFromPicker:(id)a0;
- (void)processVideo:(id)a0;
- (void)processImage:(id)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (int)getVideoDuration:(id)a0;
- (void)asyncHandleCancel;
- (void)didTakeVideo;
- (id)getAppId:(id)a0;
- (void)dismissPicker;
- (void)setVideoPreviewHidden:(BOOL)a0 inPicker:(id)a1;
- (void).cxx_destruct;

@end
