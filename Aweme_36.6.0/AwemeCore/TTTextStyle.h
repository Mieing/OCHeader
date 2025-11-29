@interface TTTextStyle : NSObject

@property (nonatomic) void *style;

- (void *)GetRunStyle;
- (void)SetFontSz:(double)a0;
- (double)GetFontSz;
- (void)SetFontStyleType:(unsigned long long)a0;
- (unsigned long long)GetFontStyleType;
- (void)SetFontFamilyName:(id)a0;
- (id)GetFontFamilyName;
- (void)SetForegroundColor:(id)a0;
- (void)SetForegroundColorValue:(unsigned long long)a0;
- (void)SetBackgroudColor:(id)a0;
- (void)SetBackgroudColorValue:(unsigned long long)a0;
- (id)copyRunStyle;
- (void)SetBold;
- (BOOL)GetIsBold;
- (void)SetItalic;
- (BOOL)GetIsItalic;
- (void)SetUnderline;
- (BOOL)GetIsUnderline;
- (void)SetTextStyle:(BOOL)a0;
- (id)init;
- (void)dealloc;

@end
