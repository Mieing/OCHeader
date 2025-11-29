@class NSString;

@interface IESLiveInnerFeedAggregateController : NSObject <IESLiveInnerFeedDataControlAction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)innerFeedWillDeleteItems:(id)a0;

@end
