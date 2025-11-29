@class NSMutableDictionary, BDPBusinessURLHandlerHttpInterceptSettings, BDPBusinessURLHandlerHttpAutoUpgradeSettings, BDPBusinessURLHandlerHttpAutoUpgradeMonitorSettings;

@interface BDPBusinessURLHandlerManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *upgradeStatusMap;
@property (retain, nonatomic) BDPBusinessURLHandlerHttpInterceptSettings *httpIntercept;
@property (retain, nonatomic) BDPBusinessURLHandlerHttpAutoUpgradeSettings *httpAutoUpgrade;
@property (retain, nonatomic) BDPBusinessURLHandlerHttpAutoUpgradeMonitorSettings *httpAutoUpgradeMonitor;
@property (readonly, nonatomic) double httpAutoUpgradeTimeout;

+ (id)sharedManager;

- (id)processURL:(id)a0 uniqueID:(id)a1 scenceType:(id)a2 error:(id *)a3;
- (unsigned long long)p_getOrInitUpgradeStatusWithURL:(id)a0 uniqueID:(id)a1;
- (void)p_testAutoUpgradeWithURL:(id)a0 uniqueID:(id)a1 scenceType:(id)a2 completion:(id /* block */)a3;
- (double)httpAutoUpgradeTimeout;
- (id)processURLString:(id)a0 uniqueID:(id)a1 scenceType:(id)a2 error:(id *)a3;
- (void).cxx_destruct;
- (id)init;

@end
