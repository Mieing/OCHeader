@class NSString, EAAccessoryManager, NSRunLoop;

@interface BlueEAAdapter : BlueAdapterBase <EAAccessoryDelegate, NSStreamDelegate> {
    EAAccessoryManager *m_eaAdapter;
    NSRunLoop *m_runLoop;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0 withQueue:(id)a1;
- (void)dealloc;
- (BOOL)scan;
- (BOOL)scanAll;
- (void)stopScan;
- (void)removeDevice:(id)a0;
- (id)getDeviceProtocols:(long long)a0;
- (id)getDeviceName:(long long)a0;
- (long long)createSession:(long long)a0;
- (int)connectSession:(long long)a0;
- (void)closeSession:(long long)a0;
- (int)readSession:(long long)a0 :(char *)a1 :(int)a2;
- (void)writeSession:(long long)a0 :(const char *)a1 :(int)a2;
- (void)deviceConnected:(id)a0;
- (void)deviceDisconnected:(id)a0;
- (BOOL)isWeChatDevice:(id)a0;
- (void)accessoryDidDisconnect:(id)a0;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (void).cxx_destruct;

@end
