@class MMWifiInfo, NSRecursiveLock, NSString, NSObject;
@protocol OS_nw_path_monitor, OS_dispatch_queue, NetworkStatusDelegate;

@interface CNetworkStatus : MMRootService <MMServiceProtocol> {
    unsigned int m_uiLastStatus;
    id<NetworkStatusDelegate> m_delNetworkStatus;
}

@property (retain, nonatomic) NSRecursiveLock *accessWifiSSIDLock;
@property (nonatomic) unsigned long long lastChangeReachTime;
@property (retain) MMWifiInfo *wifiInfo;
@property (retain, nonatomic) NSObject<OS_nw_path_monitor> *cellularMonitor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cellularQueue;
@property (nonatomic) BOOL isCellularValid;
@property (readonly, nonatomic) BOOL isGettingWifiInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptionForNetType:(int)a0;
+ (id)descriptionForNewNetType:(int)a0;
+ (id)NetworkTypeDescription;
+ (void)GetCTNetworkInfo;
+ (id)GetCarrier;
+ (id)getCarrierName;
+ (id)GetTelephonyNetWorkCountryCode;
+ (id)getCurrentRadioAccessTechnology:(id)a0;
+ (unsigned long long)getSimCardCount;
+ (id)getSimCardType;
+ (void)updateUpdateRadioAccessTechFromNetworkInfo:(id)a0;
+ (BOOL)isSimCardSupport3GPlus;
+ (BOOL)isSimCard4G;
+ (BOOL)isSimCard5G;
+ (BOOL)isTypeEqualToSimCard5G:(id)a0;
+ (void)asyncCheckCellularIsRestrictedWithCallbackBlock:(id /* block */)a0;
+ (void)AsyncGetWifiInfo:(id /* block */)a0;
+ (void)AsyncUpdateCachedWifiInfo;
+ (id)testGetWifiInfo;

- (int)voIPNetState;
- (int)voIPCellularRadioType;
- (int)currentNetType;
- (id)init;
- (void)dealloc;
- (void)initCellularMonitor;
- (void)PingReach;
- (void)Start:(id)a0;
- (void)Stop;
- (void)ChangeReach;
- (BOOL)isOnWWan;
- (BOOL)isOnWifi;
- (int)getNetworkType;
- (unsigned int)getNewNetType;
- (unsigned int)getNewNetTypeWithNeedDistinguish5G:(BOOL)a0;
- (unsigned int)getConnectFlagValue;
- (BOOL)isReachable;
- (BOOL)isOnWifiOrOver2G;
- (void)GetCachedWifiInfo:(id *)a0 BSSID:(id *)a1;
- (id)GetCachedWifiInfo;
- (void)GetWifiInfo:(id *)a0 BSSID:(id *)a1;
- (void)GetWifiInfo:(id *)a0 BSSID:(id *)a1 forceRefresh:(BOOL)a2 logUsage:(BOOL)a3;
- (void).cxx_destruct;

@end
