@interface AWELiveMgetRoomInfoApi : HTSLiveApi

- (void)checkUserOnline:(id)a0 completion:(id /* block */)a1;
- (void)fetchRoomInfo:(id)a0 completion:(id /* block */)a1;
- (void)trackCheckResultWithFeedModel:(id)a0 sceneId:(id)a1;

@end
