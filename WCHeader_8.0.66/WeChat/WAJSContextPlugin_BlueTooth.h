@class NSRecursiveLock, NSString, NSMutableDictionary, MMTimer, WABleAdpterLogic;

@interface WAJSContextPlugin_BlueTooth : WAJSContextPluginBase <WABleAdpterLogicDelegate> {
    BOOL m_hasInit;
    WABleAdpterLogic *m_bleAdpter;
    NSRecursiveLock *m_lock;
    long long m_state;
    unsigned long long m_onDeviceFoundTriggerInterval;
    NSMutableDictionary *m_foundDevices;
    MMTimer *m_deviceOnTriggerTimer;
}

@property (nonatomic) BOOL isBackgroundModeEnabled;
@property (nonatomic) BOOL isAllowBackground;
@property (nonatomic) BOOL hasConnection;
@property (nonatomic) BOOL isSilentlyOpen;
@property (nonatomic) BOOL m_isScaning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)openBluetoothLowEnergyLib;
- (void)closeBluetoothLowEnergyLib;
- (void)disconnectAllPeripheralAndStopScan;
- (void)restoreScanIfNeeded;
- (BOOL)getBluetoothAdapterAvailableState;
- (void)startBluetoothDevicesDiscoveryForServices:(id)a0 allowDuplicatesKey:(BOOL)a1 onFoundInterval:(unsigned long long)a2;
- (int)stopBluetoothDevicesDiscovery;
- (void)onBleScanStateChanged;
- (id)getFoundBluethoothDevices;
- (id)getConnectedBluethoothDevices:(id)a0;
- (int)createBluetoothLowEnergyConnection:(id)a0;
- (int)closeBluetoothLowEnergyConnection:(id)a0;
- (int)getBluetoothDeviceRSSI:(id)a0;
- (int)discoverService:(id)a0 forDevice:(id)a1;
- (int)discovierCharacteristicForService:(id)a0 forDevice:(id)a1;
- (int)writeValueToCharacteristics:(id)a0 serviceID:(id)a1 characteristics:(id)a2 value:(id)a3 writeType:(unsigned long long)a4;
- (int)readValueFromCharacteristics:(id)a0 serviceID:(id)a1 characteristics:(id)a2;
- (int)setNotifyOnCharacteristics:(id)a0 serviceID:(id)a1 characteristics:(id)a2 state:(BOOL)a3;
- (long long)getMaximumWriteValueLengthForType:(id)a0 forDevice:(id)a1;
- (void)onBleStateChanged:(id)a0;
- (void)onBleStateChangeTimeout:(id)a0;
- (void)onBleDeviceFound:(id)a0;
- (void)onTriggerDevicesSendToServices;
- (void)onBleDeviceConnected:(id)a0 errorCode:(int)a1 errMsg:(id)a2;
- (void)onBleDeviceDisConnected:(id)a0 errorCode:(int)a1 errMsg:(id)a2;
- (void)onBleDeviceDidDisConnentedError:(id)a0 errorCode:(int)a1 errMsg:(id)a2;
- (void)onBleDevicesAllDisconnected;
- (void)onBleDeviceDiscoverServices:(id)a0 device:(id)a1 errorCode:(int)a2 errMsg:(id)a3;
- (void)onBleDeviceDiscoverCharacteristicsInService:(id)a0 device:(id)a1 errorCode:(int)a2 errMsg:(id)a3;
- (void)onBleDeviceDidWriteValueToCharacteristics:(id)a0 service:(id)a1 device:(id)a2 errorCode:(int)a3 errMsg:(id)a4;
- (void)onBleDeviceDidSetNotifyToCharacteristics:(id)a0 service:(id)a1 device:(id)a2 errorCode:(int)a3 errMsg:(id)a4;
- (void)onBleDeviceDidUpdateValueInCharacteristics:(id)a0 service:(id)a1 device:(id)a2 value:(id)a3 errorCode:(int)a4 errMsg:(id)a5;
- (void)onBleDeviceDidReadRSSI:(id)a0 device:(id)a1 errorCode:(int)a2 errMsg:(id)a3;
- (BOOL)handleEvent:(long long)a0 userInfo:(id)a1;
- (int)checkAbilityForInvokingBleAPI;
- (void)stopScan;
- (void).cxx_destruct;

@end
