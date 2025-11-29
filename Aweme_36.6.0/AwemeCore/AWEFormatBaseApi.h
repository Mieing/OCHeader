@interface AWEFormatBaseApi : HTSLiveApi

- (void)post:(id)a0 callback:(id /* block */)a1;
- (void)get:(id)a0 callback:(id /* block */)a1;
- (void)postChunk:(id)a0 callback:(id /* block */)a1;
- (void)requestWithMethod:(unsigned long long)a0 request:(id)a1 callback:(id /* block */)a2;

@end
