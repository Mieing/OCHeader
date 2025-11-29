@interface MetalProcessTool : NSObject

+ (id)CVPixelBufferTransMetalTextureForYUV420P:(struct __CVBuffer { } *)a0 videoCache:(struct __CVMetalTextureCache { } *)a1;
+ (id)NativePixelBufferTransMetalTextureForYUV420P:(void **)a0 lineSize:(int *)a1 width:(int)a2 height:(int)a3 softStrideOpt:(BOOL)a4;

@end
