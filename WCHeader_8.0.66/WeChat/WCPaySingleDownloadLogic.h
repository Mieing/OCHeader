@class NSURLSession, NSMutableDictionary, NSString, NSMutableArray;
@protocol WCPaySingleDownloadLogicExt;

@interface WCPaySingleDownloadLogic : MMUserService <NSURLSessionDelegate, MMServiceProtocol>

@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) NSMutableArray *arrDownloadingTaskQueue;
@property (retain, nonatomic) NSMutableDictionary *downloadTaskDict;
@property (weak, nonatomic) id<WCPaySingleDownloadLogicExt> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)startDownloadTaskWithUrl:(id)a0 info:(id)a1;
- (void)addDownloadTaskWithUrl:(id)a0 info:(id)a1;
- (void)cancelDownloadTaskWithUrl:(id)a0;
- (id)getDownloadFileIdentifier:(id)a0;
- (void)checkDownloadQueue;
- (BOOL)checkIsTaskAlreadyExist:(id)a0;
- (void)invalidate;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void).cxx_destruct;

@end
