@class TPRecursiveLock, NSHashTable;

@interface TPNetworkUtil : NSObject {
    struct __SCNetworkReachability { } *_defaultRouteReachability;
}

@property (retain, nonatomic) TPRecursiveLock *delegateLock;
@property (retain, nonatomic) NSHashTable *delegateArray;
@property long long reachableState;
@property long long cellNetType;
@property (nonatomic) BOOL started;
@property (readonly) long long networkType;

+ (id)sharedInstance;
+ (BOOL)isNetworkType5G:(id)a0;

- (id)init;
- (void)startIfNeeded;
- (void)stopIfNeeded;
- (void)startListenNetworkState;
- (void)stopListenNetworkState;
- (void)reset:(long long)a0;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (BOOL)isNetWorkReachable;
- (BOOL)isWifiAcitve;
- (BOOL)isWWANAcitve;
- (void)startListenRadioAccessTechnology;
- (void)stopListenRadioAccessTechnology;
- (void)handleTPNetworkCTRadioAccessTechnologyDidChangeNotification;
- (void)updateRadioAccessTechnology;
- (void).cxx_destruct;

@end
