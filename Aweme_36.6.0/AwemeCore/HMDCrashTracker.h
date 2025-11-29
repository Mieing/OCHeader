@class NSString, HMDCrashDynamicDataProvider, NSArray;

@interface HMDCrashTracker : HMDTracker <HMDURLHostProvider, HMDExcludeModule, HMDCrashKitDelegate> {
    BOOL _crashKitFinishedSetup;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HMDCrashDynamicDataProvider *dynamicDataProvider;
@property (getter=isFinishDetection) BOOL finishDetection;
@property (getter=isDetected) BOOL detected;
@property (copy) NSArray *reportBlocks;
@property (copy) NSArray *notDetectBlocks;
@property (retain, nonatomic) NSString *crashPath;
@property (readonly, nonatomic) double launchThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)excludedModule;
+ (BOOL)isSetAssertMainThreadTransactions;
+ (void)load;
+ (id)sharedTracker;

- (void)updateConfig:(id)a0;
- (void)checkOpenStatus:(int)a0 invalidStop:(BOOL)a1;
- (BOOL)needSyncStart;
- (id)URLHostProviderConfigHosts:(id)a0;
- (id)URLHostProviderInjectedHosts:(id)a0;
- (id)URLHostProviderDefaultHosts:(id)a0;
- (void)cleanupWithConfig:(id)a0;
- (id)finishDetectionNotification;
- (void)crashKitDidDetectCrashForLastTime:(id)a0;
- (void)crashKitDidNotDetectCrashForLastTime;
- (void)receiveConfigNotification:(id)a0;
- (void)notifyCrashProcessComplete;
- (void)didDetectOneCrashRecord:(id)a0;
- (void)didNotDetectCrashRecord;
- (BOOL)detectAppExtensionCrashAvailable;
- (void)startCrashDetection_once;
- (void)updateCrashRelatedTool;
- (void)writeLogIfCrashHappened;
- (void)updateSIGPIPEState;
- (BOOL)uploadCrashLogImmediately:(id *)a0;
- (void)storeAssertMainThreadTransactionsConfig:(id)a0;
- (id)crashConfig;
- (void)addCrashDetectCallBack:(id /* block */)a0;
- (void)addCrashNotDetectCallBack:(id /* block */)a0;
- (void)uploadCrashLogImmediately;
- (id)__crashConfig;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;
- (void)dealloc;
- (BOOL)shouldEncrypt;
- (Class)storeClass;

@end
