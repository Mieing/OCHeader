@interface IESLiveStarGraphApi : HTSLiveApi

- (void)getAnchorStarStatusWithAnchorId:(id)a0 completion:(id /* block */)a1;
- (void)setAnchorStarStatusWithAnchorId:(id)a0 status:(long long)a1 taskIds:(id)a2 completion:(id /* block */)a3;

@end
