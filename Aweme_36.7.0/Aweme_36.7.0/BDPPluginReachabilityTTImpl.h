@class NSString, TTReachability;
@protocol BDPReachabilityStateDelegate;

@interface BDPPluginReachabilityTTImpl : NSObject <BDPReachabilityPluginDelegate>

@property (weak, nonatomic) id<BDPReachabilityStateDelegate> delegate;
@property (retain, nonatomic) TTReachability *reachability;
@property (nonatomic) unsigned long long lastNetworkType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (id)currentPrioritizedCellularProviders;
- (void)reachabilityChangeDelegate:(id)a0;
- (void)reachabilityHandler:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)currentNetworkType;

@end
