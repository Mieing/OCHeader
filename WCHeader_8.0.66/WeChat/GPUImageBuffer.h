@class NSMutableArray;

@interface GPUImageBuffer : GPUImageFilter {
    NSMutableArray *bufferedFramebuffers;
}

@property (nonatomic) unsigned long long bufferSize;

- (id)init;
- (void)dealloc;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1;
- (void)renderToTextureWithVertices:(const float *)a0 textureCoordinates:(const float *)a1;
- (void).cxx_destruct;

@end
