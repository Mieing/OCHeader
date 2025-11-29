@class IESECLiveContext;
@protocol IESECLiveCardViewDelegate;

@interface IESECLiveCardGenerator : NSObject

@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (weak, nonatomic) id<IESECLiveCardViewDelegate> cardViewDelegate;

- (id)initWithLiveContext:(id)a0;
- (void)sliceCardViewWithCardViewModel:(id)a0 completion:(id /* block */)a1;
- (id)goodsCardViewWithModel:(id)a0;
- (id)goodsCardViewWithParams:(id)a0;
- (id)p_auctionCardViewV2WithCardModel:(id)a0;
- (id)p_auctionCardViewWithCardModel:(id)a0;
- (id)p_relatedCardViewWithCardModel:(id)a0;
- (id)p_goodsCardViewWithCardModel:(id)a0;
- (id)p_lynxCardViewWithParams:(id)a0;
- (id)initWithLiveContext:(id)a0 cardViewDelegate:(id)a1;
- (void)goodsCardWithViewModel:(id)a0 completion:(id /* block */)a1;
- (id)initWithLiveCardViewDelegate:(id)a0 liveContext:(id)a1;
- (id)goodsCardViewWithData:(id)a0;
- (id)emptyCardView;
- (void).cxx_destruct;

@end
