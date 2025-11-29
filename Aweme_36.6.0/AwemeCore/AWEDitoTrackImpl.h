@class NSString;

@interface AWEDitoTrackImpl : NSObject <DitoTrackServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)ditoHasTriggeredTrackWithEventName:(id)a0 params:(id)a1;
- (void)ditoHmdTrackWithServiceName:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;

@end
