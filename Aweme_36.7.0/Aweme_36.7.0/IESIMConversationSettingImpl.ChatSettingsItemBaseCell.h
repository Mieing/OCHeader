@interface IESIMConversationSettingImpl.ChatSettingsItemBaseCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ lineView;
    void /* unknown type, empty encoding */ highLightView;
}

@property (nonatomic) BOOL highlighted;

+ (double)heightFor:(id)a0 width:(double)a1;

- (void)render:(id)a0;
- (BOOL)needHighlighted;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (BOOL)isHighlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
