@interface TXCPixelBufferPool : NSObject

@property (nonatomic) struct __CVPixelBufferPool { } *pool;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) unsigned long long format;
@property (nonatomic) BOOL metalCompatible;
@property (nonatomic) struct __CFString { } *yCbCrMatrixKey;

- (id)initWithVideoFormat:(unsigned long long)a0;
- (void)dealloc;
- (void)resetBufferPool;
- (struct __CVBuffer { } *)createPixelBuffer;
- (void)createBufferPool;
- (void)releaseBufferPool;
- (unsigned long long)formatForPool;

@end
