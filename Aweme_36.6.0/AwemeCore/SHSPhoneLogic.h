@class NSString;
@protocol UITextFieldDelegate;

@interface SHSPhoneLogic : NSObject <UITextFieldDelegate>

@property (weak, nonatomic) id<UITextFieldDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)pushCaretPosition:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (void)applyFormat:(id)a0 forText:(id)a1;
+ (void)popCaretPosition:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 caretPosition:(long long)a2;
+ (void)selectTextForInput:(id)a0 atRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (BOOL)logicTextField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
+ (void)setImageLeftView:(id)a0 image:(id)a1;
+ (void)updateLeftImageView:(id)a0 imagePath:(id)a1;

- (void).cxx_destruct;
- (BOOL)textFieldShouldEndEditing:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (BOOL)textFieldShouldClear:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;

@end
