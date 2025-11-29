@class NSString, NSDictionary, TAVSourceExportColorProperties, TAVSoftEncodingColorProperties;

@interface TAVSourceExportVideoConfiguration : NSObject

@property (retain, nonatomic) NSDictionary *inputSettings;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;
@property (nonatomic) unsigned long long averageBitRate;
@property (nonatomic) double frameRate;
@property (retain, nonatomic) NSString *videoProfileLevel;
@property (retain, nonatomic) TAVSourceExportColorProperties *colorProperties;
@property (retain, nonatomic) TAVSoftEncodingColorProperties *softEncColorProperties;
@property (nonatomic) int bitrateUp;
@property (nonatomic) int bitrateDown;
@property (nonatomic) BOOL useHDRToSDR;
@property (nonatomic) BOOL useSoftEncNewThreadsControl;
@property (nonatomic) int vcodec2Preset;
@property (nonatomic) float crf;
@property (nonatomic) int vbvBufferSize;
@property (nonatomic) int enhancementMode;
@property (copy, nonatomic) NSDictionary *videoOutputSetting;

- (id)init;
- (id)makeOutputSetting;
- (void).cxx_destruct;

@end
