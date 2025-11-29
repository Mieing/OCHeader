@class UIView, NSString, UINavigationController, UIImageView, UIButton, NSMutableArray, UILabel, MailAttachment;
@protocol MailAttachmentControlViewDelegate;

@interface MailAttachmentControlView : MMUIView <WCFileBrowseDelegate, UIDocumentPickerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, WCActionSheetDelegate, MailAttachmentsViewDelegate> {
    NSMutableArray *m_arrAttachmentViews;
    UILabel *m_labelCol;
    UIImageView *m_imgvAttach;
    UILabel *m_labTip;
    UIButton *m_blueButton;
    UIView *m_grayLineView;
    unsigned int m_uiImageAttachIndex;
    unsigned int m_uiVideoAttachIndex;
    unsigned int m_uiFileAttachIndex;
    NSMutableArray *m_attachmentToUpload;
    unsigned int m_assetCount;
    UINavigationController *m_picker;
}

@property (copy, nonatomic) id /* block */ assetSelectedBlock;
@property (weak, nonatomic) id<MailAttachmentControlViewDelegate> m_delegate;
@property (retain, nonatomic) MailAttachment *m_lastAttachment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateViews;
- (BOOL)isAllUploadSuccess;
- (BOOL)containsAttachmentWithFilename:(id)a0;
- (id)allUploadedFiles;
- (id)allToStoreFiles;
- (unsigned long long)count;
- (unsigned long long)totalSize;
- (void)properInit;
- (id)init;
- (id)initWithStoredAttachments:(id)a0;
- (void)initView;
- (double)getContentTotalHeight;
- (void)onButtonClicked:(id)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)takePhoto;
- (void)selectFromAlbum;
- (void)openFileBrowser;
- (void)showImagePicker:(long long)a0 withAvailableCount:(unsigned int)a1;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)onSightPictureTaken:(id)a0 imageData:(id)a1 withFrontCamera:(BOOL)a2 editImageAttr:(id)a3;
- (void)onShortVideoTaken:(id)a0 thumbImg:(id)a1 editVideoAttr:(id)a2 paramModel:(id)a3;
- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithInfo:(id)a1;
- (id)getNewAttachmentNameWithNameSuffix:(id)a0 fileName:(id)a1;
- (void)addToUploadAttachment:(id)a0 withNameSuffix:(id)a1;
- (void)addToUploadAttachment:(id)a0 withNameSuffix:(id)a1 fileName:(id)a2;
- (void)onAddAttachmentItemComplete;
- (void)dismissPickerViewController;
- (void)handleUploadData:(id)a0 name:(id)a1;
- (void)addAttachmentView:(id)a0;
- (void)doDeleteAttachment:(unsigned int)a0;
- (void)OnDeleteAttachment:(id)a0;
- (BOOL)onFileBrowseWillSelectFile:(id)a0 selected:(id)a1;
- (void)onFileBrowseMultiSelect:(id)a0;
- (void)addAttachmentsWithFileInfos:(struct vector<FileInfo, std::allocator<FileInfo>> { struct FileInfo *x0; struct FileInfo *x1; struct __compressed_pair<FileInfo *, std::allocator<FileInfo>> { struct FileInfo *x0; } x2; })a0;
- (void)onFileBrowser:(id)a0 clickFile:(id)a1;
- (void)onFileBrowser:(id)a0 assetPickerController:(id)a1 clickAssetInfo:(id)a2;
- (void).cxx_destruct;

@end
