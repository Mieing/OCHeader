@class NSString;

@interface IESLiveJumpToLinkedRoomRouterAdapterImpl : IESLiveBaseAdapter <IESLiveJumpToLinkedRoomRouterAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enterAudienceRoomWithRootViewController:(id)a0 roomID:(id)a1 anchorID:(id)a2 secAnchorID:(id)a3 etraParams:(id)a4;

@end
