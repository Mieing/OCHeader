@interface IESLiveIMByteLinkClientWrapper : IESLiveIMClientWrapper

- (void)channel:(id)a0 opened:(id)a1;
- (void)channel:(id)a0 closed:(id)a1;
- (void)channel:(id)a0 received:(id)a1;
- (void)setupHttpFetcherWithConfig:(id)a0;
- (void)setupWsFetcherWithConfig:(id)a0;
- (void)setupChannlWithConfig:(id)a0;

@end
