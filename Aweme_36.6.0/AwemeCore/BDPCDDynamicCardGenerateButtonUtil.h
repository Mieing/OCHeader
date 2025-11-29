@interface BDPCDDynamicCardGenerateButtonUtil : NSObject

+ (id)buttonTitleColorDict;
+ (id)buttonBorderColorDict;
+ (id)buttonTitleFontWithButtonGroupType:(long long)a0;
+ (id)buttonWithButtonModel:(id)a0 defaultPadding:(double)a1;
+ (double)buttonWidthWithModel:(id)a0 defaultPadding:(double)a1;
+ (double)buttonHeightWithModel:(id)a0;
+ (id)buttonWithButtonType:(long long)a0 buttonText:(id)a1 disabled:(BOOL)a2 padding:(id)a3 buttonSize:(struct CGSize { double x0; double x1; })a4;
+ (id)buttonTitleColorDictDisable;
+ (id)buttonBorderColorDictDisable;
+ (id)primaryTitleColor;
+ (id)secondTitleColor;
+ (id)primaryTitleColorDisable;
+ (id)secondTitleColorDisable;
+ (id)defaultTitleColorDisable;
+ (id)defaultTitleColor;

@end
