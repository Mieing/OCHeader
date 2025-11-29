@class NSString;

@interface BDSimPlayerBizVideoSRConfig : NSObject <BDSimPlayerBizVideoSRConfiguring>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isTeenModeEnabled;
- (id)csrLutImage;
- (id)csrHDRLutImage;
- (double)csrLutValue;
- (BOOL)isABOpenCsrLut;
- (long long)cpuLevel;
- (BOOL)checkDownloadPeriodValid;
- (BOOL)disableSrFlexBvc2Limit;
- (BOOL)enableStrategyAlgoSuperResolution;
- (id)bmfFlexSRStrategyConfig;
- (id)bmfSharpStrategyConfig;
- (id)open1080SrFilterConfig;
- (id)open1080SrFilterConfigForAd;
- (BOOL)cancelPreloadUseMaxBitrate;
- (BOOL)cancelPreloadUseH265;
- (BOOL)enableDowngradeSRAvoid2k4k;
- (BOOL)adBMFSRAlogRithEnable;
- (long long)adBMFSRAlogRithType;
- (long long)adBMFProcessExtraParamterSharpeLevel;
- (BOOL)enableVIPQualitySr;
- (BOOL)enableVIPQualityDowngradeSr;
- (BOOL)isVipPortraitWithModel:(id)a0;
- (BOOL)enablePlayerAdsSrBatteryControl;
- (void)commerceLog:(id)a0;
- (BOOL)thermalMitigationSRisValid;
- (long long)getPlayerIntSRExtraMode;
- (BOOL)checkDownloadPeriodVaildAvoidPeak;
- (BOOL)reSuperResolutionNunki;
- (id)videoQualityMap;
- (long long)bMFProcessExtraParamterSharpeLevel;
- (void)setThermalSevereDegradeSrWithModel:(id)a0;
- (void)inputNunkiContextWithModel:(id)a0;
- (BOOL)enableSrAdaptiveScreenViewWithModel:(id)a0;
- (id)srTypeSwitchInfos;
- (void)setVideoModelSRTypeSwitchInfosWithModel:(id)a0 srInfo:(id)a1;
- (id)getVideoModelSRTypeSwitchInfosWithModel:(id)a0;

@end
