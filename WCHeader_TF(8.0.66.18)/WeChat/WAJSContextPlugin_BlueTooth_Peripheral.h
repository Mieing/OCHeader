@class NSString, NSMutableDictionary, NSRecursiveLock;

@interface WAJSContextPlugin_BlueTooth_Peripheral : WAJSContextPluginBase <WABlePeripheralAdapterLogicDelegate> {
    BOOL m_hasInit;
    NSMutableDictionary *m_adapterDic;
    NSMutableDictionary *m_requestDic;
    NSMutableDictionary *m_characDataDic;
    NSRecursiveLock *m_lock;
    long long m_state;
}

@property (nonatomic) BOOL isAllowBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)openBluetoothLowEnergyLib;
- (void)closeBluetoothLowEnergyLib;
- (BOOL)getBluetoothAdapterAvailableState;
- (int)checkAbilityForInvokingBleAPI;
- (id)createPeripheralServer;
- (int)closePeripheralServer:(id)a0;
- (int)addBluetoothService:(id)a0 toAdapter:(id)a1 withCharacteristicsList:(id)a2;
- (int)removeBluetoothService:(id)a0 fromAdapter:(id)a1;
- (int)startAdvertising:(id)a0 deviceName:(id)a1 serviceUUIDs:(id)a2;
- (int)startBeaconAdvertising:(id)a0 UUID:(id)a1 identifier:(id)a2 major:(unsigned short)a3 minor:(unsigned short)a4 measuredPower:(id)a5;
- (int)stopAdvertising:(id)a0;
- (id)createCharacteristic:(id)a0 properties:(id)a1 value:(id)a2 permissions:(id)a3;
- (id)createDescriptor:(id)a0 value:(id)a1;
- (int)writeValueToCharacteristics:(id)a0 serviceID:(id)a1 characteristics:(id)a2 value:(id)a3 callBackId:(id)a4 needNotify:(BOOL)a5;
- (void)onBleStateChanged:(id)a0 serverID:(id)a1;
- (void)onReceiveWriteRequests:(id)a0 serverID:(id)a1;
- (void)onReceiveReadRequest:(id)a0 serverID:(id)a1;
- (void)didAddService:(id)a0 serverID:(id)a1 errMsg:(id)a2 errCode:(int)a3;
- (void)didStartAdvertising:(id)a0 errMsg:(id)a1;
- (void)onConnected:(id)a0 central:(id)a1;
- (void)onDisconnected:(id)a0 central:(id)a1;
- (void)onSubscribedToCharacteristic:(id)a0 central:(id)a1 serverID:(id)a2;
- (void)onUnsubscribedToCharacteristic:(id)a0 central:(id)a1 serverID:(id)a2;
- (id)generateCallbackId;
- (id)generateServerId;
- (void).cxx_destruct;

@end
