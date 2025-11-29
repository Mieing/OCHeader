@class IESSCMetalRenderParams, IESLiveKtvAtmosphereVideoFrameColorData, IESSoloKTVDraftColorsModel, IESSCMetalSimpleGradientCreator;

@interface IESSoloKTVGradientBackgroundRender : NSObject

@property (retain, nonatomic) IESSCMetalSimpleGradientCreator *gradientCreator;
@property (retain, nonatomic) IESSCMetalRenderParams *param;
@property (retain, nonatomic) IESLiveKtvAtmosphereVideoFrameColorData *color;
@property (retain, nonatomic) IESSoloKTVDraftColorsModel *colorModel;
@property (nonatomic) long long colorIndex;
@property (nonatomic) struct CGSize { double width; double height; } renderSize;

- (id)getImageTexture;
- (id)getColorNext;
- (id)getImageTextureWithColor:(id)a0;
- (id)getColorWithSecond:(double)a0;
- (id)getImageTextureWithSecond:(double)a0;
- (void).cxx_destruct;
- (id)init;

@end
