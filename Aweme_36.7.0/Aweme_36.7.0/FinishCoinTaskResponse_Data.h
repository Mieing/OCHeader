@class NSString;

@interface FinishCoinTaskResponse_Data : IESLivePBBaseMessage

@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (copy, nonatomic) NSString *rewardAmount;
@property (copy, nonatomic) NSString *extraText;

+ (id)descriptor;

@end
