@class UIFont, MMUIButton;

@interface MJToolbarButton : MMUIButton

@property (retain, nonatomic) MMUIButton *buttonLabel;
@property (retain, nonatomic) MMUIButton *buttonIcon;
@property (nonatomic) double spacing;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (retain, nonatomic) UIFont *textFont;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)commonInit;
- (void)setSelected:(BOOL)a0;
- (void)configIconSize:(struct CGSize { double x0; double x1; })a0;
- (void)configSpacing:(double)a0;
- (void)configTextFont:(id)a0;
- (void)configTitle:(id)a0 forState:(unsigned long long)a1;
- (void)configImage:(id)a0 forState:(unsigned long long)a1;
- (void)_relayoutButtonLabel;
- (struct CGSize { double x0; double x1; })calcButtonSize;
- (double)calcButtonHeight;
- (double)calcButtonWidth;
- (void).cxx_destruct;

@end
