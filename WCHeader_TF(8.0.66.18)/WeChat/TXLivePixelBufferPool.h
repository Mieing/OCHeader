@interface TXLivePixelBufferPool : NSObject

@property (nonatomic) struct __CVPixelBufferPool { } *pool;
@property (nonatomic) struct __CFString { } *yCbCrMatrixKey;
@property (nonatomic) struct __CFString { } *colorPrimaries;
@property (nonatomic) struct __CFString { } *transferFunction;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) unsigned int format;

- (id)initWithPixelFormat:(unsigned int)a0;
- (void)dealloc;
- (void)resetBufferPool;
- (struct __CVBuffer { } *)createPixelBuffer;
- (void)setColorInfo:(struct __CVBuffer { } *)a0;
- (struct __CVBuffer { } *)createPixelBufferFromPool:(struct __CVPixelBufferPool { } *)a0;
- (struct __CVBuffer { } *)createPixelBufferWithFormat:(unsigned int)a0 bufferSize:(struct CGSize { double x0; double x1; })a1;
- (void)createBufferPool;
- (struct __CVPixelBufferPool { } *)createPixelBufferPoolWithFormat:(unsigned int)a0 bufferSize:(struct CGSize { double x0; double x1; })a1 attribules:(id)a2;
- (void)releaseBufferPool;
- (unsigned int)formatForPool;

@end
