@class NSString, AddressInfo, DeliveryContact;

@interface PickupDeliveryInfo : WXPBGeneratedMessage

@property (retain, nonatomic) AddressInfo *pickupAddressInfo;
@property (nonatomic) unsigned int deliveryState;
@property (retain, nonatomic) NSString *pickupCode;
@property (retain, nonatomic) NSString *pickupQrcodeUrl;
@property (nonatomic) unsigned long long latestPickupTime;
@property (retain, nonatomic) DeliveryContact *deliveryContact;
@property (nonatomic) unsigned long long pickupTime;

+ (void)initialize;

@end
