@class WeVisPixelBuffer;

@interface WeVisProcessResult : NSObject

@property (retain) WeVisPixelBuffer *pixelBuffer;
@property int outputTexture;
@property int faceTrackRet;
@property double processCostTime;
@property double widthScaled;
@property double heightScaled;

+ (int)transferFaceTrackX3DRet:(int)a0;

- (void).cxx_destruct;

@end
