@class ACCVideoQualitySettingNSString, ACCVideoQualitySettingNSInteger, ACCVideoQualitySettingCGSize;

@interface ACCVideoQualitySaveSetting : ACCVideoQualityItemBaseSetting

@property (retain, nonatomic) ACCVideoQualitySettingCGSize *fileResolution;
@property (retain, nonatomic) ACCVideoQualitySettingNSString *fileBitrate;
@property (retain, nonatomic) ACCVideoQualitySettingNSInteger *fileFps;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
