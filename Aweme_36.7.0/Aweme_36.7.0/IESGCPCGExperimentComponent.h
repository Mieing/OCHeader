@class NSLock, NSMutableDictionary, NSString;

@interface IESGCPCGExperimentComponent : IESGCPCGInstanceBaseComponent <IESGCPCGExperimentRouter, IESGCPCGInstanceActions>

@property (retain, nonatomic) NSMutableDictionary *attemptExposureExperiments;
@property (retain, nonatomic) NSLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetGameCPDIContext;
- (void)playInstance:(id)a0 preloadResult:(BOOL)a1 info:(id)a2;
- (id)attemptExposureFullLinkExperimentValueForType:(unsigned long long)a0;
- (id)_whiteListWithExperimentType:(unsigned long long)a0;
- (id)_experimentConfigWithKey:(id)a0;
- (id)_clientEnv;
- (void)_doExposureIfNeeded;
- (id)_clientWhiteList;
- (id)_middlewareWhiteList;
- (id)_rtcPodWhiteList;
- (id)_whiteListMap;
- (void).cxx_destruct;
- (id)init;

@end
