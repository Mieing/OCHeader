@class BDPMMKVStorage, NSString, BDPQueue, NSCondition, NSDictionary, NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface BDPStarkUserFilesTransferer : NSObject

@property (copy, nonatomic) NSString *starkUserRootPath;
@property (copy, nonatomic) NSString *targetUserRootPath;
@property (retain, nonatomic) NSDictionary *config;
@property (retain, nonatomic) BDPQueue *taskWaitingQueue;
@property (retain, nonatomic) BDPQueue *taskExecutingQueue;
@property (retain, nonatomic) NSMutableSet *starkUserSet;
@property (retain, nonatomic) NSMutableDictionary *transferResultMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (retain, nonatomic) NSCondition *condition;
@property (nonatomic) BOOL hasTransferInitial;
@property (retain, nonatomic) BDPMMKVStorage *transferStorage;

+ (id)sharedInstance;

- (void)startTransferUserFilesAsync;
- (void)checkUserFileHasTransfered:(id)a0 checkBlk:(id /* block */)a1;
- (void)performTransferTask;
- (BOOL)checkIfAllTransfer;
- (BOOL)checkIfNeedTransferWithAppID:(id)a0;
- (void)removeOldUserPathAsync:(id)a0;
- (void)onTaskCompletionWithTaskID:(id)a0 result:(BOOL)a1 startTime:(long long)a2;
- (void).cxx_destruct;
- (id)init;

@end
