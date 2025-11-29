@class TXStartSDKViewController, NSMutableArray, NSString;
@protocol XPlayVirtualControlsDelegate;

@interface CGTXStartVirtualLayout : CGObject <CGCloudPlayerStatusUpdateMessage, TXStartSDKDelegate, XPlayVirtualControlsProtocol>

@property (retain, nonatomic) TXStartSDKViewController *gamePageVC;
@property (retain, nonatomic) NSMutableArray *gamepadIds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ onException;
@property (weak, nonatomic) id<XPlayVirtualControlsDelegate> delegate;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

- (id)initWithItem:(id)a0 cloudPlayer:(id)a1;
- (void)item:(id)a0 cloudPlayer:(id)a1 statusDidUpdated:(unsigned long long)a2;
- (void)setupStartSDKWithContainer:(id)a0;
- (void)downloadImageWithImagePath:(id)a0 completion:(id /* block */)a1;
- (int)gamepadIndexWithIdStr:(id)a0;
- (void)changeVirtualControlsLayout:(long long)a0;
- (void)showKeyboard:(float)a0 y:(float)a1;
- (void)sendStartMouseMoveDelta:(double)a0 deltaY:(double)a1;
- (void)sendWheelEvent:(float)a0;
- (void)onChannelMessage:(id)a0;
- (void)openWebView:(id)a0 cookies:(id)a1;
- (void)requestImage:(id)a0 completed:(id /* block */)a1;
- (void)sendMouseKey:(int)a0 x:(int)a1 y:(int)a2 isPressed:(BOOL)a3;
- (void)sendStartChannelData:(int)a0 data:(id)a1 len:(int)a2;
- (void)sendStartGamepadAxis:(id)a0 keyCode:(int)a1 xValue:(float)a2 yValue:(float)a3;
- (void)sendStartGamepadButton:(id)a0 keyCode:(int)a1 isPressed:(BOOL)a2;
- (void)sendStartGamepadTriggerButton:(id)a0 keyCode:(int)a1 value:(float)a2;
- (void)sendStartKeyboardKey:(int)a0 keyCodeLocation:(int)a1 isPressed:(BOOL)a2;
- (void)sendStartMouseMove:(int)a0 y:(int)a1;
- (void)hideKeyboard;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })viewSize;
- (void)dealloc;

@end
