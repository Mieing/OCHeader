@interface IESECGoodsDetailAuctionBidEventHandler : IESECGoodsDetailEventHandler

+ (id)eventComponentID;

- (void)clickAuctionBidWithAuctionID:(id)a0 extraParams:(id)a1;
- (void)handleEventWithEventID:(id)a0 trackParams:(id)a1 businessParams:(id)a2 completion:(id /* block */)a3;

@end
