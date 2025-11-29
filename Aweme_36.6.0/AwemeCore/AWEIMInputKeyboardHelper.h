@class NSString;

@interface AWEIMInputKeyboardHelper : NSObject <YYTextKeyboardObserver>

@property (nonatomic) BOOL autoAdjust;
@property (nonatomic) double customKeyboardHeightInternal;
@property (nonatomic) double systemKeyboardHeight;
@property (nonatomic) BOOL isShowing;
@property (readonly, nonatomic) double panelContainerHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)p_handleKeyboardShowNoti:(id)a0;
+ (void)p_handleKeyboardHideNoti:(id)a0;
+ (BOOL)adjustCardMessageToKeyboardWithDistance:(id)a0;
+ (void)hideInputKeyboard;
+ (void)p_startMonitor;
+ (double)p_lastHeight;
+ (id)p_currentMessageBaseViewController;
+ (void)p_saveHeight:(double)a0;
+ (double)proposedKeyboardHeight;
+ (double)keyboardHeight;
+ (id)defaultManager;
+ (void)startMonitor;

- (void)keyboardChangedWithTransition:(struct { BOOL x0; BOOL x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; double x4; long long x5; unsigned long long x6; })a0;
- (id)initNotification;
- (double)cacheCustomKeyboardHeight;
- (void)saveCustomKeyboardHeight;
- (BOOL)shouldReloadCustomKeyboard:(double)a0;
- (void)autoAdjustEmoticonKeyboardHeight:(BOOL)a0;

@end
