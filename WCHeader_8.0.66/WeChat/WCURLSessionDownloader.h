@class WCURLSession, NSString, NSMutableData, WCURLSessionDownloadTask;

@interface WCURLSessionDownloader : NSObject <WCURLSessionDataDelegate>

@property (retain, nonatomic) WCURLSession *urlSession;
@property (retain, nonatomic) WCURLSessionDownloadTask *downloadTask;
@property (retain, nonatomic) NSMutableData *receiveData;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUrlString:(id)a0 configuration:(id)a1;
- (BOOL)startTaskWithCompleteBlock:(id /* block */)a0;
- (void)WCURLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)WCURLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)WCURLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void).cxx_destruct;

@end
