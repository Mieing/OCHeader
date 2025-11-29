@class NSObject, NSString, NSHashTable;
@protocol OS_dispatch_semaphore;

@interface BDPNetworkCenter : NSObject <BDPReachabilityStateDelegate, BDPAPPFramePreloadProtocol>

@property (nonatomic) unsigned long long currentNetworkType;
@property (nonatomic) BOOL registered;
@property (retain, nonatomic) NSHashTable *delegates;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *changeSem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)startPreload;
+ (void)bootstrapLaunch;
+ (id)sharedCenter;

- (void)addReachabilityDelegate:(id)a0;
- (void)startReachabilityChangedNotifier;
- (void)onNetworkWeakStatusChanged:(id)a0;
- (BOOL)isNetworkVpnOn;
- (id)networkTypeData;
- (void)removeReachabilityDelegate:(id)a0;
- (unsigned long long)networkType;
- (void).cxx_destruct;
- (id)init;
- (void)onReachabilityChange:(unsigned long long)a0;
- (id)networkTypeString;
- (BOOL)isNetworkConnected;

@end
