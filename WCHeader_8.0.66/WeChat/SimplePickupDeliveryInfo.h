@class NSString, AddressInfo;

@interface SimplePickupDeliveryInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *pickupCode;
@property (retain, nonatomic) AddressInfo *pickupAddressInfo;

+ (void)initialize;

@end
