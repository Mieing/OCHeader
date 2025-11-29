@class NSString, NSDictionary, UITextField, UIButton;
@protocol BDPTextFieldDelegate;

@interface BDPStyleTextField : UIView <UITextFieldDelegate> {
    NSString *_placeholder;
    NSDictionary *_placeholderAttributes;
    UIButton *_clearButton;
    UITextField *_contentTextField;
}

@property (readonly, copy, nonatomic) NSString *text;
@property (weak, nonatomic) id<BDPTextFieldDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 placeholder:(id)a1 attributes:(id)a2;
- (void)clearAction:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 placeholder:(id)a1;
- (void)_textDidChanged:(id)a0;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (void)textFieldDidEndEditing:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)setupUI;

@end
