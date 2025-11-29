@class WCFinderLiveAudienceComodityLogReporter, WCFinderHotSpotBannerView, WCFinderShareEntranceMessageInfo, WCFinderDataItem, NSString, WCFinderLiveProductShareItem;

@interface WCFinderHotSpotBannerViewMiniProgramPanel : UIView <WCFinderHotSpotBannerViewDelegate>

@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) WCFinderLiveAudienceComodityLogReporter *reporter;
@property (retain, nonatomic) WCFinderHotSpotBannerView *bannerView;
@property (copy, nonatomic) id /* block */ requestWillDisplayOrNotBlock;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) WCFinderLiveProductShareItem *productShareItem;
@property (retain, nonatomic) WCFinderShareEntranceMessageInfo *entranceMessageInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWidget:(id)a0 anchor:(id)a1 ecSource:(id)a2;
- (id)initWithWidget:(id)a0 params:(id)a1;
- (id)initWithWidget:(id)a0;
- (void)onClickEnterLiving:(id)a0;
- (void)handleEnterLiving:(id)a0;
- (void)resetLoadingFlag;
- (void).cxx_destruct;

@end
