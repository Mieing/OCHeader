@interface AWEFormatRouteComponent : AWEIMComponentBase <AWEFormatRouteInjectService>

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)openURL:(id)a0 aweType:(long long)a1 content:(id)a2 inGroupChat:(BOOL)a3;
- (void)componentDidMounted:(id)a0;
- (id)init;

@end
