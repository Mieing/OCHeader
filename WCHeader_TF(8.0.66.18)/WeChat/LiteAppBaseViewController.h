@class NSString, UIViewController;
@protocol LiteAppParentViewControllerDelegate;

@interface LiteAppBaseViewController : WxaFlutterViewController <UIGestureRecognizerDelegate>

@property (nonatomic) BOOL acceptSmallKeyboardHeightEvent;
@property (nonatomic) BOOL keyboardShow;
@property (nonatomic) float fontScale;
@property (nonatomic) float lastBatteryLevel;
@property (nonatomic) long long lastOrientation;
@property (nonatomic) float lastVolume;
@property (weak, nonatomic) UIViewController<LiteAppParentViewControllerDelegate> *liteAppParentViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithImpeller:(BOOL)a0 engineId:(unsigned long long)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)dealloc;
- (void)preDealloc;
- (void)keyboardDidShow:(id)a0;
- (void)keyboardDidHideShow:(id)a0;
- (void)boldTextStatusChanged:(id)a0;
- (void)SystemFontSizeChanged:(id)a0;
- (void)orientationDidChange:(id)a0;
- (void)batteryLevelDidChange:(id)a0;
- (void)lowPowerModeDidChange:(id)a0;
- (void)onVolumeDidChangeBeforeIOS15:(id)a0;
- (void)onVolumeDidChangeAfterIOS15:(id)a0;
- (void)parseGlobalPkg:(id)a0 block:(id /* block */)a1;
- (BOOL)isDarkMode;
- (void).cxx_destruct;

@end
