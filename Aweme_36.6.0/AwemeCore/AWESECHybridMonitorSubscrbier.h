@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AWESECHybridMonitorSubscrbier : NSObject <SECHybridEventSubscriber> {
    NSObject<OS_dispatch_queue> *_monitorQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handlePiperDiscoveryEvent:(id)a0;
- (void)handlePageEvent:(id)a0;
- (void)handlePiperEventUsingDataMapping:(id)a0;
- (void)handleAPIContextNotFoundEvent:(id)a0;
- (void)handlePluginPerfEvent:(id)a0;
- (void).cxx_destruct;
- (void)handleEvent:(id)a0;
- (void)_handleEvent:(id)a0;
- (id)init;
- (id)subscriberId;

@end
