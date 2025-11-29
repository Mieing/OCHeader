@class UINavigationController, NSString, NSMutableArray, MMImagePickerManagerOptionObj;

@interface WAJSEventHandler_chooseMedia : WAJSEventHandler_BaseEvent <WCActionSheetDelegate, MMImagePickerManagerDelegate>

@property (nonatomic) unsigned int mediaType;
@property (nonatomic) long long sourceType;
@property (nonatomic) unsigned int maxDuration;
@property (nonatomic) long long sizeType;
@property (nonatomic) long long count;
@property (nonatomic) long long cameraDirection;
@property (nonatomic) long long livePhotoMode;
@property (retain, nonatomic) UINavigationController *videoPicker;
@property (retain, nonatomic) MMImagePickerManagerOptionObj *optionObj;
@property (nonatomic) BOOL isSwitch;
@property (nonatomic) BOOL userDidSelect;
@property (nonatomic) BOOL keepExif;
@property (retain, nonatomic) NSMutableArray *keyObjectArray;
@property (retain, nonatomic) NSMutableArray *resultObjectArray;
@property (nonatomic) unsigned int processedAssetCount;
@property (nonatomic) unsigned long long failedCount;
@property (nonatomic) unsigned long long totalProcessCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)initialization;
- (void)handleJSEvent:(id)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)showSightCamera;
- (void)showAlbumPicker;
- (void)addSightCameraReadyObserver;
- (void)switchCamera;
- (void)onShortVideoTaken:(id)a0 thumbImg:(id)a1 editVideoAttr:(id)a2 paramModel:(id)a3;
- (void)onSightPictureTaken:(id)a0 imageData:(id)a1 withFrontCamera:(BOOL)a2 editImageAttr:(id)a3;
- (void)onSightCameraCancel:(id)a0;
- (void)MMImagePickerManagerDidPopOrDismiss:(id)a0;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)MMImagePickerManager:(id)a0 didFailToPickAssets:(id)a1;
- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithInfo:(id)a1;
- (void)MMImagePickerManager:(id)a0 didFinishPickingVideoWithInfo:(id)a1;
- (void)processVideo:(id)a0;
- (void)processVideo:(id)a0 complerHandler:(id /* block */)a1;
- (void)processVideoAndDismissPicker:(id)a0;
- (void)handleVideo:(id)a0 ImagePicker:(id)a1;
- (void)processVideoByArrLocalInfo:(id)a0;
- (void)processImage:(id)a0;
- (void)processImageByArrLocalInfo:(id)a0;
- (void)didFinishProcessAssets;
- (void)removeObjectFromResultAtIndex:(unsigned long long)a0;
- (int)getVideoDuration:(id)a0;
- (void)asyncHandleCancel;
- (void)dismissPicker;
- (void)setVideoPreviewHidden:(BOOL)a0 inPicker:(id)a1;
- (void).cxx_destruct;

@end
