@class NSString, NSMutableDictionary;

@interface BDPBluetoothManager : NSObject <BDPContainerLifeCycleMessage>

@property (retain, nonatomic) NSMutableDictionary *uniqueIDtoInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)applicationExitWithUniqueID:(id)a0;
- (long long)getValidBluetoothInstanceWithUniqueID:(id)a0 instance:(id *)a1;
- (void)openBluetoothAdapterWithUniqueID:(id)a0 completion:(id /* block */)a1;
- (void)closeBluetoothAdapterWithUniqueID:(id)a0 completion:(id /* block */)a1;
- (void)operateBluetoothAdapterStateChangeWithOperate:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (void)operateBluetoothDevicesDiscoveryWithOperate:(id)a0 services:(id)a1 allowDuplicatesKey:(BOOL)a2 interval:(long long)a3 powerLevel:(id)a4 uniqueID:(id)a5 completion:(id /* block */)a6;
- (void)operateBluetoothDeviceFoundWithOperate:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (void)getConnectedBluetoothDevicesWithServices:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (void)getBluetoothAdapterStateWithUniqueID:(id)a0 completion:(id /* block */)a1;
- (void)getBluetoothDevicesWithUniqueID:(id)a0 completion:(id /* block */)a1;
- (void)createBLEConnectionWithUniqueID:(id)a0 deviceId:(id)a1 completion:(id /* block */)a2;
- (void)closeBLEConnectionWithUniqueID:(id)a0 deviceId:(id)a1 completion:(id /* block */)a2;
- (void)operateBLEConnectionStateChangeWithOperate:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (void)getBLEDeviceServicesWithDeviceId:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (void)getBLEDeviceCharacteristicsWithDeviceId:(id)a0 serviceId:(id)a1 uniqueID:(id)a2 completion:(id /* block */)a3;
- (void)writeBLECharacteristicValueWithDeviceId:(id)a0 serviceId:(id)a1 characteristicId:(id)a2 writeType:(id)a3 value:(id)a4 uniqueID:(id)a5 completion:(id /* block */)a6;
- (void)readBLECharacteristicValueWithDeviceId:(id)a0 serviceId:(id)a1 characteristicId:(id)a2 uniqueID:(id)a3 completion:(id /* block */)a4;
- (void)operateBLECharacteristicValueChangeWithOperate:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (void)notifyBLECharacteristicValueChangeWithDeviceId:(id)a0 serviceId:(id)a1 characteristicId:(id)a2 state:(BOOL)a3 type:(id)a4 uniqueID:(id)a5 completion:(id /* block */)a6;
- (void)getBLEMTUWithDeviceId:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (void)getBLEDeviceRSSIWithDeviceId:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
