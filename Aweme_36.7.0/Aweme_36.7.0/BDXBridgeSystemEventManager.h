@interface BDXBridgeSystemEventManager : NSObject

@property (nonatomic) long long lastOrientation;
@property (nonatomic) BOOL enableCustomOrientationChange;

+ (void)endNotifier;
+ (void)notifyOrientationChangeWithParams:(id)a0;
+ (void)enableCustomOrientationChange:(BOOL)a0;
+ (void)notifyLoginStatusChange:(BOOL)a0;
+ (void)notifySystemBack;
+ (void)startNotifier;
+ (id)sharedManager;

- (void)handleDidEnterBackground:(id)a0;
- (void)handleWillEnterForeground:(id)a0;
- (void)handleMemoryWarning:(id)a0;
- (void)screenCapturedDidChange:(id)a0;
- (void)handleKeyboardDidShowNotification:(id)a0;
- (void)handleKeyboardDidHideNotification:(id)a0;
- (void)handleKeyboardWillShowNotification:(id)a0;
- (void)handleKeyboardWillHideNotification:(id)a0;
- (void)handleKeyBoardWillChangeNotification:(id)a0;
- (void)handleKeyBoardDidChangeNotification:(id)a0;
- (void)p_notifyInterfaceOrientationChange:(id)a0;
- (void)onAudioRouteChange:(id)a0;
- (void)onScreenShot:(id)a0;
- (void)_notifiAppStatusChange:(BOOL)a0;
- (void)notifyKeyboardVisibilityChange:(BOOL)a0 height:(double)a1;
- (void)__notifyKeyBoardEvent:(unsigned long long)a0 notification:(id)a1;
- (id)__convertKeyBoardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)__eventNameWithKeyBoardEventType:(unsigned long long)a0;
- (void)publishHeadphoneChangeEventState:(id)a0 outputPort:(id)a1;
- (id)init;

@end
