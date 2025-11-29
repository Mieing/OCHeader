@interface IESLiveShareApi : HTSLiveApi

- (void)fetchShareListWithCompletion:(id /* block */)a0;
- (id)fetchPosterInfoWithRoomID:(id)a0 posterID:(id)a1 completion:(id /* block */)a2;
- (void)fetchShareInfoByRoomID:(id)a0 anchorID:(id)a1 completion:(id /* block */)a2;

@end
