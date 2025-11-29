@class NSLock, BDByteCastSSDPProber, BDByteCastNetUtilities, BDByteCastEnvInfo, BDByteCastPingProber, BDByteCastPortProber, NSMutableArray, NSObject, BDByteCastLocalNetworkAuthorizationChecker, NSMutableSet, BDByteCastMDNSProber;
@protocol OS_dispatch_queue, OS_dispatch_group, BDByteCastEnvCheckManagerDelegate;

@interface BDByteCastEnvCheckManager : NSObject

@property (retain, nonatomic) NSObject *strongRefSelf;
@property (retain, nonatomic) BDByteCastSSDPProber *ssdpProber;
@property (retain, nonatomic) BDByteCastMDNSProber *mdnsProber;
@property (retain, nonatomic) BDByteCastPingProber *pingProber;
@property (retain, nonatomic) NSMutableArray *pingManagers;
@property (retain, nonatomic) BDByteCastPortProber *portProber;
@property (retain, nonatomic) BDByteCastNetUtilities *netUtilities;
@property (retain, nonatomic) BDByteCastLocalNetworkAuthorizationChecker *localNetworkAuthorizationChecker;
@property (retain, nonatomic) BDByteCastLocalNetworkAuthorizationChecker *localNetworkAuthorizationChecker2;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *multicastCheckGroup;
@property BOOL isChecking;
@property (nonatomic) unsigned long long currentCheckingType;
@property unsigned long long currentCheckedType;
@property (retain, nonatomic) BDByteCastEnvInfo *envInfo;
@property (retain, nonatomic) NSMutableArray *foundHosts;
@property (retain, nonatomic) NSLock *foundHostsLock;
@property (retain, nonatomic) NSMutableSet *blackIpsSet;
@property (weak, nonatomic) id<BDByteCastEnvCheckManagerDelegate> delegate;

+ (id)sharedInstance;

- (id)initWithContextId:(id)a0;
- (void)didReceivedReachabilityChangedNotification:(id)a0;
- (BOOL)startEnvCheckWithType:(unsigned long long)a0;
- (void)notifyCheckStepFinished:(unsigned long long)a0;
- (void)startCheckMulticastIfNecessary;
- (void)getBasicNetworkingInfoWithCompletion:(id /* block */)a0;
- (void)checkLocalNetworkPermissionWithTag:(long long)a0 completion:(id /* block */)a1;
- (void)startHostsProbe;
- (void)startCheckUnicastIfNecessary;
- (void)startCheckPortIfNecessary;
- (BOOL)startEnvCheck;
- (void).cxx_destruct;
- (void)dealloc;

@end
