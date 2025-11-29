@class WCDataItem, WCAdIntegratedMarketingBannerView;

@interface WCAdMarketingBannerLogic : WCAdvertiseOperationLogicBase

@property (retain, nonatomic) WCDataItem *dataItem;
@property (nonatomic) unsigned long long contentItemScene;
@property (retain, nonatomic) WCAdIntegratedMarketingBannerView *bannerView;

+ (id)getMarketingBannerLogicWithDataItem:(id)a0 contentItemScene:(unsigned long long)a1;

- (id)initWithDataItem:(id)a0 contentItemScene:(unsigned long long)a1;
- (void)prepare;
- (void)start;
- (void)pause;
- (void)stop;
- (void).cxx_destruct;

@end
