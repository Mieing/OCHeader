@class WCURLSession, WCURLSessionDownloadTask, NSString;

@interface MMKSWCSessionDownloader : MMKSBasicMusicDownloader <WCURLSessionDataDelegate>

@property (retain, nonatomic) WCURLSession *urlSession;
@property (retain, nonatomic) WCURLSessionDownloadTask *downloadTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)beginDownload:(id)a0;
- (void)cancel;
- (void)WCURLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)WCURLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)WCURLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)reportDownloadStartWithIsWholeRange:(BOOL)a0;
- (void)reportContentRangeNotFoundInResponse;
- (void)reportContentLengthNotFoundInResponse;
- (void)reportInvalidContantTypeInResponse;
- (void)reportDownloadCompleteWithSuccess:(BOOL)a0;
- (void).cxx_destruct;

@end
