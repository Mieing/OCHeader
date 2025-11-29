@class NSString;

@interface IESIMViewControllerAssistantService : HTSService <IESIMViewControllerAssistantService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)awe_setStatusBarForceChangeStyle:(long long)a0;
- (BOOL)awe_resetToOriginalStatusBarStyle;
- (void)viewController:(id)a0 hideBottomSeparateLineView:(BOOL)a1;
- (void)viewController:(id)a0 setBottomSeparateLineViewAlpha:(double)a1;
- (void)viewController:(id)a0 setBottomSeparateLineViewBackgroundColor:(id)a1;
- (void)viewController:(id)a0 setMainTitle:(id)a1 subTitle:(id)a2;
- (void)viewController:(id)a0 setTitle:(id)a1;
- (id)viewController:(id)a0 addNaviBarButtonCustomView:(id)a1 forPosition:(unsigned long long)a2 target:(id)a3 action:(SEL)a4;
- (id)viewController:(id)a0 addNaviBarButtonForPosition:(unsigned long long)a1 image:(id)a2 target:(id)a3 action:(SEL)a4;
- (id)viewController:(id)a0 addNaviBarButtonForPosition:(unsigned long long)a1 title:(id)a2 titleColor:(id)a3 font:(id)a4 backgroundColor:(id)a5 cornerRadius:(double)a6 target:(id)a7 action:(SEL)a8;
- (void)hideHostNaviBarWithViewController:(id)a0;
- (id)createEmptyPageConfig;
- (unsigned long long)iesimViewControllerStateWithState:(unsigned long long)a0;
- (void)viewController:(id)a0 setEmptyPageState:(unsigned long long)a1;
- (unsigned long long)emptyPageStateWithviewController:(id)a0;
- (void)viewController:(id)a0 emptyPageViewAddGestureRecognizer:(id)a1;
- (void)reloadEmptyPageWithViewController:(id)a0;
- (id)emptyPageViewWithViewController:(id)a0;
- (id)preferredReadonlyPropertiesViewControllerWithPrefersStatusBarHidden:(BOOL)a0;
- (void)viewController:(id)a0 setShouldBypassPresentationHook:(BOOL)a1;
- (void)viewController:(id)a0 setStaytimeLabel:(id)a1;
- (void)viewController:(id)a0 setAweDisableFullscreenPopTransition:(BOOL)a1;
- (void)addCustomNaviBarWithViewController:(id)a0;
- (id)naviBarWithViewController:(id)a0;
- (id)viewController:(id)a0 addNaviBarButtonForPosition:(unsigned long long)a1 style:(unsigned long long)a2 target:(id)a3 action:(SEL)a4;
- (id)p_aweNaviBarButtonPresetStyleWithIESIMStyle:(unsigned long long)a0;
- (unsigned long long)p_aweNaviBarButtonPositionWithIESIMPosition:(unsigned long long)a0;
- (unsigned long long)p_iesimViewControllerStateWithAweState:(unsigned long long)a0;
- (unsigned long long)p_aweViewControllerStateWithIESIMState:(unsigned long long)a0;

@end
