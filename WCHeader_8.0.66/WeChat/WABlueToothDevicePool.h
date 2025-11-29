@class NSMutableArray, NSRecursiveLock;

@interface WABlueToothDevicePool : MMObject {
    NSMutableArray *m_devicePool;
    NSRecursiveLock *m_oLock;
}

- (id)initWithLock:(id)a0;
- (id)addDeviceWithPeripheral:(id)a0 RSSI:(id)a1 adData:(id)a2;
- (id)getDeviceByPeripheral:(id)a0;
- (id)getDeviceByUUID:(id)a0;
- (void)clearDisconnectedDevice;
- (void)clearAllDevice;
- (id)allDevices;
- (void).cxx_destruct;

@end
