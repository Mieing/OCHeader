@interface WCFinderCoverDataHelper : NSObject

+ (id)buildOpenCoverVCParamsFromPostSession:(id)a0 style:(unsigned long long)a1;
+ (void)fillCropInfoToMediaInfoByCropRectModel:(id)a0 modeStyle:(int)a1 sourceType:(int)a2 coverImage:(id)a3 fullCoverImage:(id)a4 coverTimeStamp:(double)a5 targetSize:(struct CGSize { double x0; double x1; })a6 editTextWidgets:(id)a7 style:(unsigned long long)a8 toPostSession:(id)a9;
+ (id)getSavePathWithImage:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 chooseTime:(double)a2;

@end
