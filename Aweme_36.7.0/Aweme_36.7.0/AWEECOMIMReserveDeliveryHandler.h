@class NSString, NSNumber;

@interface AWEECOMIMReserveDeliveryHandler : NSObject

@property (copy, nonatomic) NSString *shopOrderId;
@property (copy, nonatomic) NSNumber *shopId;
@property (copy, nonatomic) NSString *deliveryTime;
@property (copy, nonatomic) id /* block */ completion;

- (void)checkAppointmentStatusWithDataModel:(id)a0;
- (void)openReserveDeliveryPageWithDataModel:(id)a0;
- (void).cxx_destruct;
- (void)run;

@end
