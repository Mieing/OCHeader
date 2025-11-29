@class NSString, NSAttributedString;

@interface LineSpacingAdaptation : NSObject <NSLayoutManagerDelegate>

@property (nonatomic) double calculatedLineSpacing;
@property (nonatomic) BOOL adjustBaseLineOffsetForVerticalAlignCenter;
@property (nonatomic) double baseLineOffsetForVerticalAlignCenter;
@property (nonatomic) double halfLeading;
@property (nonatomic) double lineHeight;
@property (nonatomic) double maxLineAscender;
@property (nonatomic) double maxLineDescender;
@property (nonatomic) BOOL enableLayoutRefactor;
@property (nonatomic) long long textSingleLineVerticalAlign;
@property (retain, nonatomic) NSAttributedString *attributedString;
@property (nonatomic) double baseline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)getWordBreakStyleAtIndex:(unsigned long long)a0;
- (BOOL)isHighSurrogate:(unsigned short)a0;
- (int)surrogateToU32WithHigh:(unsigned short)a0 Low:(unsigned short)a1;
- (BOOL)isLowSurrogate:(unsigned short)a0;
- (BOOL)isCJKChar:(int)a0;
- (void)calcTextSingleLineVerticalAlignBaseline:(double)a0 baselineOffset:(inout double *)a1;
- (void).cxx_destruct;
- (BOOL)layoutManager:(id)a0 shouldSetLineFragmentRect:(inout struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 lineFragmentUsedRect:(inout struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 baselineOffset:(inout double *)a3 inTextContainer:(id)a4 forGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5;
- (double)layoutManager:(id)a0 lineSpacingAfterGlyphAtIndex:(unsigned long long)a1 withProposedLineFragmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)layoutManager:(id)a0 shouldBreakLineByWordBeforeCharacterAtIndex:(unsigned long long)a1;

@end
