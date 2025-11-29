@class NoteInfo, NSString, DetailLink, PayInfo, AddressInfo, SalesFinderInfo, PriceInfo, ShopInfo, NSMutableArray, SimpleDeliveryInfo;

@interface EcCustomerOrderDetail : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *orderId;
@property (retain, nonatomic) ShopInfo *shopInfo;
@property (retain, nonatomic) NSMutableArray *skuList;
@property (retain, nonatomic) SimpleDeliveryInfo *deliveryInfo;
@property (retain, nonatomic) PriceInfo *priceInfo;
@property (retain, nonatomic) PayInfo *payInfo;
@property (retain, nonatomic) SalesFinderInfo *salesFinderInfo;
@property (nonatomic) unsigned int orderState;
@property (nonatomic) unsigned long long orderCreateTime;
@property (nonatomic) unsigned long long orderCloseTime;
@property (retain, nonatomic) AddressInfo *customerAddressInfo;
@property (retain, nonatomic) NoteInfo *customerNote;
@property (retain, nonatomic) DetailLink *orderDetailLink;
@property (retain, nonatomic) DetailLink *customerServiceDetailLink;
@property (nonatomic) unsigned int afterSalesState;

+ (void)initialize;

@end
