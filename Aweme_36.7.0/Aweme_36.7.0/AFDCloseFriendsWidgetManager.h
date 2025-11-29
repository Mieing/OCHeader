@class NSString;
@protocol AFDCloseFriendsWidgetFrequencyRuleProtocol;

@interface AFDCloseFriendsWidgetManager : NSObject <AFDCloseFriendsWidgetManagerProtocol>

@property (nonatomic) BOOL isWidgetInstalled;
@property (retain, nonatomic) id<AFDCloseFriendsWidgetFrequencyRuleProtocol> frequencyRule;
@property (nonatomic) BOOL onboardingPanelShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)widgetCreateGuideModelWithSourceFrom:(unsigned long long)a0;
+ (void)updateAddNewWidgetButton:(id)a0 redDotView:(id)a1;
+ (id)sharedInstance;

- (void)updateWidgetIfNeeded;
- (id)pipGuideVideoPath;
- (void)presentWidgetGuideAlertIfNeedWithParams:(id)a0 sourceFrom:(unsigned long long)a1 completion:(id /* block */)a2 dismissBlock:(id /* block */)a3;
- (BOOL)isInteractionsWidgetGuideEnableWithSourceFrom:(unsigned long long)a0 interactionType:(unsigned long long)a1;
- (void)interactionsTriggerToPresentCloseFriendsWidgetCreateGuideFromVC:(id)a0 param:(id)a1 completion:(id /* block */)a2;
- (void)presentCloseFriendsWidgetCreateGuideFromVC:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (id)resourcePathFromGecko;
- (id)resourcePathFromGeckoWithStep:(long long)a0;
- (void)refreshWidgetInstallationState;
- (void)interactionsTriggerToPresentCloseFriendsWidgetCreateGuideFromVC:(id)a0 param:(id)a1 sourceFrom:(unsigned long long)a2 interactionType:(unsigned long long)a3 completion:(id /* block */)a4;
- (unsigned long long)maxWidgetGuideAlertShowPeriod;
- (unsigned long long)maxWidgetGuideAlertCloseCount;
- (void)presentCloseFriendsWidgetCreateGuideFromVC:(id)a0 completion:(id /* block */)a1;
- (void)preloadPIPGuideResource;
- (void).cxx_destruct;
- (id)channel;
- (id)init;
- (void)appDidBecomeActive:(id)a0;

@end
