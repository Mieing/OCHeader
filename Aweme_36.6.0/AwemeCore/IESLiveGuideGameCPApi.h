@interface IESLiveGuideGameCPApi : HTSLiveApi

- (void)fetchTalentCenterEntranceStatus:(id /* block */)a0;
- (void)fetchPromotedGamesWithCompletion:(id /* block */)a0;
- (void)setPromoteStatusWithCompletion:(id /* block */)a0;
- (void)multiStopGamesPromotion:(id)a0 completion:(id /* block */)a1;
- (void)setBubbleShowedWithMessageId:(id)a0 completion:(id /* block */)a1;

@end
