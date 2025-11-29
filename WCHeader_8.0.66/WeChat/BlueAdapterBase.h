@class NSRecursiveLock, NSString, BlueDevicePool, NSObject;
@protocol OS_dispatch_queue, BlueAdapterDelegate;

@interface BlueAdapterBase : NSObject <BlueProfilePedometer> {
    NSObject<OS_dispatch_queue> *m_queue;
}

@property (weak, nonatomic) id<BlueAdapterDelegate> m_delegate;
@property (retain) BlueDevicePool *m_devices;
@property (retain) NSRecursiveLock *m_lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0 withQueue:(id)a1;
- (void)cleanUpAllDevices;
- (BOOL)scan;
- (BOOL)scanAll;
- (void)stopScan;
- (id)getDeviceProtocols:(long long)a0;
- (id)getDeviceName:(long long)a0;
- (id)getDeviceMac:(long long)a0;
- (long long)getDIDbySessionID:(long long)a0;
- (long long)createSession:(long long)a0;
- (int)connectSession:(long long)a0;
- (void)closeSession:(long long)a0;
- (int)readSession:(long long)a0 :(char *)a1 :(int)a2;
- (void)writeSession:(long long)a0 :(const char *)a1 :(int)a2;
- (void)onBlueToothPowerOff;
- (int)connectProfile:(long long)a0 ProfileType:(int)a1;
- (void)closeProfile:(long long)a0;
- (int)getProfileType:(long long)a0;
- (int)getProfileConnectState:(long long)a0;
- (int)readPedometerProfileCurPedometerInfo:(long long)a0;
- (int)readPedometerProfileTarget:(long long)a0;
- (int)writePedometerProfileTarget:(long long)a0 Step:(int)a1;
- (void).cxx_destruct;

@end
