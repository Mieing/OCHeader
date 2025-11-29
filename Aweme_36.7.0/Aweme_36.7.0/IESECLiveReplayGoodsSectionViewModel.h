@class IESECLiveReplayGoodsListContext;

@interface IESECLiveReplayGoodsSectionViewModel : IESECLiveBaseSectionViewModel

@property (weak, nonatomic) IESECLiveReplayGoodsListContext *context;

- (id)basicTrackParams;
- (id)cartTrackParamsDictWithBTMModel:(id)a0;
- (id)appendReplayParams:(id)a0;
- (void)trackGoodsShow:(id)a0;
- (id)btmModelWithHost:(id)a0 btm:(id)a1;
- (void)trackGoodsBlankAreaClicked:(id)a0;
- (void)trackGoodsBuyButtonClicked:(id)a0;
- (id)getGoodsCellViewModel;
- (void)trackGoodsPreSellReserveShow;
- (void)trackGoodsPreSellReserveClicked;
- (void)trackGoodsAddCartButtonClicked:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
