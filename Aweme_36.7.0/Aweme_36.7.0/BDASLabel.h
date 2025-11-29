@class BDASRichText, NSString, UIFont, UIColor, NSAttributedString;

@interface BDASLabel : BDASView {
    struct { unsigned char userSetTruncationString : 1; unsigned char userSetHighlightedTextColor : 1; } _flags;
    NSAttributedString *_truncationString;
}

@property (retain, nonatomic) BDASRichText *internalRichText;
@property (retain, nonatomic) BDASRichText *internalHighlightedRichText;
@property (retain, nonatomic) UIFont *adjustedFont;
@property (copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSString *originalText;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) struct CGSize { double x0; double x1; } shadowOffset;
@property (nonatomic) double shadowRadius;
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) long long textAlignment;
@property (nonatomic) long long lineBreakMode;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentEdgeInsets;
@property (nonatomic) unsigned long long contentVerticalAlignment;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) double preferredMaxLayoutWidth;
@property (copy, nonatomic) NSAttributedString *truncationString;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic) double minimumScaleFactor;
@property (nonatomic) BOOL fixRLOCharacter;
@property (retain, nonatomic) UIColor *highlightedTextColor;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;

- (struct CGSize { double x0; double x1; })layoutSizeConstrainedToSize:(struct CGSize { double x0; double x1; })a0;
- (id)drawParametersForAsyncLayer:(id)a0;
- (BOOL)hasValidContents;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withParameters:(id)a1 isCancelled:(id /* block */)a2;
- (id)defaultTruncationString;
- (id)currentRichText;
- (struct CGPoint { double x0; double x1; })textPositionForSize:(struct CGSize { double x0; double x1; })a0 contentBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 contentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 contentAlignment:(unsigned long long)a3;
- (void)didDisplayAsyncLayer:(id)a0 withParameters:(id)a1 isCancelled:(BOOL)a2;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
