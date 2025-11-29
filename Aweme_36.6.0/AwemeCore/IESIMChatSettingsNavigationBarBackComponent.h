@interface IESIMChatSettingsNavigationBarBackComponent : AWEIMComponentBase <IESIMChatSettingsNavigationBarItemProvider> {
    void /* unknown type, empty encoding */ backImageView;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (long long)naviBarPriority;
- (id)naviBarView;
- (long long)naviBarPosition;
- (struct CGSize { double x0; double x1; })naviBarViewIntrinsicContentSize;
- (void)componentDidMounted:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)leave;

@end
