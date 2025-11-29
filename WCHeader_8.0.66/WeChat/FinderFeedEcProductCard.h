@class EcsTag, NSString, FinderFeedEcProductCard_NewBuyerDesc, FinderFeedEcProductCard_ShopBagItem, EcsJumpInfo, FinderFeedEcProductCard_CardHeader, FinderFeedEcProductCard_BulkBuyDesc, EcsRichLabel, EcsRichTextButton;

@interface FinderFeedEcProductCard : WXPBGeneratedMessage

@property (nonatomic) unsigned long long productId;
@property (retain, nonatomic) EcsRichLabel *productTitle;
@property (retain, nonatomic) EcsTag *productTag;
@property (retain, nonatomic) EcsRichLabel *price;
@property (retain, nonatomic) EcsTag *priceDescTag;
@property (retain, nonatomic) EcsRichTextButton *buyButton;
@property (nonatomic) unsigned int productCardType;
@property (retain, nonatomic) FinderFeedEcProductCard_NewBuyerDesc *newBuyerDesc;
@property (retain, nonatomic) FinderFeedEcProductCard_BulkBuyDesc *bulkBuyDesc;
@property (retain, nonatomic) FinderFeedEcProductCard_CardHeader *headerInfo;
@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSString *bgmUrl;
@property (retain, nonatomic) FinderFeedEcProductCard_ShopBagItem *shopBagItem;
@property (retain, nonatomic) EcsJumpInfo *productDetailJumpInfo;
@property (retain, nonatomic) NSString *extraReportJson;

+ (void)initialize;

@end
