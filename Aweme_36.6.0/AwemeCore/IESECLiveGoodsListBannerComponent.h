@class IESECLiveGoodsListHeaderService, IESECLiveGoodsListBannerView, NSTimer, NSString, UIView, IESECLiveGoodsListToastService, IESECLiveGoodsIntroducingBanner;

@interface IESECLiveGoodsListBannerComponent : IESECLiveGoodsListBaseComponent <IESECLiveGoodsListBannerViewDelegate, IESECLiveGoodsIntroducingBannerDelegate, IESECLiveGoodsListBannerComponentDelegate>

@property (retain, nonatomic) IESECLiveGoodsIntroducingBanner *introducingBanner;
@property (retain, nonatomic) UIView *bannerContainer;
@property (retain, nonatomic) IESECLiveGoodsListBannerView *commonBanner;
@property (retain, nonatomic) NSTimer *introducingBannerTimer;
@property (retain, nonatomic) NSString *lastIntroducingPromotionID;
@property (nonatomic) BOOL isShowingBanner;
@property (weak, nonatomic) IESECLiveGoodsListToastService *toastService;
@property (weak, nonatomic) IESECLiveGoodsListHeaderService *headerService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupBind;
- (void)noticeBuyIntension;
- (BOOL)isInstantStore;
- (void)introducingBannerDidClick:(id)a0;
- (void)p_showCommonBanner;
- (void)handleCommonBanner:(id)a0;
- (id)p_listEnvironment;
- (void)clickIntroducingBannerWithModel:(id)a0;
- (void)listBannerShouldClose:(id)a0;
- (void)clickListHeaderWithAction:(id)a0;
- (void)hideCommonBanner;
- (void)p_showBannerContainer;
- (void)setupAutoDismissIntroducingBanner;
- (void)trackBSTEventWithGoods:(id)a0;
- (void)cancelIntroducingBannerTimer;
- (void)p_hideBannerContainerIfNeeded;
- (void)p_showCommonBanner:(id)a0;
- (void)hideIntroducingBanner;
- (void)listBannerShouldShow:(BOOL)a0;
- (BOOL)tabListViewContainIntroducingGoods:(id)a0;
- (void)showIntroducingBanner:(id)a0;
- (void)updateListCardDesignIfNeeded;
- (void)handleIntroducingBannerForceNotReshow:(BOOL)a0 introducingGoodsModel:(id)a1;
- (void)listBanner:(id)a0 didClickArea:(unsigned long long)a1 withBannerModel:(id)a2 combinationBlockModel:(id)a3;
- (void)listBannerCombinationBlockShowWith:(id)a0;
- (void)updateBannerWithTabSwitched:(BOOL)a0;
- (void)updateCommonBannerState;
- (struct CGPoint { double x0; double x1; })getCartButtonCenterPoint;
- (void)didUpdateSelectedIndex:(long long)a0;
- (id)tracker;
- (void).cxx_destruct;
- (id)view;

@end
