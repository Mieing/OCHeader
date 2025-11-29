@class WCDataItem, WCAdBrandTopicBannerView;

@interface WCAdBrandTopicBannerLogic : WCAdvertiseOperationLogicBase

@property (retain, nonatomic) WCDataItem *dataItem;
@property (nonatomic) unsigned long long contentItemScene;
@property (retain, nonatomic) WCAdBrandTopicBannerView *bannerView;

+ (id)getBrandTopicBannerLogicWithDataItem:(id)a0 contentItemScene:(unsigned long long)a1;

- (id)initWithDataItem:(id)a0 contentItemScene:(unsigned long long)a1;
- (void)prepare;
- (void)start;
- (void)stop;
- (void).cxx_destruct;

@end
