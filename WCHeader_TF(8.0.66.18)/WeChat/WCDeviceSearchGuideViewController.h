@class NSString, WCDevice, AirKissConfData, UIScrollView, UIView;

@interface WCDeviceSearchGuideViewController : MMUIViewController <AirKissViewControllerDelegate, IWCDeviceBrandMgrExt, CNetworkStatusExt> {
    WCDevice *m_device;
    AirKissConfData *m_confData;
    UIScrollView *m_scrolView;
    UIView *m_noWifiOrBLEView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFilterUserData:(id)a0;
- (void)viewDidLoad;
- (void)initGuideView;
- (void)initNoWifiOrBLEView;
- (void)onAirKiss;
- (void)onDeviceSearch;
- (void)onAirKissReturn:(BOOL)a0;
- (void)updateConnectState;
- (BOOL)isBLEConnected;
- (BOOL)isWifiConnected;
- (void)onWCDeviceBlueToothStateChanged:(int)a0;
- (void)ReachabilityChange:(unsigned int)a0;
- (void).cxx_destruct;

@end
