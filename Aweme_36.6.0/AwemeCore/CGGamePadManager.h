@class NSString, NSMutableDictionary;

@interface CGGamePadManager : CGObject <XPlayGamePadProtocol>

@property (nonatomic) int lastButtonKey;
@property (retain, nonatomic) NSMutableDictionary *gamepads;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

- (id)initWithItem:(id)a0 cloudPlayer:(id)a1;
- (id)gamepadWithDeviceId:(int)a0;
- (void)sendGamePadKeyEvent:(int)a0 press:(BOOL)a1 keyCode:(long long)a2;
- (void)sendGamePadTriggerButton:(int)a0 keyCode:(long long)a1 value:(float)a2;
- (void)sendGamePadAxis:(int)a0 keyCode:(long long)a1 xValue:(float)a2 yValue:(float)a3;
- (void).cxx_destruct;

@end
