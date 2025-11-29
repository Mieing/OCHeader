@interface IESLiveLGameDuringLiveApi : HTSLiveApi

- (void)fetchBroadcastThreshold:(id)a0 completion:(id /* block */)a1;
- (void)fetchStarAgreementSign:(id)a0 completion:(id /* block */)a1;
- (void)fetchStarAuthorRegister:(id)a0 completion:(id /* block */)a1;
- (void)fetchGameStartWithModel:(id)a0 params:(id)a1 retryCount:(long long)a2 duration:(double)a3 completion:(id /* block */)a4;
- (void)fetchGameStopWithModel:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)fetchWebcastConfigWithModel:(id)a0 completion:(id /* block */)a1;
- (void)fetchCardInfoWithModel:(id)a0 completion:(id /* block */)a1;
- (void)fetchCardStartConfigWithModel:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)fetchCardSetWithModel:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)fetchCardDeleteWithModel:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)fetchInstantPlayUpdateConfig:(id)a0 completion:(id /* block */)a1;
- (void)fetchInstantPlayUploadGameProcess:(id)a0 completion:(id /* block */)a1;

@end
