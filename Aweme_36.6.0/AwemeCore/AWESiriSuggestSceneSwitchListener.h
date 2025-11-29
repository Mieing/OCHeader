@class NSArray, NSString, AWEAwemeModel;

@interface AWESiriSuggestSceneSwitchListener : NSObject <AWEUGEventListenerDelegate, AWEUGUndertakeMessage, AWEUserMessage>

@property (copy, nonatomic) NSArray *eventList;
@property (nonatomic) long long count;
@property (retain, nonatomic) AWEAwemeModel *lastDonateModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEExternalRouterModuleServiceDOUYINAdaperClass;
+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)reportEvent:(id)a0 params:(id)a1;
- (void)sceneAppear:(id)a0;
- (void)donateIntentIfNeededWithTrigger:(unsigned long long)a0;
- (void)subscribeToEventReport;
- (void)sceneDidAppeared:(id)a0;
- (void)deleteIntentIfNeeded:(id)a0;
- (void)p_donateIntent:(id)a0 withTrigger:(unsigned long long)a1;
- (id)aAWEExternalRouterModuleServiceDOUYINAdaper;
- (void).cxx_destruct;
- (id)init;

@end
