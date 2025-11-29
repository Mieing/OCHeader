@class IESECLiveReplayGoodsListHeader, IESECLiveReplayGoodsListContext;

@interface IESECLiveReplayGoodsListHeaderViewModel : NSObject

@property (weak, nonatomic) IESECLiveReplayGoodsListContext *context;
@property (retain, nonatomic) IESECLiveReplayGoodsListHeader *header;

- (id)basicTrackParams;
- (id)addLiveInfoParamsToURL:(id)a0;
- (void)forceShowDisclaimer:(long long)a0 extraInfo:(id)a1 confirmBlock:(id /* block */)a2 cancleBlock:(id /* block */)a3;
- (id)appendReplayParams:(id)a0;
- (void)trackShopEntranceShow:(id)a0;
- (void)trackShopEntranceClicked:(id)a0;
- (void)jumpShop:(id)a0;
- (void)trackOrderEntranceClicked:(id)a0 entry:(id)a1;
- (void)jumpOrder:(id)a0 entry:(id)a1;
- (void)trackCartEntranceClicked:(id)a0 entry:(id)a1;
- (void)jumpCart:(id)a0 entry:(id)a1;
- (void)trackIMEntranceClicked:(id)a0 entry:(id)a1;
- (void)jumpIM:(id)a0 entry:(id)a1;
- (void)trackIMEntranceShow:(id)a0 entry:(id)a1;
- (void)trackOrderEntranceShow:(id)a0 entry:(id)a1;
- (void)trackCartEntranceShow:(id)a0 entry:(id)a1;
- (void)jumpWith:(id)a0 entry:(id)a1;
- (id)getBTMForEntry:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
