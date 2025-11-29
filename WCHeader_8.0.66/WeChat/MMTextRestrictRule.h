@class NSString;
@protocol UITextFieldDelegate;

@interface MMTextRestrictRule : MMObject <UITextFieldDelegate>

@property (nonatomic) long long restrictType;
@property (nonatomic) unsigned long long maxLength;
@property (readonly, nonatomic) long long restricyType;
@property (weak, nonatomic) id<UITextFieldDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })markedTextRangeToNSRange:(id)a0;
+ (id)textRestrictRuleWithType:(long long)a0;

- (void)textDidChange:(id)a0;
- (id)restrictMaxLength:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (BOOL)textFieldShouldEndEditing:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textFieldShouldClear:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void).cxx_destruct;

@end
