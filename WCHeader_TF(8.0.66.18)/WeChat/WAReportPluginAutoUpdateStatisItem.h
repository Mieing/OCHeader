@class NSString;

@interface WAReportPluginAutoUpdateStatisItem : WAReportBaseItem

@property (retain, nonatomic) NSString *pluginAppid;
@property (nonatomic) long long pluginVersion;
@property (nonatomic) long long pluginState;
@property (retain, nonatomic) NSString *instanceId;
@property (nonatomic) long long updateScene;
@property (nonatomic) long long updateResult;

- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (void).cxx_destruct;

@end
