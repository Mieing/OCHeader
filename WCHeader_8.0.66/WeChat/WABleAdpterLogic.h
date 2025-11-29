@class NSString, NSRecursiveLock, WABlueToothDevicePool, NSArray, NSMutableDictionary, NSDictionary, CBCentralManager, NSObject;
@protocol WABleAdpterLogicDelegate, OS_dispatch_queue;

@interface WABleAdpterLogic : MMObject <CBCentralManagerDelegate, CBPeripheralDelegate> {
    CBCentralManager *m_bleAdapter;
    NSObject<OS_dispatch_queue> *m_blueQueue;
    NSRecursiveLock *m_lock;
    BOOL hasFirstUpdateState;
    NSMutableDictionary *m_connectedDevices;
    NSArray *m_currentScanServices;
    NSDictionary *m_currentScanOptions;
}

@property (retain, nonatomic) WABlueToothDevicePool *devices;
@property (weak, nonatomic) id<WABleAdpterLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithDelegate:(id)a0 lock:(id)a1;
- (long long)state;
- (BOOL)scan;
- (BOOL)scanForServices:(id)a0 allowDuplicatesKey:(BOOL)a1;
- (void)stopScan;
- (void)clearAndDisconnectAllDevices;
- (void)disconnectAllDevicesAndStopScan;
- (void)disconnectAllDevices;
- (void)restoreScanIfNeeded;
- (id)getConnectedDevicesForServices:(id)a0;
- (id)getDeviceInSysytemHistory:(id)a0;
- (int)connectPeripheral:(id)a0;
- (int)disConnectPeripheral:(id)a0;
- (int)discoverServiceForPeripheral:(id)a0 services:(id)a1;
- (int)discoverCharacteristicsForService:(id)a0 peripheral:(id)a1;
- (int)writeCharacteristicsForPeripheral:(id)a0 service:(id)a1 charUUID:(id)a2 value:(id)a3 writeType:(unsigned long long)a4;
- (int)readCharacteristicsForPeripheral:(id)a0 service:(id)a1 charUUID:(id)a2;
- (int)setNotifyForPeripheral:(id)a0 service:(id)a1 charUUID:(id)a2 state:(BOOL)a3;
- (int)readRSSIForPeripheral:(id)a0;
- (void)centralManagerDidUpdateState:(id)a0;
- (void)centralManager:(id)a0 didDiscoverPeripheral:(id)a1 advertisementData:(id)a2 RSSI:(id)a3;
- (void)centralManager:(id)a0 didFailToConnectPeripheral:(id)a1 error:(id)a2;
- (void)centralManager:(id)a0 didConnectPeripheral:(id)a1;
- (void)centralManager:(id)a0 didDisconnectPeripheral:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didDiscoverServices:(id)a1;
- (void)peripheral:(id)a0 didDiscoverCharacteristicsForService:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didWriteValueForCharacteristic:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didUpdateValueForCharacteristic:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didUpdateNotificationStateForCharacteristic:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didReadRSSI:(id)a1 error:(id)a2;
- (void)__didRetrieveConnectedPeripherals:(id)a0;
- (void)centralManagerUpdateStateTimeout;
- (void).cxx_destruct;

@end
