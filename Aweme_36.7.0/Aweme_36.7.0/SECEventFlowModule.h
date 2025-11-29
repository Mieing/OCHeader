@class NSString;

@interface SECEventFlowModule : NSObject <SECRouteEventSubscriber>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)loadStrategiesWithData:(id)a0;
- (void)setupUploadConfig:(id)a0;
- (void)loadResourceWithAccessKey:(id)a0;
- (void)onAppDidEnterForeground:(id)a0;
- (void)onAppDidEnterBackground:(id)a0;
- (void)handleNativeRoute:(id)a0;
- (void)setupAppStateEventSource;
- (void)setupRouteEventSource;
- (void)setupHybridContainerEventSourceWithFeatureDetector:(id)a0;
- (void)handleEvent:(id)a0;
- (id)subscriberId;
- (void)startEngine;

@end
