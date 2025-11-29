@interface IESIMChatSettingsNavigationBarTitleComponent : AWEIMComponentBase <IESIMChatSettingsNavigationBarItemProvider> {
    void /* unknown type, empty encoding */ titleLabel;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (long long)naviBarPriority;
- (id)naviBarView;
- (long long)naviBarPosition;
- (void)componentDidMounted:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
