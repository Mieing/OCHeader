@class NSDictionary, NSMutableDictionary, NSString;

@interface AWEUGUniformPushGuideManager : NSObject <AWEUGPushGuideLifeCycleProtocol>

@property (retain, nonatomic) NSMutableDictionary *pitayaGuideExecutors;
@property (retain, nonatomic) NSMutableDictionary *pitayaGuideExecutionStatus;
@property (retain, nonatomic) NSMutableDictionary *pitayaGuideFailCallbacks;
@property (retain, nonatomic) NSMutableDictionary *pitayaGuideExecutionBannedStatus;
@property (retain, nonatomic) NSMutableDictionary *pitayaMessage;
@property (retain, nonatomic) NSMutableDictionary *sceneCompletionHandlers;
@property (retain, nonatomic) NSMutableDictionary *sceneViewModels;
@property (retain, nonatomic) NSMutableDictionary *sceneLifeCycleDelegates;
@property (retain, nonatomic) NSDictionary *defaultIconName;
@property (retain, nonatomic) NSMutableDictionary *webCachePushGuideModelDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterStaticLoad;
+ (id)sharedInstance;

- (void)registerPitayaGuideScene:(id)a0 executor:(id)a1;
- (void)unRegisterPitayaGuideScene:(id)a0;
- (void)registerPitayaGuideSceneFail:(id)a0 callback:(id /* block */)a1;
- (unsigned long long)checkPitayaGuideExecutionStatus:(id)a0;
- (void)reportPitayaPushExecutionFail:(id)a0;
- (void)reportPitayaPushExecutionSuccess:(id)a0;
- (void)reportPitayaPushExecutionFinish:(id)a0;
- (void)temporarilyBanPitayaGuideScene:(id)a0;
- (void)requestShowPushGuideAlertOnScene:(id)a0 completion:(id /* block */)a1;
- (void)requestShowPushGuideAlertOnScene:(id)a0 pitayaParams:(id)a1 completion:(id /* block */)a2;
- (void)requestShowPushGuideAlertOnScene:(id)a0 viewStyle:(unsigned long long)a1 pitayaParams:(id)a2 completion:(id /* block */)a3;
- (BOOL)isPitayaReady;
- (void)requestPushGuideIntentiveRewardWithToken:(id)a0 group:(id)a1 taskId:(id)a2 completion:(id /* block */)a3;
- (void)jumpToSystemNotificationSettingsWithParam:(id)a0 completion:(id /* block */)a1;
- (void)requestShowPushGuideOnScene:(id)a0 pitayaParams:(id)a1 config:(id)a2 completion:(id /* block */)a3;
- (void)requestPushGuideModelOnScene:(id)a0 completion:(id /* block */)a1;
- (void)forceRequestPushGuideModelOnScene:(id)a0 completion:(id /* block */)a1;
- (void)forceRequestPushGuideShowOnScene:(id)a0 config:(id)a1;
- (void)forceRequestPushGuideShowOnScene:(id)a0 config:(id)a1 completion:(id /* block */)a2;
- (void)subscriptionGuideShowWithScene:(id)a0 config:(id)a1;
- (void)registerPushGuideByPitaya;
- (void)pushGuideShowFail:(id)a0;
- (void)pushGuideShowSuccess:(id)a0;
- (void)pushGuideDismiss:(id)a0;
- (void)pushGuideActionCancel:(id)a0;
- (void)pushGuideActionConfirm:(id)a0 selectionType:(id)a1;
- (void)pushGuideActionSettingsBack:(id)a0 isOpen:(BOOL)a1;
- (void)requestPushGuideCommonModelOnScene:(id)a0 pitayaParams:(id)a1 frequencyControl:(BOOL)a2 completion:(id /* block */)a3;
- (void)reportOutAppNotifyGuideWithParams:(id)a0;
- (void)showPushGuideWithReadyParams:(id)a0 scene:(id)a1 config:(id)a2;
- (void)p_onPitayaGuideShowFailed:(id)a0;
- (void)p_onPitayaGuideShowFinished:(id)a0;
- (void)p_trackPitayaPullWithMessage:(id)a0 pullStatus:(long long)a1;
- (void)p_requestPushGuideModelOnScene:(id)a0 frequencyControl:(BOOL)a1 completion:(id /* block */)a2;
- (id)p_paramsWithScene:(id)a0 frequencyControl:(BOOL)a1 pitayaParams:(id)a2;
- (id)clientFreqControlModel;
- (void)pushGuideShowFail:(id)a0 pullStatus:(long long)a1;
- (void)p_trackPitayaPullScene:(id)a0 pullStatus:(long long)a1;
- (void)requestPsortWithPitayaParams:(id)a0 scene:(id)a1 config:(id)a2;
- (void)requestPushSettingStatusWithScene:(id)a0 completion:(id /* block */)a1;
- (id)psortParamsWithScene:(id)a0 pitayaParams:(id)a1 config:(id)a2;
- (void)handleShowResponseModel:(id)a0 scene:(id)a1 config:(id)a2;
- (id)p_pushClickTrackerPayloadFromModel:(id)a0;
- (id)buildTriggerExtraFeatureParams:(id)a0;
- (void)reportPushGuideBuildFail:(id)a0 pullStatus:(long long)a1;
- (id)buildForceRequestParamsOnScene:(id)a0 config:(id)a1;
- (void)forceRequestPushGuideWithParams:(id)a0 scene:(id)a1 config:(id)a2;
- (void)forceRequestInnerPushCommonModelOnScene:(id)a0 completion:(id /* block */)a1;
- (id)defaultIconNameForSceneType:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
