@class CBCentralManager, NSObject, NSTimer, NSString, NSMutableArray, BDPUniqueID;
@protocol OS_dispatch_queue;

@interface BDPBluetoothInstance : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) CBCentralManager *centralManager;
@property (retain, nonatomic) NSMutableArray *connectedDevices;
@property (nonatomic) long long bluetoothState;
@property (nonatomic) BOOL isDiscovering;
@property (nonatomic) BOOL onBluetoothAdapterStateChange;
@property (nonatomic) BOOL onBluetoothDevicesFound;
@property (nonatomic) BOOL onBLEConnectionStateChange;
@property (nonatomic) BOOL onBLECharacteristicValueChange;
@property (retain, nonatomic) NSMutableArray *discoveredDevices;
@property (retain, nonatomic) NSTimer *discoverTimer;
@property (copy, nonatomic) id /* block */ openCompletion;
@property (retain, nonatomic) NSMutableArray *readCharacteristics;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *blueQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearAllInfo;
- (void)onBluetoothDeviceFound;
- (void)onBluetoothAdapterStateChange:(id)a0;
- (id)findDeviceInConnectedDevicesWithDeviceId:(id)a0;
- (id)findDeviceInDiscoveredDevicesWithDeviceId:(id)a0;
- (void)onBLEConnectionStateChange:(id)a0 connected:(BOOL)a1;
- (void)onBLECharacteristicValueChange:(id)a0 fromRead:(BOOL)a1;
- (void)openBluetoothAdapterWithCompletion:(id /* block */)a0;
- (void)closeBluetoothAdapterWithCompletion:(id /* block */)a0;
- (void)operateBluetoothAdapterStateChangeWithOperate:(id)a0 completion:(id /* block */)a1;
- (void)operateBluetoothDevicesDiscoveryWithOperate:(id)a0 services:(id)a1 allowDuplicatesKey:(BOOL)a2 interval:(long long)a3 powerLevel:(id)a4 completion:(id /* block */)a5;
- (void)operateBluetoothDeviceFoundWithOperate:(id)a0 completion:(id /* block */)a1;
- (void)getConnectedBluetoothDevicesWithServices:(id)a0 completion:(id /* block */)a1;
- (void)getBluetoothAdapterStateWithCompletion:(id /* block */)a0;
- (void)getBluetoothDevicesWithCompletion:(id /* block */)a0;
- (void)createBLEConnectionWithDeviceId:(id)a0 completion:(id /* block */)a1;
- (void)closeBLEConnectionWithDeviceId:(id)a0 completion:(id /* block */)a1;
- (void)operateBLEConnectionStateChangeWithOperate:(id)a0 completion:(id /* block */)a1;
- (void)getBLEDeviceServicesWithDeviceId:(id)a0 completion:(id /* block */)a1;
- (void)getBLEDeviceCharacteristicsWithDeviceId:(id)a0 serviceId:(id)a1 completion:(id /* block */)a2;
- (void)readBLECharacteristicValueWithDeviceId:(id)a0 serviceId:(id)a1 characteristicId:(id)a2 completion:(id /* block */)a3;
- (void)writeBLECharacteristicValueWithDeviceId:(id)a0 serviceId:(id)a1 characteristicId:(id)a2 writeType:(id)a3 value:(id)a4 completion:(id /* block */)a5;
- (void)operateBLECharacteristicValueChangeWithOperate:(id)a0 completion:(id /* block */)a1;
- (void)notifyBLECharacteristicValueChangeWithDeviceId:(id)a0 serviceId:(id)a1 characteristicId:(id)a2 state:(BOOL)a3 type:(id)a4 completion:(id /* block */)a5;
- (void)getBLEMTUWithDeviceId:(id)a0 completion:(id /* block */)a1;
- (void)getBLEDeviceRSSIWithDeviceId:(id)a0 completion:(id /* block */)a1;
- (void)centralManager:(id)a0 didConnectPeripheral:(id)a1;
- (void).cxx_destruct;
- (void)centralManager:(id)a0 didDiscoverPeripheral:(id)a1 advertisementData:(id)a2 RSSI:(id)a3;
- (void)centralManager:(id)a0 didDisconnectPeripheral:(id)a1 error:(id)a2;
- (void)centralManagerDidUpdateState:(id)a0;
- (void)centralManager:(id)a0 didFailToConnectPeripheral:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didDiscoverServices:(id)a1;
- (void)peripheral:(id)a0 didDiscoverCharacteristicsForService:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didUpdateValueForCharacteristic:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didUpdateNotificationStateForCharacteristic:(id)a1 error:(id)a2;
- (id)initWithUniqueID:(id)a0;
- (BOOL)isBluetoothAvailable;

@end
