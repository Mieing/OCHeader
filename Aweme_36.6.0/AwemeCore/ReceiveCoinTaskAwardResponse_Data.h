@class NSString;

@interface ReceiveCoinTaskAwardResponse_Data : IESLivePBBaseMessage

@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (copy, nonatomic) NSString *rewardAmount;

+ (id)descriptor;

@end
