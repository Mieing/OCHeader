@class CBCentralManager, NSString, BlueAdapterBase, NSObject;
@protocol OS_dispatch_queue, BlueAdapterDelegate;

@interface BlueManager : MMRootService <MMServiceProtocol, CBCentralManagerDelegate, BlueAdapterDelegate> {
    NSObject<OS_dispatch_queue> *m_blueQueue;
    BlueAdapterBase *adapter[2];
}

@property (weak) NSObject<BlueAdapterDelegate> *delegate;
@property (retain) CBCentralManager *bleManager;
@property BOOL stateUpdateFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)getDIDbyMACString:(id)a0 AndConnProto:(id)a1;

- (void)cleanUpAllDevices;
- (void)onServiceInit;
- (void)dealloc;
- (int)getState;
- (void)centralManagerDidUpdateState:(id)a0;
- (BOOL)enable;
- (BOOL)scan;
- (BOOL)scanForWDevice;
- (BOOL)scanAll;
- (BOOL)scanEa;
- (BOOL)scanBle:(BOOL)a0;
- (void)stopScan;
- (id)getDeviceProtocols:(long long)a0;
- (long long)getDIDbySessionID:(long long)a0;
- (int)getDeviceType:(long long)a0;
- (id)getDeviceName:(long long)a0;
- (id)getDeviceMac:(long long)a0;
- (long long)createSession:(long long)a0;
- (int)connectSession:(long long)a0;
- (void)closeSession:(long long)a0;
- (int)readSession:(long long)a0 :(char *)a1 :(int)a2;
- (void)writeSession:(long long)a0 :(const char *)a1 :(int)a2;
- (int)connectProfile:(long long)a0 ProfileType:(int)a1;
- (void)closeProfile:(long long)a0;
- (int)getProfileType:(long long)a0;
- (int)getProfileConnectState:(long long)a0;
- (int)readPedometerProfileCurPedometerInfo:(long long)a0;
- (int)readPedometerProfileTarget:(long long)a0;
- (int)writePedometerProfileTarget:(long long)a0 Step:(int)a1;
- (void)onDeviceFound:(long long)a0;
- (void)onDeviceFound:(long long)a0 WithExtData:(id)a1;
- (void)onDeviceLost:(long long)a0;
- (void)onSessionConnected:(long long)a0;
- (void)onSessionConnectError:(long long)a0 errorCode:(int)a1;
- (void)onSessionWrote:(long long)a0;
- (void)onSessionError:(long long)a0 errorCode:(int)a1;
- (void)onSessionDataAvailable:(long long)a0;
- (void)onSessionClosed:(long long)a0;
- (void)onBlueProfileConnectStateChanged:(long long)a0 State:(int)a1 ErrorCode:(int)a2;
- (void)onBlueProfilePedometerInfoUpdated:(long long)a0 Info:(id)a1;
- (void)onBlueProfilePedometerTargetUpdated:(long long)a0 Step:(int)a1;
- (void)onBlueProfilePedometerTargetWrote:(long long)a0;
- (void).cxx_destruct;

@end
