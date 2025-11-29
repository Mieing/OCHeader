@class NSString, FinderLiveShopWindowProductItem_ProductPage;

@interface FinderLiveShopWindowProductItem : WXPBGeneratedMessage

@property (nonatomic) unsigned long long productId;
@property (retain, nonatomic) FinderLiveShopWindowProductItem_ProductPage *productPage;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *imgUrl;
@property (nonatomic) unsigned int stock;
@property (nonatomic) unsigned int minPrice;
@property (nonatomic) unsigned int maxPrice;
@property (nonatomic) unsigned int promoting;
@property (retain, nonatomic) NSString *extBuff;
@property (retain, nonatomic) NSString *platformName;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) FinderLiveShopWindowProductItem_ProductPage *userPurchasePage;
@property (nonatomic) unsigned int platformId;
@property (retain, nonatomic) NSString *extraData;
@property (retain, nonatomic) NSString *appUsername;
@property (retain, nonatomic) NSString *shopExtraData;

+ (void)initialize;

@end
