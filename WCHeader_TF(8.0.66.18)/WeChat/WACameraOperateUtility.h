@interface WACameraOperateUtility : NSObject

+ (struct CGSize { double x0; double x1; })getCaptureResolution:(int)a0;
+ (id)getCaptureSessionPreset:(int)a0;
+ (double)getFrameBufferMinLengthWithSizeStr:(id)a0;
+ (id)thumbForVideoWithPath:(id)a0;
+ (id)thumbForVideoWithPath:(id)a0 maxWidth:(double)a1 maxHeight:(double)a2;
+ (id)imageWithImage:(id)a0 scaledToSize:(struct CGSize { double x0; double x1; })a1;
+ (id)imageFromImage:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
