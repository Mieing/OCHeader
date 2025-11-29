@class NSString, CBPeripheral, NSMutableDictionary, NSNumber, WABlueToothDeviceAdData;

@interface WABlueToothDevice : MMObject {
    NSMutableDictionary *m_services;
    NSMutableDictionary *m_characteristics;
}

@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *RSSI;
@property (retain, nonatomic) WABlueToothDeviceAdData *adData;
@property (retain, nonatomic) CBPeripheral *peripheral;

- (id)init;
- (void)addService:(id)a0;
- (void)addServices:(id)a0;
- (void)addCharacteristic:(id)a0 forService:(id)a1;
- (void)addCharacteristics:(id)a0 forService:(id)a1;
- (id)serviceForUUID:(id)a0;
- (id)characteristicForUUID:(id)a0 serviceUUID:(id)a1;
- (void)clearInfo;
- (id)deviceDictionary;
- (unsigned long long)maximumWriteLengthForType:(id)a0;
- (void).cxx_destruct;

@end
