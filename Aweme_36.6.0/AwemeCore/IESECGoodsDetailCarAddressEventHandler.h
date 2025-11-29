@interface IESECGoodsDetailCarAddressEventHandler : IESECGoodsDetailEventHandler

+ (id)eventComponentID;

- (void)handleEventWithEventID:(id)a0 trackParams:(id)a1 businessParams:(id)a2 completion:(id /* block */)a3;
- (void)clickCarAddressWithURL:(id)a0 selectedShopID:(id)a1 extraParams:(id)a2;
- (void)showCarAddress:(id)a0;

@end
