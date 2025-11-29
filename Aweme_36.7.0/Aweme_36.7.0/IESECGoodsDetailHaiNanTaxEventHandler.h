@interface IESECGoodsDetailHaiNanTaxEventHandler : IESECGoodsDetailEventHandler

+ (id)eventComponentID;

- (void)handleEventWithEventID:(id)a0 trackParams:(id)a1 businessParams:(id)a2 completion:(id /* block */)a3;
- (void)reloadHaiNanTaxSection;
- (void)openHaiNanDeliveryDesc;

@end
