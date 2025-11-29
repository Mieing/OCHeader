@class DeliveryContact;

@interface SamecityDeliveryInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int estimatedDeliveryTime;
@property (nonatomic) unsigned int deliveryState;
@property (retain, nonatomic) DeliveryContact *deliveryContact;

+ (void)initialize;

@end
