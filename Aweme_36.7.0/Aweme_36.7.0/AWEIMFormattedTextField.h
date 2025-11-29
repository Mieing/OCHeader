@class AWEIMFormattedTextFieldDelegate, NSString, NSCharacterSet;

@interface AWEIMFormattedTextField : UITextField

@property (retain, nonatomic) AWEIMFormattedTextFieldDelegate *textFieldDelegate;
@property (copy, nonatomic) NSString *formatString;
@property (copy, nonatomic) NSCharacterSet *allowedCharacterSet;

+ (id)formattedStringWithFormat:(id)a0 inputString:(id)a1;
+ (void)selectTextForInput:(id)a0 atRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)originalStringWithFormat:(id)a0 inputString:(id)a1;
+ (id)trimmedStringForString:(id)a0 allowedCharacterSet:(id)a1;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })originalRangeWithFormat:(id)a0 formattedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })cursorRangeWithReplaceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 stringLength:(unsigned long long)a1;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })cursorRangeWithFormat:(id)a0 originCursorRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

- (id)originText;
- (void).cxx_destruct;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)delegate;
- (void)setDelegate:(id)a0;

@end
