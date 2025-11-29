@class XImage;

@interface WeVisRenderFrame : NSObject

@property (nonatomic) long long format;
@property (nonatomic) struct opaqueCMSampleBuffer { } *sampleBuffer;
@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (nonatomic) int rgbaTexture;
@property (retain, nonatomic) XImage *rgbaImage;
@property (nonatomic) struct CGSize { double width; double height; } rgbaTexSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizeFrame;

- (void).cxx_destruct;

@end
