@interface AWEYAPFKMService : HTSService <AWEYAPFKMService>

- (void)startNFKProgressWithParams:(id)a0 nfcContext:(id)a1;
- (void)startPreBindCodeRequest:(id)a0;
- (void)prefetchFKMBatchCodeIfNeed;
- (id)init;

@end
