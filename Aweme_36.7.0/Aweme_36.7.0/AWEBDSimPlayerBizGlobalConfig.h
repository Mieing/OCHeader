@interface AWEBDSimPlayerBizGlobalConfig : BDSimPlayerGlobalConfig

- (id)appService;
- (BOOL)goldenHouseEnabled;
- (long long)goldenHouseDirectoryMaxSize;
- (BOOL)offlineCenterEnabled;
- (long long)offlineCenterCanUseMaxStorageGB;
- (BOOL)enablePortraitsInputStrCenter;
- (BOOL)enableExtremeCacheCleanup;
- (BOOL)enableModuleDasp;
- (BOOL)enablePortraitsInputStrCenterOpt;
- (BOOL)enableDashBitrateSelectFix;
- (BOOL)bitrateSelectionUseStrSpeedModule;
- (long long)offlineDirectoryMaxSize;
- (long long)feedPrecacheV2DirectoryMaxSize;
- (id)daspConfig;
- (BOOL)forbidAudioEffectTargetLoudness;
- (BOOL)forbidAudioEffect;
- (BOOL)asyncStartMDLEnable;
- (id)srStrategyAlgoConfig;
- (id)smartServicePreloadStrategy;
- (id)cdnTrackDelegate;
- (id)localServerCacheInfo;
- (id)init;
- (id)networkDelegate;

@end
