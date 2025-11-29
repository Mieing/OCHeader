@class HMDDoubleUploadSettings, NSArray, HMDConfigFetchSetting, HMDHermasUploadSetting, HMDALogAttributionSettings, HMDCommonAPISetting, HMDPerformanceUploadSetting, HMDCloudCommandSetting, HMDSafeModeConfig, HMDSelfMonitoringConfig;

@interface HMDGeneralAPISettings : HMDBaseConfig

@property (readonly, copy, nonatomic) NSArray *configFetchHosts;
@property (readonly, copy, nonatomic) NSArray *crashUploadHosts;
@property (readonly, copy, nonatomic) NSArray *exceptionUploadHosts;
@property (readonly, copy, nonatomic) NSArray *userExceptionUploadHosts;
@property (readonly, copy, nonatomic) NSArray *performanceUploadHosts;
@property (readonly, copy, nonatomic) NSArray *fileUploadHosts;
@property (retain, nonatomic) HMDConfigFetchSetting *fetchAPISetting;
@property (retain, nonatomic) HMDPerformanceUploadSetting *performanceAPISetting;
@property (retain, nonatomic) HMDCommonAPISetting *crashUploadSetting;
@property (retain, nonatomic) HMDCommonAPISetting *exceptionUploadSetting;
@property (retain, nonatomic) HMDCommonAPISetting *fileUploadSetting;
@property (retain, nonatomic) HMDCommonAPISetting *allAPISetting;
@property (retain, nonatomic) HMDCloudCommandSetting *cloudCommandSetting;
@property (retain, nonatomic) HMDDoubleUploadSettings *doubleUploadSetting;
@property (retain, nonatomic) HMDHermasUploadSetting *hermasUploadSetting;
@property (retain, nonatomic) HMDALogAttributionSettings *alogAttributionSettings;
@property (retain, nonatomic) HMDSafeModeConfig *safeModeSetting;
@property (retain, nonatomic) HMDSelfMonitoringConfig *selfMonitoringSetting;

+ (id)hmd_attributeMapDictionary;

- (id)p_uploadHosts:(id)a0;
- (void).cxx_destruct;

@end
