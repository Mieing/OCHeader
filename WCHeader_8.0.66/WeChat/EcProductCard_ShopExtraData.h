@class NSString, EcProductCard_ShopExtraData_ConsumptionInfo, NSMutableArray;

@interface EcProductCard_ShopExtraData : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *headimgUrl;
@property (nonatomic) unsigned long long sellingPrice;
@property (nonatomic) unsigned long long marketPrice;
@property (retain, nonatomic) NSString *sellingPriceWording;
@property (retain, nonatomic) NSString *preSellWording;
@property (nonatomic) unsigned int discountRate;
@property (nonatomic) unsigned int isMarketPriceShow;
@property (retain, nonatomic) EcProductCard_ShopExtraData_ConsumptionInfo *consumptionInfo;
@property (nonatomic) BOOL isVirtualProduct;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned int skuSttrSize;
@property (retain, nonatomic) NSMutableArray *skuSttrInfoList;
@property (retain, nonatomic) NSMutableArray *showBoxItemList;
@property (nonatomic) unsigned int isPriceBeginShow;
@property (nonatomic) unsigned int iconUrlsSize;
@property (nonatomic) unsigned int packageProductNumber;
@property (retain, nonatomic) NSMutableArray *iconTypeList;
@property (retain, nonatomic) NSString *shopNickname;
@property (nonatomic) unsigned int sales;
@property (retain, nonatomic) NSMutableArray *marketingTags;
@property (retain, nonatomic) NSMutableArray *attractionFactorTags;
@property (nonatomic) unsigned int freightSubsidyShowFlag;
@property (retain, nonatomic) NSString *feeWording;
@property (retain, nonatomic) NSString *sendWording;

+ (void)initialize;

@end
