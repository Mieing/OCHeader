@class NSString, NSDictionary, NSMutableDictionary, NSLock;

@interface AWEUGSceneDesktopChannelGuideStrategy : NSObject <AWEUGSceneDesktopChannelGuideStrategyProtocol>

@property (copy, nonatomic) NSDictionary *settingsConfig;
@property (copy, nonatomic) NSString *businessID;
@property (retain, nonatomic) NSMutableDictionary *evadeStrategyDict;
@property (retain, nonatomic) NSMutableDictionary *guideInfoDict;
@property (retain, nonatomic) NSMutableDictionary *cacheResponseDataModelDict;
@property (retain, nonatomic) NSMutableDictionary *cacheResponseModelDict;
@property (retain, nonatomic) NSLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)canShowDesktopChannelGuideWithModel:(id)a0 completion:(id /* block */)a1;
- (BOOL)canShowDesktopChannelGuideWithRequestModel:(id)a0;
- (void)preloadDesktopChannelGuideDataIfCanShowInXHourWithModel:(id)a0 completion:(id /* block */)a1;
- (void)requestGuideConfigWithModel:(id)a0 completion:(id /* block */)a1;
- (void)canShowDesktopChannelGuideWithRequestModel:(id)a0 completion:(id /* block */)a1;
- (void)injectEvadeStrategy:(id)a0;
- (void)showDesktopChannelGuideViewWithModel:(id)a0 needFrequencyControl:(BOOL)a1;
- (void)injectGuideInfoInstance:(id)a0;
- (void)p_registerMessageHandler;
- (id)initWithSceneType:(id)a0 businessID:(id)a1;
- (void)registerPitaya;
- (void)fetchGuideDataWithCompletion:(id /* block */)a0;
- (id)evadeStrategyKey:(id)a0;
- (id)transferRequestModelToPitayaModel:(id)a0;
- (void)shouldEvadeForOtherGuideEvadeWithPitayaMessage:(id)a0 completion:(id /* block */)a1;
- (void)fetchDataAndShowGuideActionWithModel:(id)a0;
- (void)preloadDesktopChannelGuideDataWithPitayaMessage:(id)a0 completion:(id /* block */)a1;
- (void)canShowDesktopChannelGuideInXHourWithPitayaMessage:(id)a0 completion:(id /* block */)a1;
- (void)showDesktopChannelGuideIfNeededWithPitayaModel:(id)a0 responseModel:(id)a1;
- (void)requestDesktopChannelGuideWithPitayaMessage:(id)a0;
- (void)shouldEvadeForGeneralRuleAndTopTabGuideWithPitayaMessage:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldEvadeForGeneralRule:(id)a0 error:(id *)a1;
- (id)buildParamsDataWithModel:(id)a0;
- (void)requestUnInstalledGuideConfigWithPitayaMessage:(id)a0 completion:(id /* block */)a1;
- (void)requestGuideStyleTypeWithPitayaMessage:(id)a0 completion:(id /* block */)a1;
- (void)requestGuideConfigModelWithPitayaMessage:(id)a0 completion:(id /* block */)a1;
- (void)checkWidgetInstallStatusWithSceneName:(id)a0 enterFrom:(id)a1 installName:(id)a2 completion:(id /* block */)a3;
- (void)checkWidgetInstallStatusWithInstallName:(id)a0 completion:(id /* block */)a1;
- (id)buildParamsWithModel:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
