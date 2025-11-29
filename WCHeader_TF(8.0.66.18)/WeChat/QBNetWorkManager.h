@class NSString, QBReachability;

@interface QBNetWorkManager : NSObject {
    QBReachability *_internetReach;
    int _oldAPN;
    BOOL _hasCachedWifiAddress;
}

@property (nonatomic) long long mccCode;
@property (nonatomic) long long mncCode;
@property (nonatomic) int apnSubtype;
@property (retain, nonatomic) NSString *mccmncStr;
@property (readonly, nonatomic) int curAPN;
@property (readonly, nonatomic) NSString *apnString;
@property BOOL systemProxySet;

+ (id)sharedInstance;

- (id)init;
- (id)internetReach;
- (void)checkNetworkStatus;
- (void)updateAPN:(int)a0;
- (void)notifyOtherModules;
- (void)getApnSubtype:(id)a0;
- (void)mttNetworkReachabilityChanged:(id)a0;
- (long long)networkStatus;
- (void)startListenNetworkChange;
- (void)stopListenNetworkChange;
- (void)checkAPNType;
- (BOOL)isReachable;
- (void).cxx_destruct;

@end
