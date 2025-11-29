@class DUXButton, UILabel, NSString;

@interface AWEIMMessageTabEnterpriseModeSwitchTitleComponent : AWEIMComponentBase <AWEIMMessageTabNaviTitleViewProvider, AWEIMMessageTabNaviBarAction>

@property (retain, nonatomic) DUXButton *titleSwitchBtn;
@property (retain, nonatomic) UILabel *titleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (BOOL)canShowCurrentTitleView;
- (id)currentNavigationTitleView;
- (void)awe_themeDidChange;
- (id)__iconImage;
- (void)__didTapOnSwitchBtn;
- (void).cxx_destruct;

@end
