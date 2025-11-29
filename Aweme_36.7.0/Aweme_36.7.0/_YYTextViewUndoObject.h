@class NSAttributedString;

@interface _YYTextViewUndoObject : NSObject

@property (retain, nonatomic) NSAttributedString *text;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectedRange;

+ (id)objectWithText:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

- (void).cxx_destruct;

@end
