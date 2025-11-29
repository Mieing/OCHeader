@class StageGiftTaskInfo, NSString, UgCouponTaskInfo, NSMutableArray, CheckInTaskInfo;

@interface CoinTaskItem : IESLivePBBaseMessage

@property (nonatomic) int coinTaskType;
@property (copy, nonatomic) NSString *coinSourceKey;
@property (copy, nonatomic) NSString *coinSourceName;
@property (nonatomic) int totalRound;
@property (nonatomic) int currentRound;
@property (nonatomic) int triggerType;
@property (nonatomic) long long giftId;
@property (retain, nonatomic) NSMutableArray *roundsArray;
@property (readonly, nonatomic) unsigned long long roundsArray_Count;
@property (nonatomic) int forbiddenType;
@property (nonatomic) long long totalGetAward;
@property (nonatomic) long long totalAward;
@property (retain, nonatomic) CheckInTaskInfo *checkInTaskInfo;
@property (nonatomic) BOOL hasCheckInTaskInfo;
@property (retain, nonatomic) UgCouponTaskInfo *ugCouponTaskInfo;
@property (nonatomic) BOOL hasUgCouponTaskInfo;
@property (retain, nonatomic) StageGiftTaskInfo *stageGiftTaskInfo;
@property (nonatomic) BOOL hasStageGiftTaskInfo;

+ (id)descriptor;

@end
