@class NSString;

@interface IESLiveTrackingEventParamsHelperAdapterImpl : IESLiveBaseAdapter <IESLiveTrackingEventParamsHelperAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackingLiveTypeWithLiveRoom:(id)a0;
- (id)trackingInteractTypeWithLiveRoom:(id)a0;

@end
