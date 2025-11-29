@class NSBundleResourceRequest, NSArray, NSSet, BDPDownloadManager, NSMutableDictionary, NSDictionary, NSObject, BDPAppPreconnetTask;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface BDPODRXResolverManager : NSObject {
    NSArray *_hostsAddBr;
    NSArray *_requestTypesAddBr;
    BDPDownloadManager *_manager;
    NSMutableDictionary *_tasksDic;
    NSObject<OS_dispatch_semaphore> *_tasksLock;
    NSSet *_hostsAddGzipSet;
}

@property (retain, nonatomic) BDPAppPreconnetTask *preconnectTask;
@property (retain, nonatomic) NSMutableDictionary *preconnectTaskDic;
@property (retain, nonatomic) NSDictionary *preConnectForTypeConfig;
@property (readonly, nonatomic) NSArray *hostsAddBr;
@property (readonly, nonatomic) NSArray *requestTypesAddBr;
@property (retain, nonatomic) NSBundleResourceRequest *bundleRequset;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *bundleReqeustSerialQueue;

+ (id)shareManager;

- (void)preconnectCDNWithType:(long long)a0;
- (void)stopAllDownloads;
- (id)sortUrls:(id)a0 withAppType:(long long)a1;
- (id)startDownloadWithInfo:(id)a0 taskDelegate:(id)a1;
- (void)stopDownloadForIdentifier:(id)a0;
- (BOOL)existsDownloadTaskForIdentifier:(id)a0;
- (void)stopDownloadWithPrefix:(id)a0;
- (void)startDownloadWithTask:(id)a0;
- (id)p_getPreConnectUrlsForType:(long long)a0;
- (void)preconnectCDNWithUrls:(id)a0 type:(long long)a1;
- (BOOL)p_enablePreConnectForType;
- (void)p_odrReqeust:(id)a0;
- (void)removeTaskWithIdentifier:(id)a0;
- (void)handleReceivedData:(id)a0 forTask:(id)a1 withStatusCode:(unsigned long long)a2 totalBytes:(long long)a3;
- (void)handleCompletionForTask:(id)a0 withError:(id)a1 metrics:(id)a2 sttpkgHeaders:(id)a3;
- (void)p_executeBlockInODRXReqeustQueue:(id /* block */)a0;
- (void)addTask:(id)a0;
- (void).cxx_destruct;

@end
