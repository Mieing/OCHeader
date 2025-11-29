@class NSString, HTSLiveUser;

@interface HTSLiveOrderSingUserScore : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *userId;
@property (nonatomic) long long silverMicrophoneNum;
@property (nonatomic) long long goldenMicrophoneNum;
@property (nonatomic) int currentTaskMicrophoneType;
@property (nonatomic) long long currentScore;
@property (nonatomic) long long needScoreToNext;
@property (nonatomic) int orderSingStage;
@property (nonatomic) long long currentRoundMicCount;
@property (retain, nonatomic) HTSLiveUser *titleSponsor;
@property (nonatomic) BOOL hasTitleSponsor;
@property (nonatomic) BOOL hitToast;

+ (id)descriptor;

@end
