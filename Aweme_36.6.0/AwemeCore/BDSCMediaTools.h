@interface BDSCMediaTools : NSObject

+ (id)videoFile;
+ (struct __CVBuffer { } *)pixelBufferFromCGImage:(struct CGImage { } *)a0;
+ (void)createVideoWithSize:(struct CGSize { double x0; double x1; })a0 result:(id /* block */)a1;
+ (void)createVideoWithSize:(struct CGSize { double x0; double x1; })a0 name:(id)a1 result:(id /* block */)a2;
+ (id)videoFilePathWithName:(id)a0;
+ (void)createEmptyVideoWithSize:(struct CGSize { double x0; double x1; })a0 atPath:(id)a1 completion:(id /* block */)a2;
+ (id)videoDir;
+ (struct CGImage { } *)bc_cgImageWithSize:(struct CGSize { double x0; double x1; })a0;

@end
