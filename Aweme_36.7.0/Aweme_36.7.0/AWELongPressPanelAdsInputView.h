@class DUXTextArea, UIView;

@interface AWELongPressPanelAdsInputView : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) BOOL inputIsShowing;
@property (weak, nonatomic) DUXTextArea *textInputView;
@property (weak, nonatomic) UIView *textInputSuperView;

- (void)configUI;
- (void)prepareShowWithTextInputView:(id)a0 textInputSuperView:(id)a1 originFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)updateTextForMaxLength;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)dealloc;
- (void)handleTap:(id)a0;

@end
