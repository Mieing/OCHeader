@class NSURL;

@interface MMLocalFileDetailLogicController : FileDetailLogicController {
    unsigned long long _fileSize;
}

@property (readonly, nonatomic) NSURL *fileURL;

- (id)initWithFileURL:(id)a0;
- (unsigned int)GetPreviewType;
- (id)GetFileName;
- (id)GetFilePath;
- (unsigned long long)GetFileSize;
- (id)getMusicLocalFileDataUnit;
- (BOOL)isDownloading;
- (BOOL)autoDownload;
- (BOOL)isViewBePopedStopDownload;
- (BOOL)forbidOperation;
- (void)startDownload;
- (void)stopDownload;
- (BOOL)OnPreviewFile:(unsigned int)a0;
- (void)didFinish;
- (void)didFail;
- (void).cxx_destruct;

@end
