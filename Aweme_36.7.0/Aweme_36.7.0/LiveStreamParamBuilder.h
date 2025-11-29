@class NSNumber;

@interface LiveStreamParamBuilder : NSObject {
    int _width;
    int _height;
    int _fps;
    int _defaultBitrate;
    int _minBitrate;
    int _maxBitrate;
    int _audioBitrate;
    int _capAdaptWidth;
    int _capAdaptHeight;
    NSNumber *_enableSiti;
    int _sitiStrategyMode;
    double _bFrameBitrateRatio;
    NSNumber *_enableVideoDenoise;
    double _vDenoiseBpsRatioV1;
    double _ge1080pRatio;
    double _lt1080pRatio;
    NSNumber *_resolutionChangeFromABR;
}

- (BOOL)checkUpdateIntValue:(int)a0;
- (BOOL)checkUpdateBoolValue:(id)a0;
- (BOOL)checkUpdateFloatValue:(double)a0;
- (void)setCapAdaptSize:(struct CGSize { double x0; double x1; })a0;
- (void)enableSiti:(BOOL)a0;
- (void)updateSiti:(BOOL)a0 :(BOOL)a1;
- (void)enableVideoDenoise:(BOOL)a0;
- (void)setVideoDenoiseBitrateRatios:(double)a0 ge1080pRatio:(double)a1 lt1080pRatio:(double)a2;
- (void)setBFrameBitrateRatio:(double)a0;
- (void)setDefaultBitrate:(int)a0 minBitrate:(int)a1 maxBitrate:(int)a2;
- (void)setResolutionChangeFromABR:(BOOL)a0;
- (void)setAudioBitrate:(int)a0;
- (void).cxx_destruct;
- (id)build;
- (id)init;
- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (void)setFps:(int)a0;

@end
