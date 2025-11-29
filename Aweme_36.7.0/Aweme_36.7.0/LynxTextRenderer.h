@class LynxLayoutSpec, NSArray, NSTextStorage, NSTextContainer, NSLayoutManager, NSAttributedString;

@interface LynxTextRenderer : NSObject {
    struct CGSize { double width; double height; } _calculatedSize;
    struct CGSize { double width; double height; } _textSize;
    double _offsetX;
    double _maxFontSize;
    NSLayoutManager *_layoutManager;
    NSTextStorage *_textStorage;
    NSTextContainer *_textContainer;
    struct CGSize { double width; double height; } _truncatedSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _textBoundingRect;
}

@property (readonly, nonatomic) NSAttributedString *attrStr;
@property (retain, nonatomic) NSAttributedString *truncationToken;
@property (readonly, nonatomic) LynxLayoutSpec *layoutSpec;
@property (readonly, nonatomic) NSLayoutManager *layoutManager;
@property (readonly, nonatomic) NSTextStorage *textStorage;
@property (readonly, nonatomic) NSArray *subSpan;
@property (retain, nonatomic) NSArray *attachments;
@property (nonatomic) double baseline;
@property (nonatomic) long long ellipsisCount;
@property (copy, nonatomic) id /* block */ layoutTruncationBlock;
@property (nonatomic) BOOL isGradientOpt;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 border:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (id)initWithAttributedString:(id)a0 layoutSpec:(id)a1;
- (void)ensureTextRenderLayout;
- (id)createTextContainerWithSize:(struct CGSize { double x0; double x1; })a0 spec:(id)a1;
- (void)workaroundEllipsisError;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })visibleGlyphRange;
- (void)genSubSpan;
- (double)layoutMaxWidth;
- (double)textContentOffsetX;
- (void)setOverflowOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)handleInlineTruncation;
- (void)handleAutoSize;
- (void)overrideTruncatedAttrIfNeed;
- (void)handleEllipsisDirectionAndNewline:(id)a0;
- (BOOL)isTextContentOverflow;
- (double)findSmallerFontSize:(double)a0;
- (void)ensureLayoutWithFontSize:(double)a0 textRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (double)findLargerFontSize:(double)a0;
- (BOOL)shouldAppendTruncatedToken;
- (void)updateTruncatedSize;
- (id)calculateLastLineGlyphWidth:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)ensureTextRenderLayoutAfterTruncated:(unsigned long long)a0;
- (BOOL)isTextOverflowAfterTruncated:(long long)a0;
- (void)drawTextRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 border:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (struct CGSize { double x0; double x1; })textsize;
- (void).cxx_destruct;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })size;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textBoundingRect;
- (long long)numberOfVisibleLines;

@end
