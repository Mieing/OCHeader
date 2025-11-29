@class DeliveryInfo;

@interface ReturnInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long orderReturnTime;
@property (nonatomic) unsigned int returnState;
@property (retain, nonatomic) DeliveryInfo *returnDeliveryInfo;

+ (void)initialize;

@end
