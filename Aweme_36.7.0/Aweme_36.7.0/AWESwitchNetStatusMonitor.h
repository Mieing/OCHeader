@class NSString;

@interface AWESwitchNetStatusMonitor : NSObject

@property (copy, nonatomic) NSString *lastNetworkTypeStr;
@property (nonatomic) BOOL isWeakNet;

- (void)onMultiNetworkStateChanged:(id)a0;
- (BOOL)checkIsPoolNet;
- (BOOL)checkNetworkIsWifi;
- (void)p_addKVO;
- (void)wifiToCellularChangedNotification:(id)a0;
- (void)recordNetworkSwitch;
- (id)networkType;
- (void).cxx_destruct;
- (id)init;

@end
