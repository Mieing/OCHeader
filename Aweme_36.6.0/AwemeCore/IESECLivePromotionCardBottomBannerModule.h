@class NSString, IESECLivePromotionCardBottomBannerView;

@interface IESECLivePromotionCardBottomBannerModule : IESECLivePromotionCardCommonModule <IESECLivePromotionCardCommonModuleBottomUpdateProvider>

@property (retain, nonatomic) IESECLivePromotionCardBottomBannerView *bannerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)calculateHeightWithGoodsModel:(id)a0;

- (void)trackShowEvent;
- (id)getBTMModelWithBtm:(id)a0;
- (id)protocolToInject;
- (void)updateWithGoodsViewModel:(id)a0;
- (void)updatBottomModuleCornerRadius:(double)a0;
- (void)clickBannerViewWithArea:(unsigned long long)a0 bannerModel:(id)a1;
- (void)trackBottomBannerWithBtmModel:(id)a0;
- (void).cxx_destruct;
- (id)view;
- (void)setupAccessibility;

@end
