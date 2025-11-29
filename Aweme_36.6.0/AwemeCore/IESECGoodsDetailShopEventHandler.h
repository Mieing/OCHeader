@interface IESECGoodsDetailShopEventHandler : IESECGoodsDetailEventHandler

+ (id)eventComponentID;

- (void)handleEventWithEventID:(id)a0 trackParams:(id)a1 businessParams:(id)a2 completion:(id /* block */)a3;
- (void)monitorEnterShopSuccessWithStart:(double)a0;
- (void)tapShopPage;

@end
