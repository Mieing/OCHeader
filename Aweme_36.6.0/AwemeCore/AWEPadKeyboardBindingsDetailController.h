@interface AWEPadKeyboardBindingsDetailController : AWEAwemeNewDetailBaseController

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)viewDidLoadAfterTableviewSetup;
- (id)trackCommonParams;
- (id)splitController;
- (void)p_dismissSharePanel;
- (void)registerKeyboardBindings;
- (BOOL)shouldResponseKeyboardBindingKeys;
- (BOOL)scrollUp:(BOOL)a0;
- (void)trackKeyEvent:(id)a0 key:(id)a1 clickType:(id)a2;
- (void)gotoUserProfile;
- (BOOL)keyboardScrollUpCrashFixEnable;

@end
