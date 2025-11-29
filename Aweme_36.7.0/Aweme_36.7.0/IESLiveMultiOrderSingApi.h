@interface IESLiveMultiOrderSingApi : HTSLiveApi

- (void)fetchPlayModeInfoWithRoomId:(id)a0 callback:(id /* block */)a1;
- (void)turnOnMultiOrderSingWithParams:(id)a0 completion:(id /* block */)a1;
- (void)fetchMicInfos:(id)a0 completion:(id /* block */)a1;
- (void)bindMVToItemWithVid:(id)a0 mvType:(int)a1 itemID:(id)a2 roomID:(id)a3 completion:(id /* block */)a4;
- (void)closeMVWithVid:(id)a0 itemID:(id)a1 roomID:(id)a2 source:(id)a3 completion:(id /* block */)a4;
- (void)getMVTabListWithRoomID:(id)a0 completion:(id /* block */)a1;
- (void)getMVListWithRoomID:(id)a0 itemID:(id)a1 tabID:(id)a2 completion:(id /* block */)a3;

@end
