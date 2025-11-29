@class NSString, NSMutableArray;

@interface EcsProductShareObject : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *finderLiveId;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *finderObjectId;
@property (retain, nonatomic) NSString *finderNonceId;
@property (retain, nonatomic) NSString *liveStatus;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *pagePath;
@property (nonatomic) unsigned long long productId;
@property (retain, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) NSString *productTitle;
@property (nonatomic) unsigned int marketPrice;
@property (nonatomic) unsigned int sellingPrice;
@property (retain, nonatomic) NSString *platformHeadImg;
@property (retain, nonatomic) NSString *platformName;
@property (retain, nonatomic) NSString *shopWindowId;
@property (nonatomic) unsigned int flashSalePrice;
@property (nonatomic) unsigned long long flashSaleEndTime;
@property (retain, nonatomic) NSString *ecSource;
@property (retain, nonatomic) NSString *sellingPriceWording;
@property (retain, nonatomic) NSString *platformLogoUrl;
@property (retain, nonatomic) NSString *firstProductTagUrl;
@property (nonatomic) float firstProductTagAspectRatio;
@property (retain, nonatomic) NSString *secondProductTagUrl;
@property (nonatomic) float secondProductTagAspectRatio;
@property (retain, nonatomic) NSString *firstGuaranteeWording;
@property (retain, nonatomic) NSString *secondGuaranteeWording;
@property (retain, nonatomic) NSString *thirdGuaranteeWording;
@property (nonatomic) BOOL isPriceBeginShow;
@property (retain, nonatomic) NSString *lastGmsgId;
@property (retain, nonatomic) NSString *discountWording;
@property (retain, nonatomic) NSString *promoterKey;
@property (retain, nonatomic) NSMutableArray *showBoxItemList;
@property (retain, nonatomic) NSString *priceSuffixDescription;
@property (retain, nonatomic) NSString *productCardKey;
@property (retain, nonatomic) NSString *isWxShop;
@property (retain, nonatomic) NSString *brandIconUrl;
@property (retain, nonatomic) NSString *rIconUrl;
@property (retain, nonatomic) NSString *rIconUrlDarkMode;
@property (retain, nonatomic) NSString *topShopIconUrl;
@property (retain, nonatomic) NSString *topShopIconUrlDarkMode;
@property (retain, nonatomic) NSString *simplifyTopShopIconUrl;
@property (retain, nonatomic) NSString *simplifyTopShopIconUrlDarkMode;
@property (nonatomic) unsigned int topShopIconWidth;
@property (nonatomic) unsigned int topShopIconHeight;
@property (nonatomic) unsigned int simplifyTopShopIconWidth;
@property (nonatomic) unsigned int simplifyTopShopIconHeight;
@property (retain, nonatomic) NSString *maskPriceWording;

+ (void)initialize;

@end
