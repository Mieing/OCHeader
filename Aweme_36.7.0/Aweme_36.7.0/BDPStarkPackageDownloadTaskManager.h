@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface BDPStarkPackageDownloadTaskManager : NSObject {
    NSObject<OS_dispatch_semaphore> *_loaderLock;
}

@property (retain, nonatomic) NSMutableDictionary *downloadingTasks;

+ (id)sharedManager;

- (void)downloadSCPkgWithScModel:(id)a0 uniqueId:(id)a1 immediate:(BOOL)a2 completionHandler:(id /* block */)a3 downloadProgressHandler:(id /* block */)a4;
- (id)checkPackageValid:(id)a0 uniqueID:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
