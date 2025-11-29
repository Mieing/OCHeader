@class TXLivePixelBufferPool;
@protocol TXLivePixelBufferTransformFilter;

@interface TXLivePixelBufferTransform : NSObject

@property (retain, nonatomic) TXLivePixelBufferPool *pool;
@property (retain, nonatomic) id<TXLivePixelBufferTransformFilter> cropFilter;

- (BOOL)isSupportFormat:(unsigned int)a0;
- (struct __CVBuffer { } *)cropPixelBuffer:(struct __CVBuffer { } *)a0 expectedSize:(struct CGSize { double x0; double x1; })a1;
- (struct __CVBuffer { } *)doProcess:(struct __CVBuffer { } *)a0;
- (unsigned int)findSuitableFormat:(unsigned int)a0;
- (void).cxx_destruct;

@end
