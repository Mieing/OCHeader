@interface MMAssetUtil : NSObject

+ (double)getAssetViewMarginCurOri;
+ (double)getAssetViewMarginCurOriNew:(BOOL)a0;
+ (long long)getAssetColumnCurOri;
+ (long long)getAssetColumnCurOriNew:(BOOL)a0;
+ (double)getAssetViewLenWithWidth:(double)a0;
+ (double)getFileBrowserAssetViewLenWithWidth:(double)a0;
+ (double)getAssetViewPaddingMarginNew:(BOOL)a0;
+ (BOOL)isLongImage:(struct CGSize { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })getNormalImageSizeWithOriginImageSize:(struct CGSize { double x0; double x1; })a0 targetSize:(struct CGSize { double x0; double x1; })a1;
+ (id)compressSquareImage:(id)a0;
+ (id)getPrimaryColorForPreviewEditScene:(int)a0;
+ (id)getPrimaryColorForPickerScene:(int)a0;
+ (id)generateMergedImageFromImageList:(id)a0 forSize:(struct CGSize { double x0; double x1; })a1 rounded:(BOOL)a2;

@end
