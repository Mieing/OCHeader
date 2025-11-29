@class ACCVideoQualitySettingNSString, ACCVideoQualitySettingNSInteger, ACCVideoQualitySettingCGSize;

@interface ACCVideoQualityPrepareSourceSetting : ACCVideoQualityItemBaseSetting

@property (retain, nonatomic) ACCVideoQualitySettingCGSize *previewResolution;
@property (retain, nonatomic) ACCVideoQualitySettingCGSize *fileResolution;
@property (retain, nonatomic) ACCVideoQualitySettingNSString *fileBitrate;
@property (retain, nonatomic) ACCVideoQualitySettingNSInteger *fileFps;

+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;

@end
