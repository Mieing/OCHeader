@class NSString;

@interface IESLivePublicScreenAPIImpl : NSObject <IESLivePublicScreenAPI>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportRoomEventWithEventReportModel:(id)a0;
- (void)fetchNextLoadmoreMessagesWithRoomID:(id)a0 cursor:(id)a1 count:(id)a2 completion:(id /* block */)a3;
- (void)reportMessageFeaturedAreaStatus:(BOOL)a0 roomID:(id)a1;
- (void)fetchLightInteractionApi:(id)a0 completion:(id /* block */)a1;
- (void)requestMessageFeaturedAbilityWithRoomID:(id)a0 anchorID:(id)a1 customParams:(id)a2 completion:(id /* block */)a3;

@end
