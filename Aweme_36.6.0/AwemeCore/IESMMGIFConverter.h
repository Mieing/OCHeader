@interface IESMMGIFConverter : NSObject

+ (id)p_createGIFWithTimeArray:(id)a0 fromVideo:(id)a1 withConfig:(id)a2;
+ (id)p_filePropertiesWithLoopCount:(int)a0;
+ (struct CGImage { } *)p_resizeImageFromImage:(struct CGImage { } *)a0 withConfig:(id)a1;
+ (id)p_framePropertiesWithFrameDuration:(double)a0;
+ (void)customGIFfromURL:(id)a0 completion:(id /* block */)a1;

@end
