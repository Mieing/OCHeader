@interface IESLiveInteractPluginRequestApi : HTSLiveApi

- (id)openAPIBaseURL;
- (void)startInteractPluginUseRoomService:(id)a0 interactItem:(id)a1 isDebugMode:(BOOL)a2 completion:(id /* block */)a3;
- (void)stopInteractPluginUseRoomService:(id)a0 interactItem:(id)a1 stopAll:(BOOL)a2 completion:(id /* block */)a3;
- (void)startSubscribeInteractionPluginIMMessage:(id)a0 room:(id)a1 interactItem:(id)a2 completion:(id /* block */)a3;
- (void)stopSubscribeInteractionPluginIMMessage:(id)a0 room:(id)a1 interactItem:(id)a2 completion:(id /* block */)a3;
- (void)getAnchorRoomLikeCountWithRoomService:(id)a0 interactItem:(id)a1 completion:(id /* block */)a2;
- (void)getAnchorRoomInteractGiftDataWithRoomService:(id)a0 interactItem:(id)a1 Completion:(id /* block */)a2;
- (void)callOpenLiveDataWithRoomService:(id)a0 interactItem:(id)a1 method:(id)a2 path:(id)a3 params:(id)a4 completion:(id /* block */)a5;
- (void)reportInteractPluginUseWithRoomService:(id)a0 interactItem:(id)a1;
- (void)stopAllInteractPluginWithRoom:(id)a0 interactTypeList:(id)a1 completion:(id /* block */)a2;
- (void)reportInteractScoreWithModel:(id)a0 completion:(id /* block */)a1;
- (void)reportInteractInstructionWithModel:(id)a0 completion:(id /* block */)a1;
- (id)liveAPIBaseURL;

@end
