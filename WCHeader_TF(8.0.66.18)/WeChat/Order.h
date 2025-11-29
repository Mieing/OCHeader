@class DeliveryInfo, NSString, NSData, UserInfo, SellerInfo, PriceInfo, NSMutableArray, EcWxaInfo, AfterSalesInfo, SrcInfo;

@interface Order : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *orderId;
@property (retain, nonatomic) NSString *rootOrderId;
@property (retain, nonatomic) SrcInfo *srcInfo;
@property (retain, nonatomic) SellerInfo *sellerInfo;
@property (nonatomic) unsigned long long createTime;
@property (nonatomic) unsigned long long closeTime;
@property (nonatomic) unsigned int state;
@property (retain, nonatomic) UserInfo *buyer;
@property (retain, nonatomic) PriceInfo *priceInfo;
@property (retain, nonatomic) NSMutableArray *payInfo;
@property (retain, nonatomic) NSMutableArray *orderProductInfo;
@property (retain, nonatomic) NSMutableArray *orderProductCommissionInfo;
@property (retain, nonatomic) DeliveryInfo *deliveryInfo;
@property (retain, nonatomic) AfterSalesInfo *afterSaleInfo;
@property (retain, nonatomic) UserInfo *referrer;
@property (retain, nonatomic) NSMutableArray *notes;
@property (retain, nonatomic) NSData *extInfo;
@property (retain, nonatomic) NSMutableArray *orderCouponcodeInfo;
@property (retain, nonatomic) NSMutableArray *evaluationInfos;
@property (retain, nonatomic) EcWxaInfo *orderWxaInfo;
@property (nonatomic) unsigned long long updateTime;

+ (void)initialize;

@end
