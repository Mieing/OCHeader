@class CBUUID, NSString, NSTimer, CBPeripheralManager;

@interface AWEPayBLEManager : NSObject <CBPeripheralManagerDelegate>

@property (retain, nonatomic) CBPeripheralManager *peripheralManager;
@property (retain, nonatomic) CBUUID *curUUID;
@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) unsigned long long duration;
@property (copy, nonatomic) id /* block */ authRequestCallback;
@property (nonatomic) long long currentState;
@property (nonatomic) BOOL needCallbackWhenUserChosen;
@property (nonatomic) BOOL isInAdvertiseProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)postWithData:(id)a0 fromScene:(long long)a1 asyncCallback:(id /* block */)a2;
+ (long long)checkBLEAuthorizationStatus;
+ (void)requestBlueToothAuthorize:(id /* block */)a0;
+ (long long)getCurrentBluetoothSwitchStatus;
+ (void)postWithData:(id)a0 fromScene:(long long)a1 duration:(unsigned long long)a2 asyncCallback:(id /* block */)a3;
+ (int)getCurAppIdentify;
+ (void)stopAdvertising;
+ (id)shared;

- (void)handleCallbackWithState:(long long)a0 isFromSettings:(BOOL)a1;
- (void)updateBluetoothStatus:(long long)a0;
- (void)handleUserChosenIfNeed:(long long)a0;
- (void)startBoardCastTask:(long long)a0;
- (void).cxx_destruct;
- (void)peripheralManagerDidUpdateState:(id)a0;
- (id)init;
- (void)didEnterForeground;
- (void)peripheralManagerDidStartAdvertising:(id)a0 error:(id)a1;

@end
