@class NSString, FinderWindowProductInfo_ProductButtonInfo, FinderJumpInfo_LiteApp;

@interface HiddenPriceInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int enableHiddenPriceFlag;
@property (retain, nonatomic) NSString *maskSellingPriceWording;
@property (nonatomic) unsigned int maskAddProductShopBagType;
@property (nonatomic) unsigned int maskProductButtonStatus;
@property (retain, nonatomic) FinderWindowProductInfo_ProductButtonInfo *maskProductButtonInfo;
@property (retain, nonatomic) FinderWindowProductInfo_ProductButtonInfo *maskPresentButtonInfo;
@property (nonatomic) unsigned int anchorHiddenPriceOption;
@property (retain, nonatomic) FinderJumpInfo_LiteApp *preHotLiteappPage;

+ (void)initialize;

@end
