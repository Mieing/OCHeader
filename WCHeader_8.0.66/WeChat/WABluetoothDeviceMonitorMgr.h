@class NSRecursiveLock, NSString, NSMutableArray, WABleAdpterLogic;

@interface WABluetoothDeviceMonitorMgr : MMUserService <WABleAdpterLogicDelegate, WAAppTaskMgrExt, WAAppItemManagerExtension, MMServiceProtocol> {
    NSMutableArray *_monitoredDevices;
    WABleAdpterLogic *_bleAdapter;
    NSRecursiveLock *_lock;
    NSString *_openingAppId;
    NSMutableArray *_currentOpenJobs;
    NSMutableArray *_pendingOpenJobs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)startMonitoringBluetoothDevices;
- (void)setBluetoothMonitoredDevice:(id)a0;
- (BOOL)deleteBluetoothMonitoredDeviceWithWechatToken:(id)a0 appId:(id)a1;
- (void)deleteBluetoothMonitoredDevice:(id)a0;
- (id)getAllBluetoothMonitoredDevices;
- (void)deleteBluetoothMonitoredDeviceByAppId:(id)a0;
- (void)deleteBluetoothMonitoredDeviceByAppId:(id)a0 debugType:(unsigned long long)a1;
- (void)deleteBluetoothMonitoredDeviceByAppId:(id)a0 debugType:(unsigned long long)a1 allDebugType:(BOOL)a2;
- (void)onBleStateChanged:(id)a0;
- (void)onBleDeviceConnected:(id)a0 errorCode:(int)a1 errMsg:(id)a2;
- (void)onBleDeviceDisConnected:(id)a0 errorCode:(int)a1 errMsg:(id)a2;
- (void)onBleDeviceDidDisConnentedError:(id)a0 errorCode:(int)a1 errMsg:(id)a2;
- (void)tryConnectingBluetoothDevice:(id)a0;
- (void)tryDisconnectingBluetoothDevice:(id)a0;
- (id)monitoredDevicePathSavePath;
- (void)loadMonitoredDeviceList;
- (void)saveMonitoredDeviceList;
- (void)openWeAppWithJob:(id)a0;
- (void)checkAndOpenPendingJobs;
- (id)getMonitoredDeviceWithUUID:(id)a0;
- (id)getMonitoredDeviceWithWechatToken:(id)a0 appId:(id)a1;
- (unsigned long long)getDebugModeTypeEnumByEnvVersion:(id)a0;
- (BOOL)initBleAdapterIfAllowed;
- (id)popCurrentOpenJob:(id)a0;
- (id)genOpenWeAppJob:(id)a0;
- (void)onAppTaskTerminate:(id)a0;
- (void)onAppTaskDidFinishLaunchWithAppId:(id)a0;
- (void)onWeAppItemDeleted:(id)a0;
- (void)deleteAllDevices;
- (void).cxx_destruct;

@end
