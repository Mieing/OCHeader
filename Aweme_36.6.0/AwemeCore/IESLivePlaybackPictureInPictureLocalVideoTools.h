@interface IESLivePlaybackPictureInPictureLocalVideoTools : NSObject

+ (id)imageWithImage:(id)a0 scaledToSize:(struct CGSize { double x0; double x1; })a1;
+ (struct __CVBuffer { } *)pixelBufferFromCGImage:(struct CGImage { } *)a0;
+ (void)createEmptyVideoWithSize:(struct CGSize { double x0; double x1; })a0 atPath:(id)a1 completion:(id /* block */)a2;
+ (void)emptyVideoPathWithSize:(struct CGSize { double x0; double x1; })a0 resultBlock:(id /* block */)a1;

@end
