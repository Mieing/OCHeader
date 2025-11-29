@interface IESLiveIMVenueMessageActionCreator : IESLiveIMBaseActionCreator

- (void)setupCommonConfigWithRoomID:(id)a0 scene:(id)a1 customParams:(id)a2;
- (void)setupCommonConfigWithRoomID:(id)a0 service:(id)a1 method:(id)a2 customParams:(id)a3;
- (void)setupVenueConfigWithService:(id)a0 method:(id)a1 roomID:(id)a2 customParams:(id)a3;
- (void)setupVenueConfigWithRoomID:(id)a0 scene:(id)a1 customParams:(id)a2;
- (id)getConfigWithRoomID:(id)a0 websocketUrl:(id)a1 httpUrl:(id)a2 customParams:(id)a3;
- (void)setupWithVenueMessageConfig:(id)a0;
- (id)getConfigWithRoomID:(id)a0 service:(id)a1 method:(id)a2 customParams:(id)a3;

@end
