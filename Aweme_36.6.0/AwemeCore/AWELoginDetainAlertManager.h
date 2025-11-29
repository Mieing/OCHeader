@class NSString, AWELoginDetainAlert, AWELoginStrategySceneModel;

@interface AWELoginDetainAlertManager : NSObject <AWEUserMessage, AWELoginGuideStrategyProtocol>

@property (retain, nonatomic) AWELoginStrategySceneModel *stayModel;
@property (retain, nonatomic) AWELoginDetainAlert *alert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWELiteUGLuckyModuleAdapterClass;
+ (id)sharedManager;

- (void)willStartLogin;
- (void)didFinishLogoutWithUid:(id)a0;
- (BOOL)canShow;
- (long long)methodType;
- (void)trackShow;
- (void)startNewPeriod;
- (id)oldStorageData;
- (void)recordLoginDetainAlertShow;
- (void)trackClickWithAction:(BOOL)a0;
- (id)frequencyTrackDictionary;
- (id)aAWELiteUGLuckyModuleAdapter;
- (void)showLoginDetainAlertWithCallBack:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (long long)sceneType;

@end
