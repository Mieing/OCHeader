@class NSString;

@interface ReceiveCouponByFeedCardResponse_ActivityInfo : IESLivePBBaseMessage

@property (nonatomic) long long activityId;
@property (copy, nonatomic) NSString *activityName;
@property (copy, nonatomic) NSString *coverImage;
@property (nonatomic) long long canReceiveNum;

+ (id)descriptor;

@end
