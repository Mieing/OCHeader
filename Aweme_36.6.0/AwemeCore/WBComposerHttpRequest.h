@interface WBComposerHttpRequest : WBHttpRequest

+ (id)requestWithURL:(id)a0 httpMethod:(id)a1 params:(id)a2 delegate:(id)a3 withTag:(id)a4;
+ (id)serializeURL:(id)a0 params:(id)a1 httpMethod:(id)a2;

- (id)initWithURL:(id)a0 httpMethod:(id)a1 params:(id)a2 delegate:(id)a3 withTag:(id)a4;
- (void)setHttpHeaderForRequest:(id)a0;
- (id)postBodyHasRawData:(BOOL *)a0;

@end
