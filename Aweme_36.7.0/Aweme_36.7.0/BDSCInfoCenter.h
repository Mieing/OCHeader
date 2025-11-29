@class BDSCSettingsOption, BDByteScreenCastByteSDKInfo, BDByteScreenCastAppInfo, BDSCSceneInfo, BDSCSceneFeatureConfig, NSDictionary, BDSCABTestInfo, BDSCPlayControlMediaInfoModel, BDSCUISettingsOption, BDSCFeatureSettingsOption, BDSCSceneUIConfig;

@interface BDSCInfoCenter : NSObject

@property (copy, nonatomic) NSDictionary *localSettings;
@property (retain, nonatomic) BDByteScreenCastAppInfo *appInfo;
@property (retain, nonatomic) BDSCSettingsOption *settingsOption;
@property (retain, nonatomic) BDByteScreenCastByteSDKInfo *sdkInfo;
@property (retain, nonatomic) BDSCSceneInfo *sceneInfo;
@property (retain, nonatomic) BDSCABTestInfo *abTestInfo;
@property (retain, nonatomic) BDSCPlayControlMediaInfoModel *mediaInfoSettingModel;
@property (readonly, nonatomic) BDSCFeatureSettingsOption *featureOption;
@property (readonly, nonatomic) BDSCSceneFeatureConfig *curSceneFeatureConfig;
@property (readonly, nonatomic) BDSCUISettingsOption *uiOption;
@property (readonly, nonatomic) BDSCSceneUIConfig *curSceneUIConfig;

+ (id)defaultCenter;

- (void).cxx_destruct;
- (id)init;

@end
