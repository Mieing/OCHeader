@class UIImageView, AWEIMComponentManager;

@interface AWEIMMessageTabNavBarResourceSlotComponent : AWEIMComponentBase <AWEIMComponentManagerDependency, AWEIMComponentContainer, AWEIMGrowthImpl.ResourceSlotComponentAction, AWEIMMessageTabNaviButtonProvider, IESIMUserServiceMessage> {
    void /* unknown type, empty encoding */ isFirstAppear;
    void /* unknown type, empty encoding */ $__lazy_storage_$_containerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageView;
    void /* unknown type, empty encoding */ currentAvailableProvider;
}

@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) AWEIMComponentManager *componentManager;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)didFinishLogoutWithUid:(id)a0;
- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)reloadSubview;
- (long long)buttonPosition;
- (BOOL)canShowInNaviBar;
- (id)customNaviButtonView;
- (double)secondButtonRightSpace;
- (void).cxx_destruct;
- (id)init;

@end
