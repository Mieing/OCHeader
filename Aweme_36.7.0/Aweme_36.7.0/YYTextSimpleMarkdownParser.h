@class UIColor, NSString, UIFont, NSRegularExpression, NSMutableArray, YYTextBorder;

@interface YYTextSimpleMarkdownParser : NSObject <YYTextParser> {
    UIFont *_font;
    NSMutableArray *_headerFonts;
    UIFont *_boldFont;
    UIFont *_italicFont;
    UIFont *_boldItalicFont;
    UIFont *_monospaceFont;
    YYTextBorder *_border;
    NSRegularExpression *_regexEscape;
    NSRegularExpression *_regexHeader;
    NSRegularExpression *_regexH1;
    NSRegularExpression *_regexH2;
    NSRegularExpression *_regexBreakline;
    NSRegularExpression *_regexEmphasis;
    NSRegularExpression *_regexStrong;
    NSRegularExpression *_regexStrongEmphasis;
    NSRegularExpression *_regexUnderline;
    NSRegularExpression *_regexStrikethrough;
    NSRegularExpression *_regexInlineCode;
    NSRegularExpression *_regexLink;
    NSRegularExpression *_regexLinkRefer;
    NSRegularExpression *_regexList;
    NSRegularExpression *_regexBlockQuote;
    NSRegularExpression *_regexCodeBlock;
    NSRegularExpression *_regexNotEmptyLine;
}

@property (nonatomic) double fontSize;
@property (nonatomic) double headerFontSize;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *controlTextColor;
@property (retain, nonatomic) UIColor *headerTextColor;
@property (retain, nonatomic) UIColor *inlineTextColor;
@property (retain, nonatomic) UIColor *codeTextColor;
@property (retain, nonatomic) UIColor *linkTextColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setColorWithBrightTheme;
- (unsigned long long)lenghOfBeginWhiteInString:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)lenghOfBeginChar:(unsigned short)a0 inString:(id)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (unsigned long long)lenghOfEndWhiteInString:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)parseText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)setColorWithDarkTheme;
- (void)_updateFonts;
- (void).cxx_destruct;
- (id)init;
- (void)initRegex;

@end
