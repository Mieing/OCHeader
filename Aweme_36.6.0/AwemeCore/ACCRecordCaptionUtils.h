@interface ACCRecordCaptionUtils : NSObject

+ (id)attrStringWithText:(id)a0 uiConfig:(id)a1 selected:(BOOL)a2;
+ (void)findSelectedIndexOfTime:(double)a0 captionCells:(id)a1 completion:(id /* block */)a2;
+ (BOOL)isCaptionSelectable:(id)a0;
+ (id)generateCaptionsWithOriginCaptions:(id)a0 startTimeMS:(double)a1 clipDurationMS:(double)a2;
+ (void)setupIndexForCaptions:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingRectForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 attrString:(id)a1 size:(struct CGSize { double x0; double x1; })a2;

@end
