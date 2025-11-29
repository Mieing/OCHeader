@class CTTelephonyNetworkInfo;

@interface AppMonitorReachability : NSObject {
    BOOL isHighVersion;
    struct __SCNetworkReachability { } *_reachabilityRef;
    BOOL isMoreThanIOS7;
    CTTelephonyNetworkInfo *_telephonyInfo;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (struct __SCNetworkReachability { } *)createNetworkReachabilityRef;
- (id)currentReachabilityStatusString;
- (void).cxx_destruct;
- (long long)networkStatusForFlags:(unsigned int)a0;
- (id)init;
- (long long)currentReachabilityStatus;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)currentStatusString;

@end
