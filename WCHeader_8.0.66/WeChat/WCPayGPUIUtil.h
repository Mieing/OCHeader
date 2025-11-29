@interface WCPayGPUIUtil : NSObject

+ (id)genCellInputContentTipsLabel;
+ (id)genCellInputContentTextFieldWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textFieldDelegate:(id)a1 textFieldDidChangeTarget:(id)a2 didChangeCallbackSelector:(SEL)a3;
+ (id)genCellInputContentTextViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textViewDelegate:(id)a1;
+ (id)genDecimalPadKeyboardDoneBtnToolBarWithTarget:(id)a0 selector:(SEL)a1;
+ (id)genCellInputContentRichTextViewWithLinkDeleagte:(id)a0;
+ (id)genCenterContentLabel;
+ (void)setTextFieldDisplayValueShortestWithValue:(double)a0 textField:(id)a1;
+ (unsigned long long)getCorrectIntValueFromDouble:(double)a0;
+ (BOOL)isSelectInvalidContact:(id)a0;

@end
