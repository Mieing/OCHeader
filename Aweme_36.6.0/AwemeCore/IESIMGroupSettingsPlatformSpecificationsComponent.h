@interface IESIMGroupSettingsPlatformSpecificationsComponent : AWEIMComponentBase <IESIMChatSettingsItemProvider, IESIMChatSettingsNavigationBarItemProvider> {
    void /* unknown type, empty encoding */ showTrackFlag;
    void /* unknown type, empty encoding */ $__lazy_storage_$_position;
    void /* unknown type, empty encoding */ $__lazy_storage_$_itemViewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_itemImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_navigationBarItemImageView;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewDidLoad;
- (long long)naviBarPriority;
- (id)naviBarView;
- (long long)naviBarPosition;
- (struct CGSize { double x0; double x1; })naviBarViewIntrinsicContentSize;
- (void)componentDidMounted:(id)a0;
- (id)groupSettingsItemTypes;
- (BOOL)filterGroupSettingsItemWithItemModel:(id)a0;
- (id)groupSettingsItemViewModelForItemModel:(id)a0;
- (void)themeChanged;
- (void).cxx_destruct;
- (id)init;

@end
