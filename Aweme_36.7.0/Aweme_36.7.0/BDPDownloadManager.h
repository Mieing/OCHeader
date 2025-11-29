@class NSMapTable, NSObject;
@protocol OS_dispatch_semaphore;

@interface BDPDownloadManager : NSObject {
    NSMapTable *_delegates;
}

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;

- (id)downloadPkgSourceFrom:(long long)a0;
- (BOOL)checkNeedCallbackInChildThread:(long long)a0;
- (id)taskWithRequest:(id)a0 receivedDataBlk:(id /* block */)a1 completedBlk:(id /* block */)a2 priority:(float)a3 sourceFrom:(long long)a4 uniqueID:(id)a5;
- (id)hg_taskWithRequest:(id)a0 receivedDataBlk:(id /* block */)a1 completedBlk:(id /* block */)a2 priority:(float)a3 sourceFrom:(long long)a4 uniqueID:(id)a5;
- (void).cxx_destruct;
- (id)init;

@end
