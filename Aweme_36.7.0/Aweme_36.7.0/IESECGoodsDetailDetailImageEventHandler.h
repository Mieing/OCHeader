@interface IESECGoodsDetailDetailImageEventHandler : IESECGoodsDetailEventHandler

+ (id)eventComponentID;

- (void)handleEventWithEventID:(id)a0 trackParams:(id)a1 businessParams:(id)a2 completion:(id /* block */)a3;
- (void)p_presentImagePreviewViewControllerAtIndex:(long long)a0 tapHeader:(BOOL)a1 allSourceImages:(id)a2 scaleToFillWidth:(BOOL)a3 scrollToTop:(BOOL)a4;
- (void)tapImagePreview:(id)a0 business:(id)a1;

@end
