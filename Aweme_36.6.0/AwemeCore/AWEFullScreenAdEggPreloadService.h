@class NSObject, NSString, NSLock, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AWEFullScreenAdEggPreloadService : HTSService <AWEFullScreenAdEggPreloadService>

@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSMutableArray *preloadLocalModels;
@property (retain, nonatomic) NSMutableArray *currentLoadModels;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (nonatomic) BOOL isLocalDataUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)saveDataInDiskWithNotification:(id)a0;
- (void)adSearchMiddlePageModelReceiveWithNotification:(id)a0;
- (void)checkAndUpdateLocalStorage;
- (BOOL)isModelExpired:(id)a0;
- (void)trackDataReceivedWithModel:(id)a0;
- (BOOL)tryPreloadAdEggResourceWithModel:(id)a0;
- (void)trackPreloadStartWithModel:(id)a0;
- (BOOL)needPreloadResourceWithModel:(id)a0;
- (void)preloadImageDataWithModel:(id)a0;
- (void)preloadAlphaPlayerResourceWithModel:(id)a0;
- (void)trackPreloadResultWithModel:(id)a0 success:(long long)a1 failReason:(id)a2;
- (void)onServiceStartUp;
- (void).cxx_destruct;
- (id)init;

@end
