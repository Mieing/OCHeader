@class IESECPDPSlideViewReqContext;

@interface IESECPDPSlideNetworkHelper : NSObject

@property (retain, nonatomic) IESECPDPSlideViewReqContext *context;

- (id)initWithReqContext:(id)a0;
- (void)requestLiveRoomGoodsList:(id /* block */)a0;
- (void)requestLiveRoomGoodsListWithPromotion:(id)a0 productID:(id)a1 callback:(id /* block */)a2;
- (void)requestWithParams:(id)a0 callback:(id /* block */)a1;
- (id)requestBaseParams;
- (void).cxx_destruct;

@end
