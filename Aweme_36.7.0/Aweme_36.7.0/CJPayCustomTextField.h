@class NSArray, NSString, NSCharacterSet;
@protocol CJPayCustomTextFieldDelegate;

@interface CJPayCustomTextField : UITextField <UITextFieldDelegate>

@property (nonatomic) long long separateCount;
@property (copy, nonatomic) NSArray *separateArray;
@property (nonatomic) long long limitCount;
@property (nonatomic) BOOL supportSeparate;
@property (retain, nonatomic) NSCharacterSet *supportCharacterSet;
@property (readonly, copy, nonatomic) NSString *userInputContent;
@property (weak, nonatomic) id<CJPayCustomTextFieldDelegate> textFieldDelegate;
@property (nonatomic) long long locationIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)changeStringWithOperateString:(id)a0 withOperateRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withOriginString:(id)a2;
- (BOOL)isNewStrSatisfyLimit:(id)a0;
- (long long)getSpaceDelta:(id)a0 newStr:(id)a1;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForPosition:(id)a0;
- (BOOL)resignFirstResponder;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clearButtonRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rightViewRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)textFieldDidEndEditing:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)textFieldShouldClear:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;

@end
