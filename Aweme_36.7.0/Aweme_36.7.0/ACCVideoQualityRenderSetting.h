@class ACCVideoQualitySettingNSInteger, ACCVideoQualitySettingCGSize;

@interface ACCVideoQualityRenderSetting : ACCVideoQualityItemBaseSetting

@property (retain, nonatomic) ACCVideoQualitySettingCGSize *renderResolution;
@property (retain, nonatomic) ACCVideoQualitySettingNSInteger *renderFps;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
