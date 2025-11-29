@class IESECLiveGoodsListHeaderService, NSString, NSTimer, IESECLiveGoodsListIntroduceBannerWrapperView, IESECLiveGoodsIntroducingBanner;

@interface IESECLiveGoodsListIntroduceBannerComponent : IESECLiveGoodsListBaseComponent <IESECLiveGoodsIntroducingBannerDelegate>

@property (retain, nonatomic) IESECLiveGoodsIntroducingBanner *introducingBanner;
@property (weak, nonatomic) IESECLiveGoodsListHeaderService *headerService;
@property (retain, nonatomic) NSString *lastIntroducingPromotionID;
@property (retain, nonatomic) NSTimer *introducingBannerTimer;
@property (retain, nonatomic) IESECLiveGoodsListIntroduceBannerWrapperView *introducingCell;
@property (weak, nonatomic) id delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupBind;
- (void)noticeBuyIntension;
- (BOOL)isInstantStore;
- (void)introducingBannerDidClick:(id)a0;
- (id)p_listEnvironment;
- (void)clickIntroducingBannerWithModel:(id)a0;
- (void)setupAutoDismissIntroducingBanner;
- (void)trackBSTEventWithGoods:(id)a0;
- (void)cancelIntroducingBannerTimer;
- (void)hideIntroducingBanner;
- (BOOL)tabListViewContainIntroducingGoods:(id)a0;
- (void)showIntroducingBanner:(id)a0;
- (void)handleIntroducingBannerForceNotReshow:(BOOL)a0 introducingGoodsModel:(id)a1;
- (void)updateBannerWithTabSwitched:(BOOL)a0;
- (void)tryShowIntroduceView:(BOOL)a0 animated:(BOOL)a1;
- (void)updateIntroducingBannerCell;
- (void)updateIntroducingCell:(id)a0 withGoodsItem:(id)a1 refreshType:(long long)a2;
- (id)tracker;
- (void).cxx_destruct;
- (id)view;
- (double)bannerHeight;

@end
