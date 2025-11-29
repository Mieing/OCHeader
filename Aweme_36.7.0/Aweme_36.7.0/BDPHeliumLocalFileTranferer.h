@class BDPMMKVStorage, NSString, BDPQueue, NSObject;
@protocol OS_dispatch_queue;

@interface BDPHeliumLocalFileTranferer : NSObject

@property (nonatomic) BOOL isHeliumDBTransfered;
@property (nonatomic) BOOL isHeliumCacheFileTransfered;
@property (nonatomic) BOOL isHeliumUserDBTransfered;
@property (copy, nonatomic) NSString *oldTmgFolerPath;
@property (copy) NSString *bdpFolerPath;
@property (copy) NSString *cacheFolderPath;
@property (retain, nonatomic) BDPQueue *taskWaitingQueue;
@property (retain, nonatomic) BDPQueue *taskExecutingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (retain, nonatomic) BDPMMKVStorage *transferStorage;
@property (nonatomic) BOOL isCopying;

+ (id)sharedInstance;

- (void)copyHeliumGameStorageFromTmgFolder;
- (void)resetCopyStatus;
- (void)checkHeliumLocalFileHasTransfer:(id)a0 checkBlock:(id /* block */)a1 isAsync:(BOOL)a2;
- (void)removeHeliumFileIfNeed;
- (void)performTransferTask;
- (void).cxx_destruct;
- (id)init;

@end
