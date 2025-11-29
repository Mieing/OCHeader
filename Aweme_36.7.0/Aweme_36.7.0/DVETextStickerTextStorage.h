@class NSMutableAttributedString, UITextView;

@interface DVETextStickerTextStorage : NSTextStorage

@property (retain, nonatomic) NSMutableAttributedString *storage;
@property (weak, nonatomic) UITextView *textView;

- (void)clearUnderlineStyleFirst;
- (void).cxx_destruct;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)init;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (id)string;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;

@end
