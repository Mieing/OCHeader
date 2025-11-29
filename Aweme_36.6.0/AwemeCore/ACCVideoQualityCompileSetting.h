@class ACCVideoQualitySettingNSString, ACCVideoQualitySettingNSInteger, ACCVideoQualitySettingCGSize, ACCVideoQualitySettingBOOL;

@interface ACCVideoQualityCompileSetting : ACCVideoQualityItemBaseSetting

@property (retain, nonatomic) ACCVideoQualitySettingCGSize *fileResolution;
@property (retain, nonatomic) ACCVideoQualitySettingNSString *fileBitrate;
@property (retain, nonatomic) ACCVideoQualitySettingNSInteger *fileFps;
@property (retain, nonatomic) ACCVideoQualitySettingBOOL *forceReencode;
@property (retain, nonatomic) ACCVideoQualitySettingNSString *remuxBitrateLimit;
@property (retain, nonatomic) ACCVideoQualitySettingCGSize *remuxLimitSize;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
