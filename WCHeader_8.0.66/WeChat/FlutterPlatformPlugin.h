@class UITextField, FlutterEngine;

@interface FlutterPlatformPlugin : NSObject

@property (nonatomic) BOOL enableViewControllerBasedStatusBarAppearance;
@property (weak, nonatomic) FlutterEngine *engine;
@property (retain, nonatomic) UITextField *textField;

- (id)initWithEngine:(id)a0;
- (void)handleMethodCall:(id)a0 result:(id /* block */)a1;
- (void)showSystemContextMenu:(id)a0;
- (void)hideSystemContextMenu;
- (void)showShareViewController:(id)a0;
- (void)searchWeb:(id)a0;
- (void)playSystemSound:(id)a0;
- (void)vibrateHapticFeedback:(id)a0;
- (void)setSystemChromePreferredOrientations:(id)a0;
- (void)setSystemChromeApplicationSwitcherDescription:(id)a0;
- (void)setSystemChromeEnabledSystemUIOverlays:(id)a0;
- (void)setSystemChromeEnabledSystemUIMode:(id)a0;
- (void)restoreSystemChromeSystemUIOverlays;
- (void)setSystemChromeSystemUIOverlayStyle:(id)a0;
- (void)popSystemNavigator:(BOOL)a0;
- (id)getClipboardData:(id)a0;
- (void)setClipboardData:(id)a0;
- (id)clipboardHasStrings;
- (BOOL)isLiveTextInputAvailable;
- (void)showLookUpViewController:(id)a0;
- (void).cxx_destruct;

@end
