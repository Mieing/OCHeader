@interface AWELiveSoloKTVShareApi : HTSLiveApi

- (void)handleWithResponse:(id)a0 error:(id)a1 event:(id)a2 requestTimestamp:(double)a3;
- (void)fetchShareIMCardBuilderWithCardType:(unsigned long long)a0 schemaUrl:(id)a1 cardParams:(id)a2 completion:(id /* block */)a3;

@end
