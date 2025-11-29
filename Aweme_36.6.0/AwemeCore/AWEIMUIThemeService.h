@class NSString, AWEUITheme;

@interface AWEIMUIThemeService : AWEIMComponentBase <AWEIMUIThemeProtocol>

@property (retain) AWEUITheme *currentTheme;
@property (readonly, nonatomic) BOOL isLightTheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)p_onThemeChanged;
- (void).cxx_destruct;

@end
