@class NSString, CheckInTaskInfo;

@interface AwardResponse_Data : IESLivePBBaseMessage

@property (nonatomic) long long amount;
@property (copy, nonatomic) NSString *unit;
@property (copy, nonatomic) NSString *goldBoxConfStr;
@property (nonatomic) long long bizErrorCode;
@property (copy, nonatomic) NSString *bizErrorMsg;
@property (copy, nonatomic) NSString *finishSound;
@property (nonatomic) long long totalGetAmount;
@property (nonatomic) long long totalAmount;
@property (retain, nonatomic) CheckInTaskInfo *checkInTaskInfo;
@property (nonatomic) BOOL hasCheckInTaskInfo;

+ (id)descriptor;

@end
