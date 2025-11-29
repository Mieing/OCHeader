@class TextStateIcon, MMUILabel, MMWebImageView;

@interface TextStatePublishEntryButton : MMUIButton

@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) MMUILabel *descriptionLabel;
@property (retain, nonatomic) TextStateIcon *exposeIcon;

- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)initCommonStyles;
- (void)changeForStandardStyle;
- (void)changeForIconStyle;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)mainColor;
- (struct CGSize { double x0; double x1; })iconSize;
- (double)buttonHeight;
- (void).cxx_destruct;

@end
