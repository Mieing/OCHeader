@interface IESLiveUpdateRoomInfoApi : HTSLiveApi

- (void)updateRoomInfoWithRoomID:(id)a0 coverURI:(id)a1 completion:(id /* block */)a2;
- (void)updateRoomInfoWithRoomID:(id)a0 commentAuth:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateRoomInfoWithRoomID:(id)a0 POIId:(id)a1 completion:(id /* block */)a2;
- (void)updateRoomFunctionStateWithRoomId:(id)a0 functionStateMap:(id)a1 completion:(id /* block */)a2;
- (void)updateRoomInfoWithRoomID:(id)a0 shareAuth:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateRoomInfoWithParams:(id)a0 completion:(id /* block */)a1;

@end
