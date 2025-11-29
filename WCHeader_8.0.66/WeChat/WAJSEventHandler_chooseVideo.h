@class UINavigationController, NSString, CaptureVideoInfo, MMLoadingView;

@interface WAJSEventHandler_chooseVideo : WAJSEventHandler_BaseEvent <WCActionSheetDelegate> {
    UINavigationController *m_oVideoPicker;
    CaptureVideoInfo *m_oVideoInfo;
    MMLoadingView *m_loadingView;
    BOOL _isFromPicker;
    unsigned int _maxDuration;
    BOOL _isCameraMode;
    BOOL _isFrontCamera;
    BOOL _isCompressed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)handleJSEvent:(id)a0;
- (void)showVideoPickerCameraMode:(BOOL)a0 isFrontCamera:(BOOL)a1 maxDuration:(unsigned int)a2;
- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithInfo:(id)a1;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)MMImagePickerManager:(id)a0 didFinishPickingVideoWithInfo:(id)a1;
- (void)handleVideo:(id)a0 ImagePicker:(id)a1;
- (void)initLoadingView;
- (void)processVideoFromPicker:(id)a0;
- (void)processVideo:(id)a0;
- (int)getVideoDuration:(id)a0;
- (void)didTakeVideo:(id /* block */)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)asyncHandleCancel;
- (void)setVideoPreviewHidden:(BOOL)a0 inPicker:(id)a1;
- (void).cxx_destruct;

@end
