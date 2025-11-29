@class IESLiveAdventureUserInfo, IESLiveAdventureStageInfo, NSString;

@interface IESLiveAdventurePairInfo : IESLivePBBaseMessage

@property (nonatomic) long long pairId;
@property (retain, nonatomic) IESLiveAdventureUserInfo *fromUser;
@property (nonatomic) BOOL hasFromUser;
@property (retain, nonatomic) IESLiveAdventureUserInfo *toUser;
@property (nonatomic) BOOL hasToUser;
@property (nonatomic) long long score;
@property (nonatomic) long long nextStageScore;
@property (nonatomic) long long stageId;
@property (retain, nonatomic) IESLiveAdventureStageInfo *stageInfo;
@property (nonatomic) BOOL hasStageInfo;
@property (nonatomic) int pairStatus;
@property (nonatomic) int callStatus;
@property (nonatomic) long long callerUserId;
@property (copy, nonatomic) NSString *pairIdStr;
@property (copy, nonatomic) NSString *callerUserOpenId;

+ (id)descriptor;

@end
