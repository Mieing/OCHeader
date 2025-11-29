@class NSString, MMResourceDownloadTaskContext;
@protocol MMResourceDownloader, MMResourceDownloadTaskDelegate;

@interface MMResourceDownloadTask : NSObject <MMResourceDownloadDelegate> {
    id<MMResourceDownloader> _downloader;
}

@property (weak, nonatomic) id<MMResourceDownloadTaskDelegate> downloadTaskDelegate;
@property (readonly, copy, nonatomic) NSString *resUrl;
@property (readonly, nonatomic) MMResourceDownloadTaskContext *context;
@property (readonly, copy, nonatomic) NSString *downloadIdentifier;
@property (nonatomic) long long retryCnt;
@property (nonatomic) long long currentCnt;

- (id)initWithResUrl:(id)a0 context:(id)a1;
- (void)dealloc;
- (void)startDownload;
- (void)cancelDownload;
- (void)clearDownloadData;
- (void)reportWithKey:(unsigned int)a0 network:(id)a1;
- (id)generateDownloadIdentifier;
- (Class)getResrouceDownloaderClass;
- (BOOL)isSameResourceWithTask:(id)a0;
- (void)onDownloadReportWithKey:(unsigned int)a0;
- (void)onDownloadFinish:(long long)a0 downloadData:(id)a1 resUrl:(id)a2 cdnResultCode:(long long)a3;
- (void).cxx_destruct;

@end
