@class UIButton, UITextField, NSString;

@interface WXGRoamPackageNameChangeHalfView : MMPageSheetBaseView <UITextFieldDelegate>

@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) UIButton *completeBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setupDetailView;
- (void)onComplete;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void).cxx_destruct;

@end
