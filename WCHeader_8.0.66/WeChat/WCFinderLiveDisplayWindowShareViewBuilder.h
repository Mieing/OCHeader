@class MMWebImageView, WCFinderLiveDisplayWindowShareViewBuildConfig, WCFinderLiveShopWindowShareItem;

@interface WCFinderLiveDisplayWindowShareViewBuilder : NSObject

@property (readonly, nonatomic) WCFinderLiveShopWindowShareItem *item;
@property (retain, nonatomic) MMWebImageView *appLogoView;
@property (retain, nonatomic) WCFinderLiveDisplayWindowShareViewBuildConfig *config;
@property (retain, nonatomic) WCFinderLiveShopWindowShareItem *localItem;
@property (retain, nonatomic) WCFinderLiveShopWindowShareItem *remoteItem;
@property (nonatomic) BOOL isRecordDetail;

- (BOOL)isWxShop;
- (BOOL)hasWxShopBackgroundImage;
- (id)productImageURLList;
- (unsigned long long)validProductCount;
- (void)updateAppLogo;
- (double)buildInCanvasForWxShop:(id)a0;
- (double)buildInCanvas:(id)a0;
- (double)estimateHeightForWidth:(double)a0;
- (void).cxx_destruct;

@end
