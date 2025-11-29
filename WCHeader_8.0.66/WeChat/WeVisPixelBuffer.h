@interface WeVisPixelBuffer : NSObject

@property (copy, nonatomic) id /* block */ cleanupCallback;
@property (nonatomic) struct __CVBuffer { } *pixelBufferRef;

+ (id)bufferWithCVPixelBuffer:(struct __CVBuffer { } *)a0 cleanup:(id /* block */)a1;
+ (id)bufferFromPool:(struct __CVPixelBufferPool { } *)a0 maxBufferCount:(int)a1 cleanup:(id /* block */)a2;
+ (id)bufferWithNV12WidthY:(unsigned long long)a0 heightY:(unsigned long long)a1 cleanup:(id /* block */)a2;
+ (id)bufferWithBGRAWidth:(unsigned long long)a0 height:(unsigned long long)a1 cleanup:(id /* block */)a2;

- (void)dealloc;
- (id)cloneYUV;
- (void).cxx_destruct;

@end
