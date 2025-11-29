@class NSString, NSMutableArray;

@interface HTSLiveSprintChallengeInfo : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *challengeUserInfosArray;
@property (readonly, nonatomic) unsigned long long challengeUserInfosArray_Count;
@property (nonatomic) long long startTime;
@property (nonatomic) long long duration;
@property (nonatomic) BOOL isAutomaticCountdown;
@property (nonatomic) int status;
@property (copy, nonatomic) NSString *playModeId;
@property (nonatomic) long long targetScore;
@property (nonatomic) long long totalScore;
@property (nonatomic) int challengeResult;
@property (retain, nonatomic) NSMutableArray *bigRichInfoArray;
@property (readonly, nonatomic) unsigned long long bigRichInfoArray_Count;
@property (retain, nonatomic) NSMutableArray *addTimeGiftInfosArray;
@property (readonly, nonatomic) unsigned long long addTimeGiftInfosArray_Count;
@property (nonatomic) int challengePlayMode;

+ (id)descriptor;

@end
