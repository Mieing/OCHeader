@class NSURL, NSString, NSURLSession;

@interface MMWebAttachmentDetailLogicController : FileDetailLogicController <NSURLSessionDataDelegate>

@property (retain, nonatomic) NSURLSession *session;
@property (nonatomic) unsigned long long targetSize;
@property (nonatomic) unsigned long long downloadedSize;
@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSString *fileExtensionName;
@property (nonatomic) unsigned long long navigationResponseContentLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)localFilePathForFileURL:(id)a0 fileExtName:(id)a1;

- (void)dealloc;
- (BOOL)isDownloading;
- (BOOL)autoDownload;
- (BOOL)isViewBePopedStopDownload;
- (void)startDownload;
- (void)stopDownload;
- (BOOL)OnPreviewFile:(unsigned int)a0;
- (void)onForwardToContact:(id)a0;
- (id)GetFileName;
- (unsigned long long)GetFileSize;
- (unsigned long long)GetTempSize;
- (unsigned int)GetPreviewType;
- (id)GetTmpFilePath;
- (id)GetFilePath;
- (unsigned int)getMsgUiDownloadStatus;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)downloadFileProcessUpdatedOnMainThread;
- (void)downloadFileSuccessOnMainThread;
- (void)downloadFileFailureOnMainThread;
- (void)downloadFileFailureOnMainThreadWithFailureStr:(id)a0;
- (void).cxx_destruct;

@end
