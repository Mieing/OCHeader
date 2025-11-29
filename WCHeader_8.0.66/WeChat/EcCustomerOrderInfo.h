@class NSString, EcCustomerOrderInfo_PriceInfo, DetailLink, NSMutableArray;

@interface EcCustomerOrderInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *orderId;
@property (nonatomic) unsigned int srcId;
@property (retain, nonatomic) NSMutableArray *skuList;
@property (nonatomic) unsigned int totalProductCnt;
@property (retain, nonatomic) EcCustomerOrderInfo_PriceInfo *priceInfo;
@property (nonatomic) unsigned int orderState;
@property (retain, nonatomic) NSString *orderStateStr;
@property (retain, nonatomic) DetailLink *orderDetailLink;
@property (nonatomic) unsigned int orderType;
@property (retain, nonatomic) NSString *newPriceWording;
@property (retain, nonatomic) NSString *newStateWording;
@property (nonatomic) unsigned int useNewWording;

+ (void)initialize;

@end
