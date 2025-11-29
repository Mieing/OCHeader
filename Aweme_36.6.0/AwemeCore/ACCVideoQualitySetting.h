@class ACCVideoQualitySaveSetting, NSString, ACCVideoQualityPrepareSourceSetting, ACCVideoQualityRenderSetting, ACCVideoQualityCompileSetting;

@interface ACCVideoQualitySetting : NSObject

@property (copy, nonatomic) id /* block */ prepareSettingLazyBlock;
@property (copy, nonatomic) id /* block */ renderSettingLazyBlock;
@property (copy, nonatomic) id /* block */ compileSettingLazyBlock;
@property (copy, nonatomic) id /* block */ saveSettingLazyBlock;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) ACCVideoQualityPrepareSourceSetting *prepareSourceSetting;
@property (retain, nonatomic) ACCVideoQualityRenderSetting *renderSetting;
@property (retain, nonatomic) ACCVideoQualityCompileSetting *compileSetting;
@property (retain, nonatomic) ACCVideoQualitySaveSetting *saveSetting;

+ (id)modelCustomPropertyMapper;

- (id)initWithLazyGetterPrepare:(id /* block */)a0 renderSetting:(id /* block */)a1 compileSetting:(id /* block */)a2 saveSetting:(id /* block */)a3;
- (void).cxx_destruct;
- (id)description;

@end
