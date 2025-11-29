@class NSRecursiveLock, NSMutableDictionary, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface CKFileDownloaderImpl : NSObject <CKDownloadProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (nonatomic) int concurrent;
@property (retain, nonatomic) NSMutableDictionary *downloadingTaskMap;
@property (retain, nonatomic) NSMutableDictionary *waitDownloadTaskMap;
@property (retain, nonatomic) NSMutableArray *downloadingTaskQueue;
@property (retain, nonatomic) NSMutableArray *waitDownloadTaskQueue;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeDownloadParametersWithParams:(id)a0;
+ (id)sharedInstance;

- (void)handleDownloadCallbackWithData:(id)a0 downloadError:(id)a1 httpResponse:(id)a2 downloadTaskInfo:(id)a3;
- (void)handleDownloadCallback:(id)a0 downloadTaskInfo:(id)a1;
- (void)download:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
- (char *)xorMD5DecryptKeyBytes;
- (void)cancel:(id)a0 completion:(id /* block */)a1;
- (void)pause:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
