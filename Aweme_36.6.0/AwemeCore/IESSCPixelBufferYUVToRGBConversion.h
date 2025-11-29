@class IESSCYUVToRGBConversion;

@interface IESSCPixelBufferYUVToRGBConversion : IESSCMetalFilter

@property (retain, nonatomic) IESSCYUVToRGBConversion *yuvVideoRangeToRGBConversion;
@property (retain, nonatomic) IESSCYUVToRGBConversion *yuvFullRangeToRGBConversion;
@property (nonatomic) struct __CVBuffer { } *pixelBuffer;

- (void)renderWithParams:(id)a0;
- (void).cxx_destruct;

@end
