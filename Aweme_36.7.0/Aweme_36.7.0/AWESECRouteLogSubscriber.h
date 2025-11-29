@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AWESECRouteLogSubscriber : NSObject <SECRouteEventSubscriber> {
    NSObject<OS_dispatch_queue> *_logQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleTrafficEvent:(id)a0;
- (void)_handleWebSafetyEvent:(id)a0;
- (void)_handleInternalFinishTrafficEvent:(id)a0;
- (id)trafficContentWithTrace:(id)a0;
- (id)resultContentWithEvent:(id)a0;
- (id)metricsContentWithResult:(id)a0;
- (id)interruptDescription:(id)a0;
- (void).cxx_destruct;
- (void)handleEvent:(id)a0;
- (id)init;
- (id)subscriberId;

@end
