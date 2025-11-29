@interface IESIMConversationSettingImpl.ChatSettingsItemSwitchCell : IESIMConversationSettingImpl.ChatSettingsItemBaseInfoCell {
    void /* unknown type, empty encoding */ switchContainerView;
    void /* unknown type, empty encoding */ switchView;
}

- (BOOL)accessibilityActivate;
- (void)render:(id)a0;
- (void)bind:(id)a0;
- (void)addViewToSubtitleHorizontalStackView:(id)a0;
- (BOOL)needHighlighted;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)switchValueChanged:(id)a0;

@end
