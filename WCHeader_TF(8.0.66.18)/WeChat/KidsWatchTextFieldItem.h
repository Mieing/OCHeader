@class UITextField, NSString;

@interface KidsWatchTextFieldItem : NSObject <UITextFieldDelegate>

@property (retain, nonatomic) UITextField *textField;
@property (copy, nonatomic) id /* block */ textHandler;
@property (copy, nonatomic) id /* block */ textChangeHandler;
@property (nonatomic) unsigned int maxInputLength;
@property (nonatomic) BOOL useRawLength;
@property (weak, nonatomic) KidsWatchTextFieldItem *nextItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initTextField;
- (void)onTextFieldTextDidChanged:(id)a0;
- (void)onTextFieldDidEndOnExit:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void).cxx_destruct;

@end
