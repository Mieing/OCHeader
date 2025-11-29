@interface AWESearchTopBarLifeServiceController : AWESearchTopBarBaseController

- (BOOL)enableSearchBigMode;
- (void)topBarHostConfigNewSearchTheme:(unsigned long long)a0 currentModernFeedUITheme:(unsigned long long)a1 uiThemeStyle:(long long)a2;
- (BOOL)enableShowMagnifier;
- (void)setupCustomTopBarElements;
- (BOOL)enableUseTextField;
- (id)initWithContext:(id)a0;

@end
