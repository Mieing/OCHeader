@class MMPickLocationViewController, NSString, NSMutableArray, RTEAttributeNode;
@protocol WNRTEToolViewHelperDelegate;

@interface WNRTEToolViewHelper : NSObject <MMPickLocationViewControllerDelegate, WCFileBrowseDelegate, UIDocumentPickerDelegate>

@property (nonatomic) unsigned int mmassetCount;
@property (retain, nonatomic) NSMutableArray *arrAttachments;
@property (retain, nonatomic) MMPickLocationViewController *locationViewCtrl;
@property (retain, nonatomic) RTEAttributeNode *recordingAttribute;
@property (weak, nonatomic) id<WNRTEToolViewHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onCreatePostImageView:(unsigned int)a0;
- (void)onTakePhotoForPost;
- (void)showImagePicker:(long long)a0 withAvailableCount:(unsigned int)a1;
- (void)onSightPictureTaken:(id)a0 imageData:(id)a1 withFrontCamera:(BOOL)a2 editImageAttr:(id)a3;
- (void)onShortVideoTaken:(id)a0 thumbImg:(id)a1 editVideoAttr:(id)a2 paramModel:(id)a3;
- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithInfo:(id)a1;
- (void)MMImagePickerManager:(id)a0 didFinishPickingSightWithInfo:(id)a1;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)onAddImageItemComplete;
- (void)showFilePickerView:(unsigned int)a0;
- (void)onFileBrowseOpeniCloud;
- (void)onFileBrowseMultiSelect:(id)a0;
- (void)documentPicker:(id)a0 didPickDocumentsAtURLs:(id)a1;
- (void)onCreatPostLocationView;
- (id)onGetRightBarButton;
- (void)onFinishSelectedLocation;
- (void)onCancelSeletctedLocation;
- (BOOL)onVoiceRecordBegin;
- (void)onVoiceRecordRealBegin;
- (void)onVoiceRecordEnd;
- (void)insertSeperateLine;
- (void).cxx_destruct;

@end
