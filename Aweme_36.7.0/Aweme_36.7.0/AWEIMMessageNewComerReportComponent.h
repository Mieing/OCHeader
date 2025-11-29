@interface AWEIMMessageNewComerReportComponent : AWEIMFlexComponent

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_updateWelcomeUI;
- (void)p_updateWelcomeLabelUI;
- (void)p_didTapAvatar;
- (void)p_didTapWelcome;
- (void)p_setupVKO;
- (id)p_viewModel;

@end
