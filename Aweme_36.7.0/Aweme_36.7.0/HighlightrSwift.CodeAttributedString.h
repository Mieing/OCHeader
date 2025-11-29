@class NSString;

@interface HighlightrSwift.CodeAttributedString : NSTextStorage {
    void /* unknown type, empty encoding */ stringStorage;
    void /* unknown type, empty encoding */ highlightr;
    void /* unknown type, empty encoding */ highlightDelegate;
    void /* unknown type, empty encoding */ language;
}

@property (nonatomic, readonly) NSString *string;

- (void).cxx_destruct;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)init;
- (id)initWithString:(id)a0;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithString:(id)a0 attributes:(id)a1;
- (id)initWithAttributedString:(id)a0;
- (void)processEditing;
- (id)attributesAtIndex:(long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)initWithData:(id)a0 options:(id)a1 documentAttributes:(id *)a2 error:(id *)a3;
- (id)initWithContentsOfMarkdownFileAtURL:(id)a0 options:(id)a1 baseURL:(id)a2 error:(id *)a3;
- (id)initWithMarkdown:(id)a0 options:(id)a1 baseURL:(id)a2 error:(id *)a3;
- (id)initWithMarkdownString:(id)a0 options:(id)a1 baseURL:(id)a2 error:(id *)a3;
- (id)initWithURL:(id)a0 options:(id)a1 documentAttributes:(id *)a2 error:(id *)a3;
- (id)initWithFileURL:(id)a0 options:(id)a1 documentAttributes:(id *)a2 error:(id *)a3;

@end
