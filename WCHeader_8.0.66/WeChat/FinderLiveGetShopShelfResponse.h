@class FinderLiveGetShopShelfResponse_ShopWindowCouponInfo, FinderShopShelfAskForPromoteSetting, FinderShopShelfOrderSetting, FinderLiveShopCustomerServiceInfo, FinderLiveWxaPreloadInfo, NSMutableArray, NSString, FinderLiveGetShopShelfResponse_ShopWindowProfileInfo, BaseResponse, FinderShopShelfPlatformDiscountCouponListInfo, FinderFlashSaleOrderSetting, FinderShopShelfHintInfo, NSData, FinderReplayRecordSetting, FinderShopLiteAppJumpInfo, FinderWxAppInfo, FinderFlashSaleSetting, FinderDirectAddPreviousLiveProductsPageInfo, FinderJumpInfo, FinderShopShelfAnchorMoneyOffCouponListInfo, FinderLiveGetShopShelfResponse_ShopVipInfo, FinderShopShelfEntranceButton, FinderShopShelfTopGuideBar;

@interface FinderLiveGetShopShelfResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *itemList;
@property (retain, nonatomic) FinderWxAppInfo *addProductUrl;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) FinderLiveWxaPreloadInfo *preloadInfo;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) FinderWxAppInfo *orderInfoUrl;
@property (retain, nonatomic) NSString *shopRequestId;
@property (retain, nonatomic) FinderLiveShopCustomerServiceInfo *directCsInfo;
@property (retain, nonatomic) FinderReplayRecordSetting *replayRecordSetting;
@property (nonatomic) unsigned long long extFlag;
@property (nonatomic) BOOL hasVirtualProduct;
@property (retain, nonatomic) FinderLiveGetShopShelfResponse_ShopWindowProfileInfo *shopWindowProfileInfo;
@property (retain, nonatomic) NSString *couponListWording;
@property (retain, nonatomic) FinderShopLiteAppJumpInfo *licenseJumpInfo;
@property (retain, nonatomic) FinderFlashSaleOrderSetting *flashSaleOrderSetting;
@property (retain, nonatomic) FinderWxAppInfo *jumpShopBagUrl;
@property (retain, nonatomic) FinderShopShelfOrderSetting *shopShelfOrderSetting;
@property (retain, nonatomic) FinderLiveGetShopShelfResponse_ShopVipInfo *shopVipInfo;
@property (retain, nonatomic) FinderShopShelfHintInfo *orderInfoHintInfo;
@property (retain, nonatomic) NSMutableArray *labelClassifyInfoList;
@property (retain, nonatomic) FinderFlashSaleSetting *flashSaleSetting;
@property (retain, nonatomic) FinderWxAppInfo *selectProductCenterHomePage;
@property (retain, nonatomic) FinderDirectAddPreviousLiveProductsPageInfo *addPreliveProductsPageInfo;
@property (nonatomic) unsigned int anchorOpenShelfJumpPageType;
@property (nonatomic) unsigned int anchorCanUsePreHotOrLiveExclusivePriceFlag;
@property (retain, nonatomic) FinderShopShelfAnchorMoneyOffCouponListInfo *anchorMoneyOffCouponListInfo;
@property (retain, nonatomic) FinderShopShelfAskForPromoteSetting *askForPromoteSetting;
@property (retain, nonatomic) FinderLiveGetShopShelfResponse_ShopWindowCouponInfo *shopWindowCouponInfo;
@property (retain, nonatomic) FinderShopShelfPlatformDiscountCouponListInfo *platformDiscountCouponListInfo;
@property (retain, nonatomic) FinderJumpInfo *clickProductManagementOpenPage;
@property (retain, nonatomic) FinderShopShelfEntranceButton *productFavoritesButton;
@property (retain, nonatomic) FinderShopShelfEntranceButton *productLikeButton;
@property (retain, nonatomic) FinderShopShelfTopGuideBar *topGuideBar;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSData *couponListLastBuffer;
@property (nonatomic) unsigned int couponListContinueFlag;
@property (nonatomic) unsigned long long version;

+ (void)initialize;

@end
