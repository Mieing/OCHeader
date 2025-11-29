@class UINavigationController, NSString, MMNearbyPoiInfo, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface WAJSEventHandler_chooseMultiMedia : WAJSEventHandler_BaseEvent <WCActionSheetDelegate, MMImagePickerManagerDelegate> {
    UINavigationController *m_oVideoPicker;
    NSMutableArray *m_localIds;
    BOOL _savedAssets;
    BOOL _savedImage;
}

@property (nonatomic) unsigned int maxDuration;
@property (nonatomic) long long count;
@property (nonatomic) BOOL shouldDismissVC;
@property (nonatomic) BOOL isFromPicker;
@property (retain, nonatomic) NSMutableArray *mediaObjectArray;
@property (retain, nonatomic) NSMutableArray *resultObjectArray;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queueCopyVideoFile;
@property (nonatomic) unsigned int processedAssetCount;
@property (retain, nonatomic) NSMutableArray *imagesIndex;
@property (retain, nonatomic) MMNearbyPoiInfo *poiInfo;
@property (nonatomic) unsigned long long sightCameraMode;
@property (nonatomic) long long pickAlbumType;
@property (nonatomic) BOOL isPickerCustom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)handleJSEvent:(id)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)showSightCamera;
- (void)showSystemCamera;
- (void)showAlbumPicker;
- (void)onShortVideoTaken:(id)a0 thumbImg:(id)a1 editVideoAttr:(id)a2 paramModel:(id)a3;
- (void)onSightPictureTaken:(id)a0 imageData:(id)a1 withFrontCamera:(BOOL)a2 editImageAttr:(id)a3;
- (void)onSightCameraCancel:(id)a0;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithInfo:(id)a1;
- (void)MMImagePickerManager:(id)a0 didFinishPickingVideoWithInfo:(id)a1;
- (void)MMImagePickerManager:(id)a0 didFinishPickingSightWithInfo:(id)a1;
- (void)onLocalImageSaveFinish:(id)a0;
- (void)handleVideo:(id)a0 ImagePicker:(id)a1;
- (void)processVideoFromPicker:(id)a0;
- (void)processVideo:(id)a0;
- (void)processVideo:(id)a0 withIndex:(int)a1;
- (void)handleImageByImage:(id)a0;
- (void)handleImageByLoacalIds:(id)a0;
- (int)getVideoDuration:(id)a0;
- (void)asyncHandleCancel;
- (void)didTakeVideoWithIndex:(int)a0;
- (id)getImageOrientationString:(long long)a0;
- (void)dismissPicker;
- (void)dismissViewControllerAnimated:(BOOL)a0;
- (void)dismissViewControllerInMainThreadAnimated:(BOOL)a0;
- (id)generateMediaMarkInfoWithTime:(unsigned int)a0 andScore:(unsigned int)a1;
- (id)generateMediaMarkInfoWithTime:(unsigned int)a0 andDistance:(int)a1;
- (unsigned int)generateScoreWithDistance:(int)a0;
- (void).cxx_destruct;

@end
