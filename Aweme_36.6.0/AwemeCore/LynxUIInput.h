@class NSString;

@interface LynxUIInput : LynxUIBaseInput <UITextFieldDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__lynx_prop_config__850;
+ (id)__lynx_ui_method_config__1121;

- (void)updateFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 border:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 margin:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3 withLayoutAnimation:(BOOL)a4;
- (void)propsDidUpdate;
- (void)setValue:(id)a0 withResult:(id /* block */)a1;
- (void)setShowSoftInputOnFocus:(BOOL)a0 requestReset:(BOOL)a1;
- (void)inputWillBeFilteredFrom:(id)a0 to:(id)a1;
- (BOOL)textFieldShouldReturn:(id)a0;
- (id)init;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)textFieldDidChangeSelection:(id)a0;
- (void)textFieldDidChange:(id)a0;
- (id)createView;
- (id)getText;

@end
