@class SECHybridPiperMonitorSetting, SECHybridURLMonitorSetting, SECHybridUIContextSettings;

@interface SECHybridSettingsManager : NSObject

@property (retain, nonatomic) SECHybridURLMonitorSetting *urlMonitorSettings;
@property (retain, nonatomic) SECHybridUIContextSettings *uiContextSettings;
@property (retain, nonatomic) SECHybridPiperMonitorSetting *piperMonitorSettings;
@property unsigned long long pluginPerfSample;

+ (id)sharedManager;

- (void).cxx_destruct;

@end
