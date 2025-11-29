@interface IESLiveGuideUrgeGiftApi : HTSLiveApi

- (void)fetchGiftListWithParams:(id)a0 completion:(id /* block */)a1;
- (void)trackSendGiftSuccessWithParams:(id)a0;
- (void)sendGiftWithParams:(id)a0 completion:(id /* block */)a1;

@end
