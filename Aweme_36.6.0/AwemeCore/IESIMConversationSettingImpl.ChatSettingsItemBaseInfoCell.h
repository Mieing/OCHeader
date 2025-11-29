@interface IESIMConversationSettingImpl.ChatSettingsItemBaseInfoCell : IESIMConversationSettingImpl.ChatSettingsItemBaseCell {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ contentHorizontalStackView;
    void /* unknown type, empty encoding */ contentVerticalStackView;
    void /* unknown type, empty encoding */ titleVerticalStackView;
    void /* unknown type, empty encoding */ titleHorizontalStackView;
    void /* unknown type, empty encoding */ subtitleHorizontalStackView;
    void /* unknown type, empty encoding */ subTegView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ titleSpacingView;
    void /* unknown type, empty encoding */ describeLabel;
    void /* unknown type, empty encoding */ describeBottomSpacingView;
    void /* unknown type, empty encoding */ titlePreView;
    void /* unknown type, empty encoding */ titleNextView;
    void /* unknown type, empty encoding */ contentLeadingView;
    void /* unknown type, empty encoding */ contentTrailingView;
    void /* unknown type, empty encoding */ lineStyle;
}

+ (double)heightFor:(id)a0 width:(double)a1;

- (void)render:(id)a0;
- (void)bind:(id)a0;
- (void)addViewToContentView:(id)a0;
- (void)addViewToContentHorizontalStackView:(id)a0;
- (void)addViewToContentVerticalStackView:(id)a0;
- (void)addViewToTitleVerticalStackView:(id)a0;
- (void)addViewToTitleHorizontalStackView:(id)a0;
- (void)addViewToSubtitleHorizontalStackView:(id)a0;
- (void)delegateWillChangeTo:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
