@class UIFont;

@interface MMTitleFontChangeableButton : UIButton

@property (retain, nonatomic) UIFont *normalFont;
@property (retain, nonatomic) UIFont *highlightedFont;
@property (retain, nonatomic) UIFont *selectedFont;
@property (retain, nonatomic) UIFont *disabledFont;

- (void)setTitleFont:(id)a0 forState:(unsigned long long)a1;
- (void)layoutSubviews;
- (void)setTitleFont:(id)a0;
- (void).cxx_destruct;

@end
