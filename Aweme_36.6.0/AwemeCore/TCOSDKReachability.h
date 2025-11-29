@class NSString;

@interface TCOSDKReachability : NSObject {
    struct __SCNetworkReachability { } *reachabilityRef;
}

@property (copy) NSString *key;

+ (id)makeAddressKey:(unsigned int)a0;
+ (BOOL)accessInstanceVariablesDirectly;
+ (unsigned int)networkStatus;
+ (id)reachabilityWithHostName:(id)a0;
+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityWithAddress:(const struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)a0;
+ (id)reachabilityForInternetConnection;

- (BOOL)isReachableViaWWAN;
- (BOOL)isReachableViaWiFi;
- (BOOL)isConnectionRequired;
- (BOOL)isConnectionOnDemand;
- (BOOL)isInterventionRequired;
- (void).cxx_destruct;
- (BOOL)isReachable;
- (unsigned int)networkStatusForFlags:(unsigned int)a0;
- (BOOL)startNotifier;
- (void)stopNotifier;
- (unsigned int)reachabilityFlags;
- (BOOL)connectionRequired;
- (unsigned int)currentReachabilityStatus;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (id)initWithReachabilityRef:(struct __SCNetworkReachability { } *)a0;

@end
