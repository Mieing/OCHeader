@interface IESGCPPBIntroduceCardDisplayInfo : GPBMessage

@property (nonatomic) long long displayDuration;
@property (nonatomic) BOOL isOpenTimerIntroduceCard;
@property (nonatomic) long long displayTimerSpan;
@property (nonatomic) long long displayTimerLoopCnt;
@property (nonatomic) BOOL isOpenAiIntroduceCard;

+ (id)descriptor;

@end
