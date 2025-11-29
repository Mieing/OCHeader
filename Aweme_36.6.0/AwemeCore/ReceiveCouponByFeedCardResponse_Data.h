@class NSString, ReceiveCouponByFeedCardResponse_CouponInfo, ReceiveCouponByFeedCardResponse_ActivityInfo;

@interface ReceiveCouponByFeedCardResponse_Data : IESLivePBBaseMessage

@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (copy, nonatomic) NSString *activityId;
@property (retain, nonatomic) ReceiveCouponByFeedCardResponse_CouponInfo *couponInfo;
@property (nonatomic) BOOL hasCouponInfo;
@property (retain, nonatomic) ReceiveCouponByFeedCardResponse_ActivityInfo *activityInfo;
@property (nonatomic) BOOL hasActivityInfo;
@property (nonatomic) int receiveResult;
@property (nonatomic) int subscribeStatus;

+ (id)descriptor;

@end
