@interface WCFinderLiveAddProductToShopBagCGI : WCFinderLiveTransferCGI

- (id)initWithLiveTaskID:(id)a0 product:(id)a1 successBlock:(id /* block */)a2 failureBlock:(id /* block */)a3;
- (BOOL)shouldAutoProcessingToastWithError:(id)a0;

@end
