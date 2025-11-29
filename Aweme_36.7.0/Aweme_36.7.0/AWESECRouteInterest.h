@class NSString;

@interface AWESECRouteInterest : NSObject <SECRouteEventSubscriber>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleNativeRoute:(id)a0;
- (void)handleWebTraceEvent:(id)a0;
- (void)handleEvent:(id)a0;
- (void)setup;
- (id)subscriberId;

@end
