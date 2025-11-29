@class UIWindow, NSString, AWEPublishShareToastController, NSLock;

@interface AWEPublishShareToast : NSObject <AWEPublishShareToastProtocol>

@property (retain, nonatomic) AWEPublishShareToastController *controller;
@property (retain, nonatomic) UIWindow *overlayWindow;
@property (retain, nonatomic) NSLock *dismissLock;
@property (nonatomic) BOOL isDelayToShow;
@property (nonatomic) BOOL isDismissing;
@property (copy, nonatomic) id /* block */ showBlock;
@property (nonatomic) double toastHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (void)showAweme:(id)a0 withType:(unsigned long long)a1 platform:(long long)a2;
+ (void)showAweme:(id)a0 withType:(unsigned long long)a1 platform:(long long)a2 publishViewModel:(id)a3 showIMListOnly:(BOOL)a4 tapBlock:(id /* block */)a5;
+ (void)delayToShow;
+ (void)showAweme:(id)a0 withType:(unsigned long long)a1 platform:(long long)a2 publishViewModel:(id)a3 showIMListOnly:(BOOL)a4;
+ (void)showWithDuration:(double)a0;
+ (void)dismissWithDelay:(double)a0;
+ (void)cancelAutomaticDismiss;
+ (void)close;
+ (void)dismiss;
+ (id)sharedInstance;
+ (void)resume;

- (id)aAWEPadModuleAdapter;
- (void)_showWithDuration:(double)a0;
- (void)_close;
- (void).cxx_destruct;
- (id)init;
- (void)_dismiss;

@end
