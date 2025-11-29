@class AWEIMMessageAttachmentUploadViewModel, AWEBinding;

@interface AWEIMFileMessageViewModel : AWEIMMessageViewModel

@property (retain, nonatomic) AWEIMMessageAttachmentUploadViewModel *uploadVM;
@property (retain, nonatomic) AWEBinding *progressBinding;
@property (nonatomic) long long vmState;

- (BOOL)p_isUploading;
- (void)p_computeVMState;
- (id)p_displayMessage;
- (id)p_queryFileUploadVM;
- (id)p_fileAttachmentFileID;
- (BOOL)p_localFileExit;
- (void)startLoadState;
- (void)previewFile;
- (void).cxx_destruct;

@end
