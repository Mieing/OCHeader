@class NSString, NSNumber;

@interface AWEECOMIMReserveDeliveryDataModel : NSObject

@property (copy, nonatomic) NSString *shopOrderId;
@property (copy, nonatomic) NSNumber *shopId;
@property (copy, nonatomic) NSString *deliveryTime;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
