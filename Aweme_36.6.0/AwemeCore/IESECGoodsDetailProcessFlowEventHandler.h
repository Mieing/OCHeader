@interface IESECGoodsDetailProcessFlowEventHandler : IESECGoodsDetailEventHandler

+ (id)eventComponentID;

- (void)handleEventWithEventID:(id)a0 trackParams:(id)a1 businessParams:(id)a2 completion:(id /* block */)a3;
- (void)clickAuctionProcessFlowTitleWithURL:(id)a0;
- (void)clickGroupbuyProcessFlowTitleWithURL:(id)a0;

@end
