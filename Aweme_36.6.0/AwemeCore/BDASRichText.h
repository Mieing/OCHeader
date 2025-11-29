@class UIFont, NSString, NSArray, BDASRichTextTruncationConfig, NSAttributedString, NSMutableAttributedString, BDASRichTextTruncatedResult, UIColor;
@protocol BDASTextParser, BDASTextParserResult;

@interface BDASRichText : NSObject {
    struct { unsigned char needsParseText : 1; unsigned char needsUpdateStorage : 1; unsigned char needsUpdateAttributes : 1; } _flags;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
}

@property (retain, nonatomic) BDASRichTextTruncationConfig *truncationConfig;
@property (retain, nonatomic) NSMutableAttributedString *textStorage;
@property (retain, nonatomic) NSMutableAttributedString *internalAttributedText;
@property (retain, nonatomic) id<BDASTextParser> textParser;
@property (retain, nonatomic) id<BDASTextParserResult> textParserResult;
@property (copy, nonatomic) NSString *resolveAttachmentAttributeName;
@property (retain, nonatomic) NSMutableAttributedString *resolvedAttributedString;
@property (copy, nonatomic) NSArray *resolvedActiveRanges;
@property (retain, nonatomic) BDASRichTextTruncationConfig *truncationConfig;
@property (retain, nonatomic) BDASRichTextTruncatedResult *cachedTruncatedResult;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *textShadowColor;
@property (nonatomic) double textShadowRadius;
@property (nonatomic) struct CGSize { double width; double height; } textShadowOffset;
@property (nonatomic) long long textAlignment;
@property (nonatomic) long long lineBreakMode;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) UIColor *activeRangeTextColor;
@property (copy, nonatomic) NSArray *userActiveRanges;

- (id)truncateToSize:(struct CGSize { double x0; double x1; })a0 lineLimited:(unsigned long long)a1 adjustedFont:(id)a2 config:(id)a3;
- (id)initWithText:(id)a0 textParser:(id)a1;
- (id)initWithAttributedText:(id)a0 textParser:(id)a1;
- (id)defaltTextColor;
- (void)updateTextStorage;
- (void)updateTextParserResultAttributes;
- (void)updateTextStorageIfNeeded;
- (void)parseTextIfNeeded;
- (void)updateAttributesIfNeeded;
- (id)resolvedResult;
- (void)rebuildIfNeeded;
- (id)truncateToSize:(struct CGSize { double x0; double x1; })a0 lineLimited:(unsigned long long)a1 config:(id)a2;
- (id)truncateToWidth:(double)a0 lineLimited:(unsigned long long)a1 config:(id)a2;
- (void)setNeedsRebuild;
- (id)controlCharacterSet;
- (void).cxx_destruct;
- (id)initWithText:(id)a0;
- (id)defaultFont;
- (void)dealloc;
- (id)initWithAttributedText:(id)a0;
- (id)plainText;
- (void)parseText;
- (void)commonInitialization;

@end
