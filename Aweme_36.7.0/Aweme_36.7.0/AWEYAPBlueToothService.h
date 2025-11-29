@class NSString;

@interface AWEYAPBlueToothService : HTSService <AWEYAPBlueToothService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)postWithData:(id)a0 fromScene:(long long)a1 asyncCallback:(id /* block */)a2;
- (long long)checkBLEAuthorizationStatus;
- (void)requestBlueToothAuthorize:(id /* block */)a0;
- (long long)getCurrentBluetoothSwitchStatus;
- (void)postWithData:(id)a0 fromScene:(long long)a1 duration:(unsigned long long)a2 asyncCallback:(id /* block */)a3;
- (void)stopAdvertising;

@end
