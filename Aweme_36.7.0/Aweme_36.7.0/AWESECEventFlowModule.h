@class NSString;

@interface AWESECEventFlowModule : NSObject <SECEventSubscriber>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)startFeedReady;
+ (void)startHybridPluginRegister;
+ (id)shared;

- (void)hmdSceneDidChange;
- (void)setupTrackerEventSource;
- (void)setupPageStateEventSource;
- (void)handleEvent:(id)a0;
- (id)subscriberId;

@end
