@class DeliveryInfo;

@interface ExchangeInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long exchangeState;
@property (retain, nonatomic) DeliveryInfo *returnDeliveryInfo;
@property (retain, nonatomic) DeliveryInfo *deliveryInfo;

+ (void)initialize;

@end
