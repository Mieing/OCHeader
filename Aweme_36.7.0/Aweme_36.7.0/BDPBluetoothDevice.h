@class NSDictionary, CBPeripheral, NSNumber, NSMutableArray;

@interface BDPBluetoothDevice : NSObject

@property (retain, nonatomic) CBPeripheral *peripheral;
@property (retain, nonatomic) NSDictionary *advertiseData;
@property (retain, nonatomic) NSNumber *RSSI;
@property (retain, nonatomic) NSMutableArray *createConnectCompletions;
@property (retain, nonatomic) NSMutableArray *getBLEDeviceServicesCompletions;
@property (retain, nonatomic) NSMutableArray *getBLEDeviceCharacteristicsCompletions;

- (id)getServiceForUUID:(id)a0;
- (id)getCharacteristicsForUUID:(id)a0 inService:(id)a1;
- (id)deviceJson;
- (void).cxx_destruct;
- (id)init;
- (long long)state;
- (id)deviceID;

@end
