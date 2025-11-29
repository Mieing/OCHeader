@class XImage;

@interface MMWeEffectFrame : NSObject

@property (nonatomic) long long inputFormat;
@property (nonatomic) struct opaqueCMSampleBuffer { } *sampleBuffer;
@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (nonatomic) int texture;
@property (nonatomic) struct CGSize { double width; double height; } textureSize;
@property (nonatomic) int maskTexture;
@property (nonatomic) BOOL mirror;
@property (nonatomic) long long renderRotation;
@property (nonatomic) BOOL isFront;
@property (retain, nonatomic) XImage *rgbaImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizeFrame;
@property (nonatomic) int faceTrackRet;
@property (nonatomic) struct CGSize { double width; double height; } faceTrackScaledSize;

- (void).cxx_destruct;

@end
