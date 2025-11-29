@interface IESIMConversationSettingImpl.ChatSettingsItemInfoCell : IESIMConversationSettingImpl.ChatSettingsItemBaseInfoCell {
    void /* unknown type, empty encoding */ subtitleHorizontalStackView;
    void /* unknown type, empty encoding */ subtitlePreView;
    void /* unknown type, empty encoding */ subtitleNextView;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ arrowView;
}

- (void)render:(id)a0;
- (void)bind:(id)a0;
- (void)addViewToSubtitleHorizontalStackView:(id)a0;
- (void)delegateWillChangeTo:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
