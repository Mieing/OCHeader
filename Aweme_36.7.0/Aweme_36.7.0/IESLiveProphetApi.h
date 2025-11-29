@interface IESLiveProphetApi : HTSLiveApi

- (void)fetchFuseTag:(long long)a0 isAnchor:(BOOL)a1 completion:(id /* block */)a2;
- (void)fetchFuseTag:(long long)a0 isAnchor:(BOOL)a1 enterFrom:(long long)a2 completion:(id /* block */)a3;

@end
