@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SECHybridURLTracer : NSObject <SECHybridEventSubscriber> {
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setup;

- (void)handlePiper:(id)a0;
- (void).cxx_destruct;
- (void)handleEvent:(id)a0;
- (id)init;
- (id)subscriberId;

@end
