@class NSString, LotteryInfo;

@interface CandidateEvent : IESLivePBBaseMessage

@property (nonatomic) int eventType;
@property (copy, nonatomic) NSString *userId;
@property (nonatomic) long long awardType;
@property (nonatomic) long long grantCount;
@property (nonatomic) long long score;
@property (nonatomic) long long appId;
@property (nonatomic) long long deviceId;
@property (copy, nonatomic) NSString *devicePlatform;
@property (nonatomic) long long appVersion;
@property (retain, nonatomic) LotteryInfo *lottery;
@property (nonatomic) BOOL hasLottery;

+ (id)descriptor;

@end
