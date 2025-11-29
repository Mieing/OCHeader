@interface IESECGoodsDetailDetailTopInfoEventHandler : IESECGoodsDetailEventHandler

+ (id)eventComponentID;

- (void)handleEventWithEventID:(id)a0 trackParams:(id)a1 businessParams:(id)a2 completion:(id /* block */)a3;
- (void)openLinkPage:(id)a0 business:(id)a1;
- (void)openAuthImageList:(id)a0 business:(id)a1;
- (void)clickExpand:(id)a0 business:(id)a1;
- (void)clickPropertySKU;
- (void)clickGuaranteeTagCardWithBusiness:(id)a0;

@end
