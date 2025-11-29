@class UIColor, NSString;

@interface CJPayStyleCheckBox : CJPayButton

@property (retain, nonatomic) UIColor *cjStyleSelectedCheckBoxColor;
@property (copy, nonatomic) NSString *checkImgName;
@property (copy, nonatomic) NSString *noCheckImageName;
@property (retain, nonatomic) UIColor *selectedCheckBoxColor;

- (void)_UIAppearance_setSelectedCheckBoxColor:(id)a0;
- (void)updateWithCheckImgName:(id)a0 noCheckImgName:(id)a1;
- (void)p_applyDefaultAppearance;
- (void)p_updateStyle;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
