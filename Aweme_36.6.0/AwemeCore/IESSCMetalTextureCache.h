@class IESSCMetalRenderingDevice, NSObject, IESSCPixelBufferYUVToRGBConversion;
@protocol IESSCMetalTextureCreator, OS_dispatch_semaphore;

@interface IESSCMetalTextureCache : NSObject

@property (retain, nonatomic) IESSCMetalRenderingDevice *renderingDevice;
@property (retain, nonatomic) IESSCPixelBufferYUVToRGBConversion *yuvToRGBConversion;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *dataUpdateSemaphore;
@property (retain, nonatomic) id<IESSCMetalTextureCreator> metalTextureCreator;

- (id)makeTextureWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)makeTextureWithPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)initWithRenderingDevice:(id)a0;
- (id)makeRGBTextureFromRGBPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)makeRGBTextureFromYUVPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)makeLuminanceTextureWithPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)makeChrominanceTextureWithPixelBuffer:(struct __CVBuffer { } *)a0;
- (void).cxx_destruct;
- (id)init;

@end
