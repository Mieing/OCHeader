@interface AWEMerchandiseSortFilterHelper : NSObject

+ (double)heightForModel:(id)a0 containerWidth:(double)a1;
+ (struct { struct _NSRange { unsigned long long x0; unsigned long long x1; } x0; BOOL x1; double x2; struct { id x0; id x1; id x2; id x3; unsigned long long x4; } x3; })defaultCellViewConfig:(id)a0;
+ (double)heightForModel:(id)a0 config:(struct { struct _NSRange { unsigned long long x0; unsigned long long x1; } x0; BOOL x1; double x2; struct { id x0; id x1; id x2; id x3; unsigned long long x4; } x3; })a1;
+ (struct { struct _NSRange { unsigned long long x0; unsigned long long x1; } x0; BOOL x1; double x2; struct { id x0; id x1; id x2; id x3; unsigned long long x4; } x3; })placeholderCellViewConfig:(id)a0;
+ (double)calculateFilterInAllHeightWithModel:(id)a0 constraintWidth:(double)a1;
+ (double)contentOffsetWhenInitialState:(id)a0;
+ (BOOL)needCeilingWhenInitialState:(id)a0;

@end
