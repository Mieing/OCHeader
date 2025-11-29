@class NSString, CBCentralManager, NSMutableArray;

@interface BlueBLEAdapter : BlueAdapterBase <CBCentralManagerDelegate, CBPeripheralDelegate> {
    CBCentralManager *m_bleAdapter;
    NSMutableArray *m_data;
    NSMutableArray *m_retainDevices;
    BOOL m_isScanForWDevice;
    BOOL m_isScanning;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0 withQueue:(id)a1;
- (void)cleanUpAllDevices;
- (void)dealloc;
- (BOOL)scan;
- (int)connectProfile:(long long)a0 ProfileType:(int)a1;
- (void)closeProfile:(long long)a0;
- (int)getProfileType:(long long)a0;
- (int)getProfileConnectState:(long long)a0;
- (int)readPedometerProfileCurPedometerInfo:(long long)a0;
- (int)readPedometerProfileTarget:(long long)a0;
- (int)writePedometerProfileTarget:(long long)a0 Step:(int)a1;
- (BOOL)scanForWDevice;
- (BOOL)scanAll;
- (void)stopScan;
- (id)getDeviceProtocols:(long long)a0;
- (id)getDeviceName:(long long)a0;
- (long long)createSession:(long long)a0;
- (int)connectSession:(long long)a0;
- (void)closeSession:(long long)a0;
- (int)readSession:(long long)a0 :(char *)a1 :(int)a2;
- (void)writeSession:(long long)a0 :(const char *)a1 :(int)a2;
- (void)sendRemainDataToDevice:(id)a0;
- (void)onBlueToothPowerOff;
- (void)centralManagerDidUpdateState:(id)a0;
- (void)centralManager:(id)a0 didDiscoverPeripheral:(id)a1 advertisementData:(id)a2 RSSI:(id)a3;
- (void)__didRetrieveConnectedPeripherals:(id)a0;
- (void)centralManager:(id)a0 didFailToConnectPeripheral:(id)a1 error:(id)a2;
- (void)centralManager:(id)a0 didConnectPeripheral:(id)a1;
- (void)peripheral:(id)a0 didDiscoverServices:(id)a1;
- (void)peripheral:(id)a0 didDiscoverCharacteristicsForService:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didUpdateNotificationStateForCharacteristic:(id)a1 error:(id)a2;
- (void)centralManager:(id)a0 didDisconnectPeripheral:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didUpdateValueForCharacteristic:(id)a1 error:(id)a2;
- (BOOL)__readInt32:(const char **)a0 Length:(int *)a1 Value:(int *)a2;
- (BOOL)__parsePedometerInfo:(id)a0 Info:(id)a1;
- (BOOL)__parseTarget:(id)a0 Step:(int *)a1;
- (void)peripheral:(id)a0 didWriteValueForCharacteristic:(id)a1 error:(id)a2;
- (void)peripheralDidUpdateName:(id)a0;
- (void)peripheralDidUpdateRSSI:(id)a0 error:(id)a1;
- (void)cleanup:(id)a0;
- (void)__onConnectedPeripheral:(id)a0;
- (void)__closeConnectionForSupport3rdApp:(id)a0;
- (id)__hexToString:(id)a0;
- (void).cxx_destruct;

@end
