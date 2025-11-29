@class SimplePickupDeliveryInfo, SimpleSamecityDeliveryInfo, SimpleExpressInfo, NSMutableArray;

@interface SimpleDeliveryInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int deliveryType;
@property (retain, nonatomic) SimpleExpressInfo *expressInfo;
@property (retain, nonatomic) SimpleSamecityDeliveryInfo *samecityDeliveryInfo;
@property (retain, nonatomic) SimplePickupDeliveryInfo *pickupDeliveryInfo;
@property (retain, nonatomic) NSMutableArray *multiPackageExpressInfo;

+ (void)initialize;

@end
