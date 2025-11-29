@interface CheckInTaskInfo : IESLivePBBaseMessage

@property (nonatomic) int status;
@property (nonatomic) int recommendRedoType;
@property (nonatomic) long long recheckGiftId;
@property (nonatomic) long long restartGiftId;
@property (nonatomic) int autoStartNextPeriod;

+ (id)descriptor;

@end
