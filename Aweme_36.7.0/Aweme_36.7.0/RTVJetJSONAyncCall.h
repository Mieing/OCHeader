@interface RTVJetJSONAyncCall : RTVJetWebAsyncCall

+ (id)rxInjectorCreateWithArgs:(id)a0 injector:(id)a1;

- (id)reuqestDataFromJsonObject:(id)a0;
- (id)jsonObjectFromResponseData:(id)a0;
- (id)sendWithWebSocket;
- (id)sendWithHttp;

@end
