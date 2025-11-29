@protocol MTLTexture;

@interface IESSCYUVToRGBConversionParam : NSObject

@property (retain, nonatomic) id<MTLTexture> luminanceTexture;
@property (retain, nonatomic) id<MTLTexture> chrominanceTexture;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } colorConversionMatrix;

- (void).cxx_destruct;

@end
