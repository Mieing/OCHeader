@class NSString, NSURL, NSData, WKDownload;

@interface MMWebNewAttachmentDetailLogicController : FileDetailLogicController <WKDownloadDelegate>

@property (nonatomic) unsigned int currentDownloadState;
@property (retain, nonatomic) NSURL *requestUrl;
@property (retain, nonatomic) WKDownload *downloadTask;
@property (retain, nonatomic) NSData *lastResumeData;
@property (nonatomic) BOOL isObservingDownload;
@property (retain, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSString *fileName;
@property (nonatomic) long long navigationResponseContentLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attachmentPathForURLString:(id)a0 andExtName:(id)a1;

- (id)initWithWKDownlad:(id)a0;
- (void)initMembersWithDownload:(id)a0;
- (void)stopDownload;
- (void)startDownload;
- (BOOL)isDownloading;
- (BOOL)autoDownload;
- (BOOL)isViewBePopedStopDownload;
- (BOOL)OnPreviewFile:(unsigned int)a0;
- (id)GetFileName;
- (void)downloadFileProcessUpdatedOnMainThreadWithProgress:(double)a0;
- (void)downloadFileSuccessOnMainThread;
- (void)downloadFileFailureOnMainThreadWithFailureStr:(id)a0;
- (unsigned long long)GetTempSize;
- (id)GetTmpFilePath;
- (unsigned long long)GetFileSize;
- (unsigned int)getMsgUiDownloadStatus;
- (id)GetFilePath;
- (unsigned int)GetPreviewType;
- (void)onForwardToContact:(id)a0;
- (void)OnFileDetailVCDidAppear;
- (void)checkStateAndCallDownloadFinish;
- (id)getMusicLocalFileDataUnit;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)download:(id)a0 decideDestinationUsingResponse:(id)a1 suggestedFilename:(id)a2 completionHandler:(id /* block */)a3;
- (void)downloadDidFinish:(id)a0;
- (void)download:(id)a0 didFailWithError:(id)a1 resumeData:(id)a2;
- (void)dealloc;
- (void)startObservingDownloadProgresss;
- (void)stopObservingDownloadProgresss;
- (void).cxx_destruct;

@end
