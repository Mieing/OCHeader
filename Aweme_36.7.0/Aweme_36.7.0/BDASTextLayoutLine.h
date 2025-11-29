@interface BDASTextLayoutLine : NSObject

@property (nonatomic) struct __CTLine { } *lineRef;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } stringRange;
@property (nonatomic) double width;
@property (nonatomic) double trailingWhitespaceWidth;
@property (nonatomic) double ascent;
@property (nonatomic) double descent;
@property (nonatomic) double leading;
@property (nonatomic) struct CGPoint { double x; double y; } baselineOrigin;
@property (nonatomic, getter=isTruncated) BOOL truncated;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;

- (id)initWithOriginalLine:(struct __CTLine { } *)a0 truncatedLine:(struct __CTLine { } *)a1 baselineOrigin:(struct CGPoint { double x0; double x1; })a2;
- (void)updateBaselineOriginWithOriginalLineWidth:(double)a0 alignment:(long long)a1;
- (void)calculateMetricsWithOriginalLine:(struct __CTLine { } *)a0;
- (void)dealloc;

@end
