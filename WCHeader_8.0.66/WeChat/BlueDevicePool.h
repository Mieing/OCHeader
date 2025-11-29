@class NSMutableArray, NSRecursiveLock;

@interface BlueDevicePool : NSObject {
    NSRecursiveLock *m_oLock;
}

@property (retain) NSMutableArray *devicePool;

- (id)initWithLock:(id)a0;
- (id)addDeviceWithAccessory:(id)a0;
- (id)addDeviceWithPeripheral:(id)a0 WithDID:(long long)a1;
- (id)addDeviceWithPeripheral:(id)a0 WithMacData:(id)a1;
- (id)addDeviceWithPeripheral:(id)a0 WithUUID:(id)a1;
- (id)getDeviceByAccessory:(id)a0;
- (id)getDeviceByDID:(long long)a0;
- (id)getDeviceBySessionID:(long long)a0;
- (id)getDeviceByPeripheral:(id)a0;
- (id)getDeviceByInputStream:(id)a0;
- (id)getDeviceByOutputStream:(id)a0;
- (void)removeDevice:(id)a0;
- (void)removeDisconnected;
- (void)removeAllObjectsWithDelegate:(id)a0;
- (void).cxx_destruct;

@end
