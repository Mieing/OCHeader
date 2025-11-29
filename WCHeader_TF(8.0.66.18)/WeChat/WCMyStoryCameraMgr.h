@class NSString, WCStoryPublishReportObj, EditStoryImageAttr;

@interface WCMyStoryCameraMgr : MMUserService <MMUIViewControllerExt, MMImagePickerManagerDelegate, MMServiceProtocol>

@property (retain, nonatomic) WCStoryPublishReportObj *publishReportObj;
@property (nonatomic) unsigned long long enterScene;
@property (retain, nonatomic) EditStoryImageAttr *storyAttr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showImagePicker;
- (void)doActionTraceWithType:(unsigned long long)a0;
- (void)MMUIViewControllerDidBeRemoved:(id)a0;
- (void)onSightCameraCancel:(id)a0;
- (void)onShortVideoTaken:(id)a0 thumbImg:(id)a1 editVideoAttr:(id)a2 paramModel:(id)a3;
- (void)onSightCameraClickRecordBtn;
- (void)MMImagePickerManager:(id)a0 didFinishPickingSightWithInfo:(id)a1;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)sendTakePhotoNotification;
- (void)postNewItemForSight:(id)a0;
- (void)postNewItemForSight:(id)a0 originImageMd5:(id)a1;
- (id)genDataItemWithSightDraftItem:(id)a0 thumbPath:(id)a1 originImageMd5:(id)a2;
- (void)createPhotoMovieWithPicker:(id)a0 selectImageArray:(id)a1 selectedImageMd5s:(id)a2;
- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithInfo:(id)a1;
- (id)createSightDraftWithVideoPath:(id)a0 thumbImg:(id)a1 editVideoAttr:(id)a2;
- (void).cxx_destruct;

@end
