@class UILabel, UIInputViewController;

@interface MMTagTextField : UITextField

@property (retain, nonatomic) UILabel *tipsLabel;
@property (nonatomic) double tipsLabelFontSize;
@property (nonatomic) double textEditMarginLeft;
@property (retain, nonatomic) UIInputViewController *inputAccessoryViewController;

- (void)internalInitTipsLabel;
- (void)setTipsLabelText:(id)a0;
- (void)setCustomTipsLabelHidden:(BOOL)a0;
- (void)setTagAttributeText:(id)a0;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })editingRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)customizeClearButtonColor;
- (id)findTextFieldActionButton;
- (id)recursiveFindTextFieldActionButton:(id)a0;
- (void)bringTipsLabelToFrontIfNeed;
- (id)selectedText;
- (void).cxx_destruct;

@end
