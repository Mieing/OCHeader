@class AWEScrollStringLabel, CAGradientLayer;

@interface AWEStickerPickerStickerPropNameCell : AWEStickerPickerStickerCell

@property (retain, nonatomic) AWEScrollStringLabel *propNameLabel;
@property (retain, nonatomic) CAGradientLayer *propNameGradientLayer;

- (void)updateUIConfig:(id)a0;
- (void)setStickerSelected:(BOOL)a0 animated:(BOOL)a1;
- (double)propNameFontSize;
- (id)propNameDefaultColor;
- (id)propNameDefaultFont;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setSticker:(id)a0;

@end
