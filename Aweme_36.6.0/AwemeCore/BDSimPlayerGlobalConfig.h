@class NSString;

@interface BDSimPlayerGlobalConfig : NSObject <BDSimPlayerGlobalConfiguring>

@property (copy, nonatomic) id /* block */ onePlayEventCallBlock;
@property (copy, nonatomic) id /* block */ commonParamBlock;
@property (copy, nonatomic) id /* block */ playerCustomHeader;
@property (copy, nonatomic) id /* block */ playerContextBlock;
@property (copy, nonatomic) id /* block */ customPeakParamBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
- (void).cxx_destruct;
- (id)networkDelegate;

@end
