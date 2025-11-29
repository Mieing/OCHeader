@class NSString, AWEIMMessageAttachmentDownloadViewModel, AWEIMMessageFilePreviewTracker, AWEIMMessageFilePreviewConfig, AWEBinding, NSURLRequest, AWEIMMessageFilePreviewMetaInfo, AWEIMMessageConversation, AWEIMMessageFilePreviewViewModelErrorObject, AWEIMFileMessage;

@interface AWEIMMessageFilePreviewViewModel : NSObject

@property (retain, nonatomic) AWEIMMessageFilePreviewConfig *config;
@property (retain, nonatomic) AWEIMMessageAttachmentDownloadViewModel *downloadVM;
@property (nonatomic) long long vmState;
@property (nonatomic) double progress;
@property (retain, nonatomic) NSString *previewTempDirPath;
@property (nonatomic) unsigned long long sizeUnit;
@property (retain, nonatomic) AWEIMMessageFilePreviewMetaInfo *fileMetaInfo;
@property (retain, nonatomic) AWEBinding *downloadVMStatusBind;
@property (retain, nonatomic) AWEBinding *downloadVMProgressBind;
@property (retain, nonatomic) AWEIMMessageFilePreviewTracker *tracker;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) AWEIMMessageFilePreviewViewModelErrorObject *errObj;
@property (readonly, nonatomic) AWEIMFileMessage *fileMessage;
@property (readonly, nonatomic) NSString *fileName;
@property (readonly, nonatomic) NSString *fileDescText;
@property (readonly, nonatomic) NSString *fileIcon;
@property (retain, nonatomic) NSString *previewHTML;
@property (retain, nonatomic) NSURLRequest *previewRequest;
@property (nonatomic) long long scene;
@property (copy, nonatomic) NSString *fileId;

- (void)forwardMessage;
- (void)handleMessageRecallNotification:(id)a0;
- (void)p_addNotification;
- (void)setupVM;
- (BOOL)isSupportShare;
- (BOOL)hadDownloaded;
- (BOOL)isSupportReport;
- (BOOL)canRemoveGroupCollect;
- (void)previewViewCreateFail;
- (void)trackClickShareAction;
- (void)removeGroupCollect;
- (void)reportFile;
- (void)trackShareToExternalAction;
- (unsigned long long)p_computeSizeUnit;
- (void)p_transferToErrorState:(long long)a0;
- (id)p_localCachedFilePath;
- (void)p_preparePreview;
- (void)p_startDownload;
- (void)p_handleFileMetaInfo:(id)a0 error:(id)a1;
- (void)p_fetchFileMetaAPI:(id /* block */)a0;
- (void)p_makeDownloadVM;
- (void)p_handleDownloadVMState:(unsigned long long)a0;
- (void)p_previewFile;
- (id)p_linkFromOriginFilePathIfNeeded:(id)a0;
- (BOOL)p_isSupportFileType;
- (BOOL)p_handleTXTFile:(id)a0;
- (id)p_makeReadableSize:(double)a0;
- (id)p_unitStr;
- (void).cxx_destruct;
- (void)pauseDownload;
- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (void)startDownload;
- (void)stopDownload;

@end
