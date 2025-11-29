@interface AWEAdRefinementStrategyAdapter : HTSService <AWEAdRefinementStrategyAdapter>

- (void)startResourceLoadStrategyWithParamDict:(id)a0 successHandler:(id /* block */)a1 failHandler:(id /* block */)a2 awemeModel:(id)a3;
- (void)startStrategyWithParamDict:(id)a0 successHandler:(id /* block */)a1 awemeModel:(id)a2;
- (id)init;

@end
