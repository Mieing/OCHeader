@class HTSGLContext, NSMutableArray;

@interface VEFilterFrameExtractor : NSObject

@property (nonatomic) struct CGSize { double width; double height; } frameSize;
@property (retain, nonatomic) NSMutableArray *deferedDestroyDrivers;
@property (retain, nonatomic) HTSGLContext *context;
@property (retain, nonatomic) NSMutableArray *drivers;

- (void)processWithDriver:(id)a0 frameBuffer:(id)a1 atTime:(double)a2;
- (void)addExtractDriver:(id)a0;
- (void)extractImageFromFrameBuffer:(id)a0 atTime:(double)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
