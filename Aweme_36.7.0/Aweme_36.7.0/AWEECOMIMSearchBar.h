@class UIImageView, UITextField, NSString;

@interface AWEECOMIMSearchBar : UIView <UITextFieldDelegate>

@property (retain, nonatomic) UIImageView *lensImageView;
@property (retain, nonatomic) UITextField *textField;
@property (copy, nonatomic) id /* block */ searchResult;
@property (copy, nonatomic) id /* block */ beginSearch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (BOOL)textFieldShouldClear:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)setupUI;

@end
