@class NSObject, NSArray, NSMutableDictionary, NSLock, NSMutableArray;
@protocol OS_dispatch_queue;

@interface HMDProtector : NSObject {
    NSLock *_protectionControlLock;
    id /* block */ _trackerBlock;
    NSMutableDictionary *_callbackData;
    NSMutableArray *_pendingCapture;
    NSObject<OS_dispatch_queue> *_serialQueue;
    BOOL _isCustomCatchValid;
}

@property (retain) NSArray *ignoreKVOObserverPrefix;
@property (nonatomic) BOOL useNewUSEL;
@property (readonly, nonatomic) long long currentProtectionCollection;
@property (nonatomic) BOOL ignoreDuplicate;
@property (nonatomic) BOOL ignoreTryCatch;
@property (readonly, nonatomic) BOOL ignoreCloudSettings;
@property unsigned long long currentProcessCaptureLimit;

+ (id)sharedProtector;

- (void)turnProtectionsOnLoadSafe:(long long)a0;
- (void)respondToNSExceptionPrevent:(id)a0 info:(id)a1;
- (void)respondToMachExceptionWithInfo:(id)a0;
- (void)catchMethodsWithNames:(id)a0;
- (void)switchProtection:(long long)a0;
- (void)turnProtectionOff:(long long)a0;
- (void)enableNanoCrashProtect;
- (void)enableAssertProtect;
- (void)disableAssertProtect;
- (void)enableWeakRetainDeallocating;
- (void)disableWeakRetainDeallocating;
- (void)registerTrackerBlock:(id /* block */)a0;
- (void)respondToCustomCatchException:(id)a0 info:(id)a1;
- (void)switchProtectionTo:(long long)a0;
- (void)respondToCapture:(id)a0;
- (void)dispatchCapture:(id)a0;
- (void)checkAndSwitchProtectorForType:(long long)a0 collection:(long long)a1;
- (id)protectionTypeForOptions:(long long)a0;
- (void)switchProtectorForType:(long long)a0 captureBlock:(id /* block */)a1;
- (void)turnProtectionsOn:(long long)a0;
- (unsigned long long)currentProcessCaptureLimit;
- (void)setCurrentProcessCaptureLimit:(unsigned long long)a0;
- (void)setIgnoreCloudSettings;
- (void)enableQosOverCommitProtect;
- (void)addIgnoreKVOObserverPrefix:(id)a0;
- (void)registerIdentifier:(id)a0 withBlock:(id /* block */)a1;
- (void)removeRegistedBlockWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
