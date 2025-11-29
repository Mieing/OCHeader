@class EmoticonCustomCreateDownloadTask, EmoticonCustomCreateEditTask, MMUIViewController, NSString, WCFinderDataItem, EmoticonCustomManageSelectFromMultiImageViewController, NSDictionary;

@interface LiteAppJsApiEmoticonStorePersonalCenterPageRouter : LiteAppPermanentJsApi <MMImagePickerManagerDelegate, EmoticonCustomCreateVideoEditTaskDelegate, EmoticonCustomCreateEditTaskDelegate, EmoticonCustomCreateImageEditTaskDelegate, EmoticonCustomManageSelectFromMultiImageViewControllerDelegate>

@property (retain, nonatomic) WCFinderDataItem *selectingDataItem;
@property (retain, nonatomic) EmoticonCustomCreateDownloadTask *downloadingTask;
@property (weak, nonatomic) MMUIViewController *editorVC;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } videoCropStartTime;
@property (retain, nonatomic) EmoticonCustomCreateEditTask *editTask;
@property (weak, nonatomic) EmoticonCustomManageSelectFromMultiImageViewController *multiImageVC;
@property (nonatomic) BOOL isMultiImage;
@property (retain, nonatomic) NSString *liteappPath;
@property (retain, nonatomic) NSDictionary *liteappExtendQuery;
@property (retain, nonatomic) NSString *liteappAppid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (id)makeImagePickResult:(id)a0 imageData:(id)a1;
- (void)openLiteApp:(id)a0 imageInfo:(id)a1;
- (void)MMImagePickerManagerDidPopOrDismiss:(id)a0;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)MMImagePickerManager:(id)a0 didFailToPickAssets:(id)a1;
- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithEditImageAttr:(id)a1;
- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithInfo:(id)a1;
- (void)MMImagePickerManagerDidCancelEditImage:(id)a0;
- (void)MMImagePickerManager:(id)a0 didFinishPickingSightWithInfo:(id)a1;
- (void)convertVideoToWxamAndJump:(id)a0;
- (void)MMVideoPickerManager:(id)a0 didFinishSelectingFinderDataItem:(id)a1;
- (void)startDownloadVideo:(id)a0;
- (id)downloadingVideoTask;
- (id)downloadingImageTask;
- (BOOL)interruptVideoDownloadTask:(id)a0;
- (BOOL)interruptImageDownloadTask:(id)a0;
- (void)onEmoticonCreateCommonFail;
- (void)openVideoEditorWithFilePath:(id)a0 ThumbImageUrl:(id)a1;
- (void)closeVideoEditor:(id)a0;
- (void)closeImageEditor:(id)a0;
- (void)startDownloadImage:(id)a0;
- (void)handleLoadingOnTopVC:(id)a0 isStart:(BOOL)a1;
- (void)openMultiImageSelectEditor:(id)a0;
- (void)openImageEditorWithData:(id)a0 completion:(id /* block */)a1;
- (void)openImageEditorWithFilePath:(id)a0 completion:(id /* block */)a1;
- (void)openImageEditorWithTask:(id)a0 completion:(id /* block */)a1;
- (void)onGetEditorVC:(id)a0;
- (struct CGSize { double x0; double x1; })getDownloadingVideoSize;
- (struct CGSize { double x0; double x1; })editorContainerViewSize;
- (void)onGetEditedVideoCropStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)onMultiImageSelectImageData:(id)a0;
- (void)onMultiImageGetImageDataFailed;
- (void)onMultiImageStartDownload;
- (void)onMultiImageDidCancel;
- (void).cxx_destruct;

@end
