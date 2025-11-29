@class NSString, AWEMessageReachResponseDataManager, MMKV, NSMutableDictionary, AWEMessageReachFrequencyManager, AWEMessageReachRequestWaitingManager, AWEMessageReachTriggerRecorder, NSNumber;
@protocol AWEMessageReachInternalAbilityProtocol;

@interface AWEMessageReachDataManager : NSObject <AWEMessageReachDataAbilityProtocol>

@property (weak, nonatomic) id<AWEMessageReachInternalAbilityProtocol> config;
@property (retain, nonatomic) AWEMessageReachFrequencyManager *frequencyAbility;
@property (retain, nonatomic) AWEMessageReachResponseDataManager *responseDataAbility;
@property (retain, nonatomic) AWEMessageReachRequestWaitingManager *requestWaitingManager;
@property (readonly, nonatomic) MMKV *mmkv;
@property (retain, nonatomic) NSMutableDictionary *responseTimeMap;
@property (retain, nonatomic) NSMutableDictionary *sceneResponseTimeMap;
@property (nonatomic) long long globalLastResponseTime;
@property (nonatomic) BOOL isRequestOnAir;
@property (retain, nonatomic) AWEMessageReachTriggerRecorder *triggerRecorder;
@property (copy, nonatomic) NSString *isRequestOnAirFromSource;
@property (copy, nonatomic) NSNumber *coldLaunchRequestFailed;
@property (copy, nonatomic) NSNumber *coldLaunchSendBubble;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLogout;
- (void)handleInterruptProgressWithParamContext:(id)a0 reason:(id)a1;
- (id)commonComponentModelValidate:(id)a0;
- (void)messageReachColdLaunchLoadCacheComplete:(id)a0;
- (void)requestMessageReachDataWithTriggerEvent:(id)a0 paramModel:(id)a1 reqParamsCollectBlock:(id /* block */)a2;
- (void)requestMessageReachDataWithTriggerEvent:(id)a0 paramModel:(id)a1;
- (BOOL)requestMultiCheckEnable:(id)a0 originSource:(id)a1 paramModel:(id)a2;
- (BOOL)requestOnAirCheck:(id)a0 originSource:(id)a1 paramModel:(id)a2;
- (BOOL)verifyRequestFrequencyControlWithTriggerEvent:(id)a0 source:(id)a1;
- (id)getLastSendTimeParams:(id)a0;
- (id)getSceneSendTime;
- (id)getPitayaCommonParams;
- (void)handleDataWithResponse:(id)a0 error:(id)a1 paramContext:(id)a2;
- (void)addComponentParamsWithParamContext:(id)a0 completion:(id /* block */)a1;
- (void)analyzeResponseDataModel:(id)a0 paramContext:(id)a1;
- (void)handleDataModel:(id)a0 response:(id)a1 paramContext:(id)a2 trackParams:(id)a3;
- (void)preprocessWithDataModel:(id)a0 paramContext:(id)a1;
- (void)serverTrySendDelayRequestBubbleWithParamContext:(id)a0 dataModel:(id)a1;
- (void)updateServerGlobalResponseTime:(long long)a0;
- (void)addComponentListWithComponentTrackInfo:(id)a0 blockTackInfo:(id)a1 paramContext:(id)a2 sceneModel:(id)a3 blockCode:(long long)a4 blockDesc:(id)a5;
- (void)addComponentListWithComponentTrackInfo:(id)a0 blockTackInfo:(id)a1 paramContext:(id)a2 sceneModel:(id)a3 showResult:(long long)a4;
- (void)validateAndHandleSceneModel:(id)a0 paramContext:(id)a1 originData:(id)a2 complete:(id /* block */)a3;
- (void)preloadBubbleContentImageWithSceneModel:(id)a0;
- (void)executeSendDataWithChannelID:(id)a0 sceneModel:(id)a1 paramContext:(id)a2;
- (void)updateServerSourceResponseTime:(id)a0 source:(id)a1;
- (id)getChannelParamsWithParamContext:(id)a0;
- (id)getSideBarParamsWithParamContext:(id)a0;
- (id)getChannelParamWithParamContext:(id)a0 tapID:(id)a1 location:(id)a2 index:(long long)a3;
- (id)getComponentModelDict:(id)a0 showingState:(unsigned long long)a1;
- (id)getAllBizChannelParamsWithParamContext:(id)a0;
- (void)addChannelComponentPreCheckWithParamContext:(id)a0 componentParams:(id)a1 completion:(id /* block */)a2;
- (void)getPreCheckResultWithParamContext:(id)a0 plugin:(id)a1 completion:(id /* block */)a2;
- (BOOL)validateBadgeStyleComponent:(id)a0;
- (BOOL)validateBubbleStyleComponent:(id)a0;
- (void)sendSceneDataToChannelWithChannelID:(id)a0 sceneModel:(id)a1 paramContext:(id)a2;
- (void)loadCacheForColdLaunch:(id /* block */)a0;
- (long long)getServerGlobalResponseTime;
- (id)getServerSourceResponseTime:(id)a0;
- (void)requestMessageReachDataWithTriggerEvent:(id)a0;
- (BOOL)recordPitayaParam:(id)a0;
- (void)handleStageSceneModelShowFailedWithChannelID:(id)a0 sceneModel:(id)a1 paramContext:(id)a2;
- (BOOL)validateSceneModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
