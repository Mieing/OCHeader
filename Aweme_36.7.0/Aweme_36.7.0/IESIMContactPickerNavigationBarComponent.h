@class NSString;

@interface IESIMContactPickerNavigationBarComponent : AWEIMComponentBase <IESIMContactPickerNavigationBarService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)p_setupNaviBar;
- (id)p_viewController;
- (void)p_didBackButtonClick;
- (id)navigationBar;

@end
