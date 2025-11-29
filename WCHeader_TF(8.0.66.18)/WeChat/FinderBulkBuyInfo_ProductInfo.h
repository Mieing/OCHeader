@class NSString, FinderWindowProductInfo_DetailPage;

@interface FinderBulkBuyInfo_ProductInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long productId;
@property (retain, nonatomic) NSString *outProductId;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *imgUrl;
@property (nonatomic) unsigned int sellingPrice;
@property (nonatomic) unsigned int marketPrice;
@property (retain, nonatomic) FinderWindowProductInfo_DetailPage *productDetailPage;

+ (void)initialize;

@end
