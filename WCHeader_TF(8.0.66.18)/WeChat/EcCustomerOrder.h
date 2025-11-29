@class SimpleDeliveryInfo, NSString, SalesFinderInfo, ShopInfo, NSMutableArray;

@interface EcCustomerOrder : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *orderId;
@property (retain, nonatomic) ShopInfo *shopInfo;
@property (retain, nonatomic) NSMutableArray *skuList;
@property (retain, nonatomic) SimpleDeliveryInfo *deliveryInfo;
@property (nonatomic) unsigned long long price;
@property (retain, nonatomic) SalesFinderInfo *salesFinderInfo;
@property (nonatomic) unsigned int orderState;
@property (nonatomic) unsigned long long orderCreateTime;
@property (nonatomic) unsigned long long orderCloseTime;
@property (nonatomic) unsigned int afterSalesState;
@property (retain, nonatomic) NSString *orderDetailJson;
@property (retain, nonatomic) NSString *index;
@property (retain, nonatomic) NSString *orderStateStr;
@property (retain, nonatomic) NSString *appUserName;
@property (retain, nonatomic) NSString *pagePath;
@property (nonatomic) unsigned int evaluationStatus;
@property (retain, nonatomic) NSString *evaluationPagePath;
@property (retain, nonatomic) NSString *evaluationAppUserName;
@property (nonatomic) unsigned int priceType;
@property (retain, nonatomic) NSString *priceUnit;
@property (retain, nonatomic) NSMutableArray *priceWordingPartList;

+ (void)initialize;

@end
