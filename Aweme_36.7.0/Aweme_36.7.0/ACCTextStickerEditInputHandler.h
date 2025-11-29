@class NSString;

@interface ACCTextStickerEditInputHandler : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } textViewChangeRange;
@property (copy, nonatomic) NSString *oldText;

- (long long)textCount:(id)a0;
- (void)updateTextWillChangeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inTextView:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })calculateChangeRange:(id)a0;
- (id)safeSubstring:(id)a0 maxLength:(long long)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })fixDeleteRangeForEmoji:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inTextView:(id)a1;
- (void).cxx_destruct;

@end
