@class HMDTTMonitor;

@interface BDUGLocationHMDMonitor : NSObject

@property (retain, nonatomic) HMDTTMonitor *monitorManager;

+ (void)monitorLocationWithJsonToData:(BOOL)a0 status:(BOOL)a1 errCode:(id)a2 errMsg:(id)a3;
+ (void)monitorLocationLazyInitWithStart:(double)a0 isProtocol:(BOOL)a1 isEnableLazyInit:(BOOL)a2 isSuccess:(BOOL)a3;
+ (void)monitorLocationInitWithStart:(double)a0;
+ (void)monitorAuthStatus:(long long)a0 isChanged:(BOOL)a1;
+ (void)monitorAccuracyAuthorization:(long long)a0 isChanged:(BOOL)a1;
+ (void)monitorTemporaryFullAccuracyAuthorizationWithPurposeKey:(id)a0 errCode:(id)a1 errMsg:(id)a2 extra:(id)a3;
+ (void)monitorLocationServiceAsync;
+ (void)monitorLocationServiceIsSync:(BOOL)a0 fromString:(id)a1;
+ (void)monitorLocationServiceFetcherTimeOut;
+ (void)monitorLocationServiceFetcherWithDuration:(double)a0;
+ (void)monitorLocationServiceIsChanged:(BOOL)a0 isGroundSwitch:(BOOL)a1 beforeResult:(id)a2 nowResult:(id)a3;
+ (void)monitorLocationServiceNewImplementationIsFalse:(BOOL)a0 asyncResult:(BOOL)a1 syncResult:(BOOL)a2 syncCount:(unsigned long long)a3;
+ (void)monitorLocationAuthorizationStatusAsync;
+ (void)monitorLocationAuthorizationStatusIsSync:(BOOL)a0 fromString:(id)a1;
+ (void)monitorLocationAuthorizationStatusFetcherTimeOut;
+ (void)monitorLocationAuthorizationStatusFetcherWithDuration:(double)a0;
+ (void)monitorLocationAuthorizationStatusIsChanged:(BOOL)a0 beforeResult:(id)a1 nowResult:(id)a2;
+ (void)monitorLocationAuthorizationStatusNewImplementationIsFalse:(BOOL)a0 asyncStatus:(long long)a1 syncStatus:(long long)a2 syncCount:(unsigned long long)a3;
+ (void)_monitorLocationInterfaceWithEvent:(id)a0 otherCategory:(id)a1 start:(double)a2 status:(BOOL)a3 errCode:(id)a4 errMsg:(id)a5 extra:(id)a6;
+ (void)monitorLocationBasicInfoWithStart:(double)a0 reportStatus:(long long)a1 scene:(id)a2 status:(BOOL)a3 errCode:(id)a4 errMsg:(id)a5 extra:(id)a6;
+ (void)monitorLocationRestrictedInfoWithStart:(double)a0 scene:(id)a1 status:(BOOL)a2 errCode:(id)a3 errMsg:(id)a4 extra:(id)a5;
+ (void)monitorLocationSubmitV2WithStart:(double)a0 token:(id)a1 status:(BOOL)a2 errCode:(id)a3 errMsg:(id)a4 extra:(id)a5;
+ (void)monitorSingleBLESubmitV2WithStart:(double)a0 status:(BOOL)a1 errCode:(id)a2 errMsg:(id)a3 extra:(id)a4;
+ (void)monitorLocationGeoCodeWithStart:(double)a0 status:(BOOL)a1 errCode:(id)a2 errMsg:(id)a3 extra:(id)a4;
+ (void)monitorLocationGisWithStart:(double)a0 status:(BOOL)a1 errCode:(id)a2 errMsg:(id)a3 extra:(id)a4;
+ (void)monitorLocationNewGisWithStart:(double)a0 status:(BOOL)a1 errCode:(id)a2 errMsg:(id)a3 extra:(id)a4;
+ (void)monitorLocationTracerouteFetchConfigWithStart:(double)a0 status:(BOOL)a1 errCode:(id)a2 errMsg:(id)a3 extra:(id)a4;
+ (void)monitorLocationTracerouteUploadWithStart:(double)a0 status:(BOOL)a1 errCode:(id)a2 errMsg:(id)a3 extra:(id)a4;
+ (void)monitorLocationScanRefreshWithStart:(double)a0 status:(BOOL)a1 errCode:(id)a2 errMsg:(id)a3 extra:(id)a4;
+ (void)monitorLocationScanUploadWithStart:(double)a0 status:(BOOL)a1 errCode:(id)a2 errMsg:(id)a3 extra:(id)a4;
+ (void)_monitorColdLaunchToFirstLocationDoneDurationWithEndTimestamp:(double)a0 metric:(id)a1 category:(id)a2;
+ (void)monitorFrequentSingle:(id)a0 oldLocation:(id)a1;
+ (void)monitorBindSingle:(id)a0;
+ (void)monitorDesiredLocationWithStart:(double)a0 token:(id)a1 source:(long long)a2 isCache:(BOOL)a3 tailLocationExp:(id)a4 shouldUseCache:(BOOL)a5 isTimeout:(BOOL)a6 isSuccess:(BOOL)a7 errCode:(id)a8 errMsg:(id)a9 extra:(id)a10;
+ (void)monitorDesiredLocationDurationWithDuration:(double)a0 token:(id)a1 timeGap:(double)a2 locationAccuracy:(double)a3 accuracy:(long long)a4 locationCount:(long long)a5 error:(id)a6 locateApi:(id)a7 extra:(id)a8;
+ (void)monitorLastLocationWithDuration:(double)a0 locationDuration:(double)a1 resultDuration:(double)a2 token:(id)a3 timeGap:(double)a4 locationAccuracy:(double)a5 error:(id)a6;
+ (void)monitorFirstLocationWithStart:(double)a0 token:(id)a1 extra:(id)a2;
+ (void)monitorFirstSubmitWithStart:(double)a0 token:(id)a1 extra:(id)a2;
+ (void)monitorContinueLocationWithErrCode:(id)a0 errMsg:(id)a1 extra:(id)a2;
+ (void)monitorHeadingLocationWithErrCode:(id)a0 errMsg:(id)a1 extra:(id)a2;
+ (void)monitorFetchWifiDurationWithDuration:(double)a0 isNull:(BOOL)a1 token:(id)a2 isNewMethod:(BOOL)a3 error:(id)a4 extra:(id)a5;
+ (void)monitorIntelligentReportWithInterval:(double)a0 isLocal:(BOOL)a1;
+ (void)monitorLocationChangeWithLevel:(long long)a0;
+ (void)monitorContinueLocationTargetAutoReleaseWithUploadSource:(id)a0 extra:(id)a1;
+ (void)monitorPollingLocationWithType:(id)a0 extra:(id)a1;
+ (void)monitorLocationFrequentWithCode:(id)a0 msg:(id)a1 token:(id)a2 interval:(double)a3 cacheInterval:(double)a4 cacheAcc:(long long)a5 cacheAvailable:(double)a6 desiredAccuracy:(long long)a7;
+ (void)monitorParallelLocationWithrlConsume:(double)a0 rlGap:(double)a1 rlAcc:(double)a2 sulConsume:(double)a3 sulGap:(double)a4 sulAcc:(double)a5 gapDiff:(double)a6 accDiff:(double)a7 token:(id)a8 expName:(id)a9 isRLTimeout:(BOOL)a10 sulErrorCode:(id)a11 rlErrorCode:(id)a12 sulCancel:(BOOL)a13 replaceTag:(long long)a14;
+ (void)monitorContinueLocationStrategyUseAccuracy:(BOOL)a0 locStep:(long long)a1 duration:(double)a2 origin:(id)a3 exp:(id)a4 error:(id)a5 isTimeout:(BOOL)a6;
+ (void)monitorBPEACertNullWithMethodName:(id)a0;
+ (void)monitorBPEACheckWithMethodName:(id)a0 certValid:(BOOL)a1 certToken:(id)a2 elapsedTime:(long long)a3;
+ (void)monitorNotBPEAInterfaceWithMethodName:(id)a0;
+ (void)monitorBPEAParamsWithMethodName:(id)a0 certValid:(BOOL)a1 certToken:(id)a2 paramsIsNull:(BOOL)a3;
+ (void)monitorBeaconScanSuccess;
+ (void)monitorBeaconScanFailWithErrorCode:(long long)a0;
+ (void)monitorBeaconUuidIllegalityWithUuid:(id)a0;
+ (void)monitorLightLocationWithIsSuccess:(BOOL)a0 accuracy:(long long)a1 duration:(double)a2 endTimestamp:(double)a3 wifiDuration:(double)a4 wifiSuccess:(BOOL)a5 wifiEndTimestamp:(double)a6 lastLocationTimeInterval:(double)a7 invalidCoordinateDict:(id)a8 error:(id)a9;
+ (void)monitorLightLocationConsumeWithIsNull:(BOOL)a0 wifiIsNull:(BOOL)a1 status:(long long)a2 accuracy:(long long)a3 isAfterMonitorDoneCompletion:(BOOL)a4 timestamp:(double)a5 error:(id)a6;
+ (void)monitorLightLocationAddMonitorIsDone:(BOOL)a0 status:(long long)a1 timestamp:(double)a2 error:(id)a3;
+ (void)reportEvent:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
+ (id)_getCategoryCommonParams;
+ (void)reportEvent:(id)a0 category:(id)a1;
+ (void)monitorBPEAInitSettingsIsNullWithSettingsClassIsNull:(BOOL)a0;
+ (void)monitorSettingsIsNull:(BOOL)a0 from:(long long)a1 duration:(double)a2;
+ (void)reportEvent:(id)a0;
+ (id)currentMonitor;

- (void).cxx_destruct;
- (id)init;

@end
