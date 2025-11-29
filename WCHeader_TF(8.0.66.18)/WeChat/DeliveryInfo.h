@class AddressInfo, NSString, ExpressData, SamecityDeliveryInfo, PickupDeliveryInfo;

@interface DeliveryInfo : WXPBGeneratedMessage

@property (retain, nonatomic) AddressInfo *addressInfo;
@property (nonatomic) unsigned int deliveryType;
@property (retain, nonatomic) NSString *deliveryName;
@property (retain, nonatomic) ExpressData *expressData;
@property (retain, nonatomic) SamecityDeliveryInfo *samecityDeliveryInfo;
@property (retain, nonatomic) PickupDeliveryInfo *pickupDeliveryInfo;

+ (void)initialize;

@end
