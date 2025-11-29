@interface AFNetworkReachabilityManager : NSObject

@property (nonatomic) struct __SCNetworkReachability { } *networkReachability;
@property (nonatomic) unsigned long long networkReachabilityAssociation;
@property (nonatomic) long long networkReachabilityStatus;
@property (copy, nonatomic) id /* block */ networkReachabilityStatusBlock;
@property (readonly, nonatomic, getter=isReachable) BOOL reachable;
@property (readonly, nonatomic, getter=isReachableViaWWAN) BOOL reachableViaWWAN;
@property (readonly, nonatomic, getter=isReachableViaWiFi) BOOL reachableViaWiFi;

+ (id)managerForAddress:(const void *)a0;
+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (id)sharedManager;
+ (id)managerForDomain:(id)a0;

- (id)localizedNetworkReachabilityStatusString;
- (void)setReachabilityStatusChangeBlock:(id /* block */)a0;
- (void)startMonitoring;
- (void).cxx_destruct;
- (void)stopMonitoring;
- (void)dealloc;
- (id)initWithReachability:(struct __SCNetworkReachability { } *)a0;

@end
