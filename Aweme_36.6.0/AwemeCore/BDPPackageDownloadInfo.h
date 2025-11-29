@class NSError, NSString, BDPQueue, BDPStarkPkgLoadInfo, NSObject, BDPStarkNetworkTask;
@protocol OS_dispatch_queue;

@interface BDPPackageDownloadInfo : NSObject {
    BOOL _hasCompleted;
    int _resultSize;
    BDPQueue *_completedBlkQueue;
    BDPQueue *_processBlkQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSError *_error;
}

@property (copy, nonatomic) NSString *md5;
@property (copy, nonatomic) NSString *url;
@property (weak, nonatomic) BDPStarkNetworkTask *task;
@property (retain, nonatomic) BDPStarkPkgLoadInfo *pkgLoadInfo;

- (void)addProgressBlock:(id /* block */)a0;
- (id)initWithMd5:(id)a0 url:(id)a1;
- (void)tryHandleCompletedBlocksWithSize:(long long)a0 error:(id)a1;
- (void)tryHandleProcessBlocksWithProgress:(double)a0;
- (void).cxx_destruct;
- (void)addCompletionBlock:(id /* block */)a0;
- (BOOL)isDownloaded;

@end
