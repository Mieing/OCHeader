@class NSString;

@interface AWESECRouterEventFilter : NSObject <SECDataEventFilter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldHandleEvent:(id)a0;

@end
