@class ReceiveCouponByFeedCardResponse_Data;

@interface ReceiveCouponByFeedCardResponse : IESLivePBBaseMessage

@property (retain, nonatomic) ReceiveCouponByFeedCardResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
