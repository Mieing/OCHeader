@class AWEAlertCallbackWrapper, NSString, AWEAlertContext;

@interface AWEUserDetailLoginGuideAlertManager : NSObject <AWEUserMessage, AWELoginGuideStrategyProtocol, AWEMessageReachPopViewProtocol>

@property (copy, nonatomic) id /* block */ onClose;
@property (retain, nonatomic) AWEAlertContext *alertContext;
@property (retain, nonatomic) AWEAlertCallbackWrapper *callbackWrapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userDetailLoginGuideModel;
+ (id)sharedManager;

- (void)didFinishLogoutWithUid:(id)a0;
- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (BOOL)canShowWithContext:(id)a0;
- (void)showWithContext:(id)a0 callbackWrapper:(id)a1;
- (void)showWithCloseCallback:(id /* block */)a0;
- (long long)methodType;
- (id)mr_accessIDForEvent:(id)a0;
- (BOOL)mr_enableAccessControlForEvent:(id)a0;
- (BOOL)isShowFrequencySatisfied;
- (BOOL)shouldUseLoginStrategyFrequencyControl;
- (void)startNewPeriod;
- (id)loginStrategySceneModel;
- (id)oldStorageData;
- (BOOL)isShowFrequencySatisfiedByLoginStrategy;
- (void)trackPopViewWithModel:(id)a0;
- (void)loginWithForceHalfScreen;
- (void)recordAlertShow;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)prepareWithCompletion:(id /* block */)a0;
- (long long)sceneType;

@end
