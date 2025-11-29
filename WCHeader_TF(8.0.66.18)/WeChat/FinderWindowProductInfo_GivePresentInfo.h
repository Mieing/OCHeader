@class NSString, FinderWindowProductInfo_DetailPage, FinderWindowProductInfo_SkuAttrInfoList;

@interface FinderWindowProductInfo_GivePresentInfo : WXPBGeneratedMessage

@property (nonatomic) BOOL canGivePresent;
@property (retain, nonatomic) NSString *canntGivePresnetMsg;
@property (retain, nonatomic) NSString *buttonWording;
@property (nonatomic) unsigned int productButtonStatus;
@property (retain, nonatomic) FinderWindowProductInfo_DetailPage *halfPage;
@property (retain, nonatomic) FinderWindowProductInfo_SkuAttrInfoList *skuAttrInfoList;

+ (void)initialize;

@end
