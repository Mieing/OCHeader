@interface IESLiveRoomFinishApi : HTSLiveApi

- (void)fetchRoomInfo:(id)a0 anchorSecID:(id)a1 enterFrom:(id)a2 completion:(id /* block */)a3;
- (void)fetchGuide:(id)a0 anchorId:(id)a1 isFollow:(BOOL)a2 completion:(id /* block */)a3;
- (void)changeSubscribeState:(BOOL)a0 secAnchorId:(id)a1 completion:(id /* block */)a2;

@end
