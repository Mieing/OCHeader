@class NSString;

@interface IESGCPTrackingContextImpl : IESGCPContextNode <IESGCPTrackingContext>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 extra:(id)a1;
- (id)p_trackingParamsDictionary;
- (id)realTimeParamsDictionary;

@end
