@class MMLiveFlowCancelationSource, NSArray, NSMutableDictionary, MMTimer, NSString;

@interface MMFinderLiveDNSMgr : MMUserService <CNetworkStatusExt, MMServiceProtocol>

@property (nonatomic) long long strategy;
@property (nonatomic) BOOL resolveBeforeUsage;
@property (nonatomic) double dnsRefreshIntervalInSeconds;
@property (retain, nonatomic) NSMutableDictionary *hostIpMap;
@property (retain, nonatomic) NSMutableDictionary *invalidHostIpMap;
@property (retain, nonatomic) NSArray *hostsToResolve;
@property (nonatomic) unsigned int lastRefreshNetType;
@property (nonatomic) double lastRefreshTimestamp;
@property (nonatomic) unsigned int lastNetworkChangeTimestamp;
@property (retain, nonatomic) MMTimer *refreshTimer;
@property (nonatomic) BOOL isInBackground;
@property (retain, nonatomic) MMLiveFlowCancelationSource *terminationCancelationSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initDNSMgrServiceIfNeeded;
+ (id)localDNSResolve:(id)a0;
+ (void)mmdnsResolve:(id)a0 fallbackLocal:(BOOL)a1 hostIpMap:(id)a2 cancelationToken:(id)a3;
+ (void)initMMDNSIfNeeded;

- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceMemoryWarning;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)ReachabilityChange:(unsigned int)a0;
- (void)onSimCardNetTypeChange;
- (void)forceRefreshDNSMap;
- (void)refreshDNSMap;
- (void)refreshDNSWithLocalDNSFirst;
- (void)refreshDNSWithMMDNS;
- (void)scheduleNextRefreshWithDelay:(double)a0;
- (void)stopRefreshTimer;
- (id)getIPForHost:(id)a0;
- (void)markHostDNSInvalidWithUrl:(id)a0;
- (id)resolvedUrlWithUrl:(id)a0;
- (void).cxx_destruct;

@end
