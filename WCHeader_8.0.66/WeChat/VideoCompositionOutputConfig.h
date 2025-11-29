@class TAVSoftEncodingColorProperties, TAVSourceExportColorProperties, NSArray, NSDictionary, MAVExportOptionalParam, AVVideoCompositionCoreAnimationTool;

@interface VideoCompositionOutputConfig : NSObject

@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (nonatomic) long long videoBitrate;
@property (nonatomic) double fps;
@property (nonatomic) double iFrameInterval;
@property (nonatomic) long long audioBitrate;
@property (nonatomic) long long audioSampleRate;
@property (nonatomic) long long audioChannelCount;
@property (retain, nonatomic) TAVSourceExportColorProperties *colorProperties;
@property (retain, nonatomic) TAVSoftEncodingColorProperties *softEncColorProperties;
@property (retain, nonatomic) AVVideoCompositionCoreAnimationTool *animationTools;
@property (copy, nonatomic) NSArray *metadata;
@property (retain, nonatomic) NSDictionary *colorRange;
@property (retain, nonatomic) MAVExportOptionalParam *optionalParams;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
