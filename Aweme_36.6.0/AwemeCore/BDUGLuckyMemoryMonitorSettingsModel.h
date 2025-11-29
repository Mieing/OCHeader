@class NSArray;
@protocol BDUGLuckyMemoryMonitorSettingsEntryModel;

@interface BDUGLuckyMemoryMonitorSettingsModel : BDUGLuckyJSONModel

@property (nonatomic) BOOL memCollectEnable;
@property (nonatomic) BOOL memCollectEnableVcInitHook;
@property (nonatomic) BOOL memCollectEnableVcWillAppearHook;
@property (nonatomic) BOOL memCollectEnableVcDidDisappearHook;
@property (copy, nonatomic) NSArray<BDUGLuckyMemoryMonitorSettingsEntryModel> *memCollectStrategies;

- (void).cxx_destruct;

@end
