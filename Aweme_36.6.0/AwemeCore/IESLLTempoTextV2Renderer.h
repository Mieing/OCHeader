@class NSArray, IESLLTempoTextV2RendererLayoutSpec, NSTextStorage, NSTextContainer, NSAttributedString, NSLayoutManager;

@interface IESLLTempoTextV2Renderer : NSObject {
    struct CGSize { double width; double height; } _calculatedSize;
    struct CGSize { double width; double height; } _textSize;
    double _offsetX;
    double _offsetY;
    NSLayoutManager *_layoutManager;
    NSTextStorage *_textStorage;
    NSTextContainer *_textContainer;
}

@property (readonly, nonatomic) NSAttributedString *attrStr;
@property (readonly, nonatomic) IESLLTempoTextV2RendererLayoutSpec *layoutSpec;
@property (readonly, nonatomic) NSLayoutManager *layoutManager;
@property (readonly, nonatomic) NSTextStorage *textStorage;
@property (readonly, nonatomic) NSArray *subSpan;
@property (nonatomic) double baseline;
@property (nonatomic) long long ellipsisCount;
@property (copy, nonatomic) id /* block */ layoutTruncationBlock;

- (id)createTextContainerWithSize:(struct CGSize { double x0; double x1; })a0 spec:(id)a1;
- (void)workaroundEllipsisError;
- (BOOL)layoutManagerIsTruncated:(id)a0;
- (void)handleEllipsisNewline:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })visibleGlyphRange;
- (id)initWithAttributedString:(id)a0 layoutSpec:(id)a1;
- (void)ensureTextRenderLayout;
- (void)genSubSpan;
- (double)layoutMaxWidth;
- (double)textContentOffsetX;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void).cxx_destruct;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })size;
- (struct CGSize { double x0; double x1; })containerSize;
- (struct CGSize { double x0; double x1; })textSize;
- (long long)numberOfVisibleLines;

@end
