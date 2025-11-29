@class IESECLiveGoodsListHeaderService, IESECLiveGoodsListBannerView, IESECLiveGoodsListToastService, NSString;

@interface IESECLiveGoodsListCommonBannerComponent : IESECLiveGoodsListBaseComponent <IESECLiveGoodsListBannerViewDelegate>

@property (retain, nonatomic) IESECLiveGoodsListBannerView *commonBanner;
@property (weak, nonatomic) IESECLiveGoodsListToastService *toastService;
@property (weak, nonatomic) IESECLiveGoodsListHeaderService *headerService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupBind;
- (void)p_showCommonBanner;
- (void)handleCommonBanner:(id)a0;
- (void)listBannerShouldClose:(id)a0;
- (void)clickListHeaderWithAction:(id)a0;
- (void)hideCommonBanner;
- (void)p_showCommonBanner:(id)a0;
- (void)listBanner:(id)a0 didClickArea:(unsigned long long)a1 withBannerModel:(id)a2 combinationBlockModel:(id)a3;
- (void)listBannerCombinationBlockShowWith:(id)a0;
- (void)updateCommonBannerState;
- (void)didUpdateSelectedIndex:(long long)a0;
- (id)tracker;
- (void).cxx_destruct;
- (id)view;

@end
