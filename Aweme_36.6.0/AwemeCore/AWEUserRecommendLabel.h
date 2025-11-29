@interface AWEUserRecommendLabel : UILabel

@property (nonatomic) BOOL truncatesLastVisibleLine;
@property (nonatomic) double minimumLineHeight;
@property (nonatomic) double paragraphLineSpacing;
@property (nonatomic) double firstLineHeadIndent;
@property (nonatomic) double headIndent;
@property (nonatomic) double baselineOffset;
@property (nonatomic) long long baseWritingDirection;

- (void)alignToCenterVertically;
- (double)baselineOffsetToAlignCenterVertically;
- (void)p_applyPropertiesToText;
- (void)p_applyTextToProperties;
- (BOOL)p_canOverrideDrawing;
- (long long)p_drawingOptions;
- (BOOL)p_needsAdjustAttributedText;
- (double)p_limitedHeightWithMaxHeight:(double)a0;
- (id)p_adjustedAttributedText;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setText:(id)a0;
- (void)setAttributedText:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
