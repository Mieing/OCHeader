@class UIImageView, NSString, UIView;

@interface AWEFeedNewDoubleColumnOuterSettingEntranceController : AWEDCFeedBaseController <AWEFeedHomepageLongPressEditViewControllerDelegate, AWEFeedNewDoubleColumnOuterSettingEntranceControllerProtocol>

@property (retain, nonatomic) UIView *settingContainerView;
@property (retain, nonatomic) UIView *settingDisplayedView;
@property (retain, nonatomic) UIImageView *settingIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)settingWidthHeight;
+ (double)settingIconHitAreaValue;
+ (double)settingIconBottomHitAreaValue;
+ (double)settingIconWidth;

- (void)containerViewDidDisappear:(BOOL)a0;
- (void)panel:(id)a0 didCloseWithCurrentSelectedItem:(id)a1;
- (void)panel:(id)a0 didSelectItem:(id)a1;
- (void)panel:(id)a0 selectItem:(id)a1 didChangeSwitch:(id)a2;
- (id)smallSwitchView;
- (double)awe_tabBarTopBoundY;
- (double)awe_shrinkTranslationX;
- (id)shrinkAndExpendAnimation;
- (void)settingClick;
- (void)hideSettingEntranceView:(BOOL)a0;
- (void).cxx_destruct;
- (void)setupUI;
- (void)containerViewDidLoad;

@end
