@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SECRouterURLTracer : NSObject <SECRouteEventSubscriber> {
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setup;

- (void)handleRouter:(id)a0;
- (void).cxx_destruct;
- (void)handleEvent:(id)a0;
- (id)init;
- (id)subscriberId;

@end
