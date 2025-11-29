@class NSRecursiveLock, NSString, NSMutableDictionary, NSMutableArray, NSObject, CBPeripheralManager;
@protocol OS_dispatch_queue, WABlePeripheralAdapterLogicDelegate;

@interface WABlePeripheralAdapterLogic : NSObject <CBPeripheralManagerDelegate> {
    NSString *m_serverID;
    CBPeripheralManager *m_adapter;
    NSRecursiveLock *m_lock;
    NSObject<OS_dispatch_queue> *m_blueQueue;
    NSMutableDictionary *m_services;
    NSMutableDictionary *m_centralDevices;
    NSMutableDictionary *m_serviceCharacteristicsDic;
    NSMutableArray *m_notifyQueue;
    NSMutableDictionary *m_connectedDevices;
}

@property (weak, nonatomic) id<WABlePeripheralAdapterLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithDelegate:(id)a0 lock:(id)a1 serverID:(id)a2;
- (void)dealloc;
- (long long)state;
- (int)addService:(id)a0 isPrimary:(BOOL)a1 withCharacteristics:(id)a2;
- (int)writeCharacteristics:(id)a0 value:(id)a1 forService:(id)a2;
- (id)readCharacteristics:(id)a0 service:(id)a1;
- (int)notifyCharacteristicChange:(id)a0 service:(id)a1;
- (void)startAdvertisingWithRequest:(id)a0;
- (void)stopAdvertising;
- (int)removeService:(id)a0;
- (void)respondToRequest:(id)a0;
- (void)onConnected:(id)a0;
- (void)onPowerOff;
- (void)peripheralManagerDidUpdateState:(id)a0;
- (void)peripheralManager:(id)a0 central:(id)a1 didSubscribeToCharacteristic:(id)a2;
- (void)peripheralManager:(id)a0 central:(id)a1 didUnsubscribeFromCharacteristic:(id)a2;
- (void)peripheralManagerDidStartAdvertising:(id)a0 error:(id)a1;
- (void)peripheralManager:(id)a0 didAddService:(id)a1 error:(id)a2;
- (void)peripheralManager:(id)a0 didReceiveReadRequest:(id)a1;
- (void)peripheralManager:(id)a0 didReceiveWriteRequests:(id)a1;
- (void)peripheralManagerIsReadyToUpdateSubscribers:(id)a0;
- (void).cxx_destruct;

@end
