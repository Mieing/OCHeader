@interface AWECloseFriendsTagView : AWEVideoTypeTagView

+ (BOOL)isValidColorHexString:(id)a0;

- (void)configWithLabelText:(id)a0 icon:(id)a1 textColor:(id)a2 bgColor:(id)a3 iconSize:(struct CGSize { double x0; double x1; })a4 labelTextFontSize:(double)a5 updateBlock:(id /* block */)a6;
- (void)configWithLabelText:(id)a0 icon:(id)a1 textColor:(id)a2 bgColor:(id)a3;
- (void)configWithLabelText:(id)a0 icon:(id)a1 textColor:(id)a2 bgColor:(id)a3 updateBlock:(id /* block */)a4;

@end
