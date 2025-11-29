@class NSString;

@interface IESIMInputThemeComponent : AWEIMComponentBase <IESIMInputThemeComponentInterface>

@property (nonatomic) long long currentInputViewUIStyle;
@property (nonatomic) BOOL hasBackgroundImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)iesim_themeReload:(id)a0;
- (void)p_setupThemeDynamicConfig;
- (BOOL)isBGDark;
- (void)refreshBackground:(BOOL)a0;

@end
