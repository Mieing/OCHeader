@class NSString, CoinAward, CoinWordIcon;

@interface TaskCenterBoxConf : IESLivePBBaseMessage

@property (nonatomic) long long countDown;
@property (nonatomic) BOOL isFinished;
@property (copy, nonatomic) NSString *finishedText;
@property (nonatomic) BOOL firstPopUp;
@property (copy, nonatomic) NSString *iconCountDowning;
@property (copy, nonatomic) NSString *iconCountDowned;
@property (nonatomic) long long now;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *requestId;
@property (nonatomic) long long roundExpire;
@property (nonatomic) long long roundStart;
@property (nonatomic) int coinTaskType;
@property (nonatomic) BOOL taskCenterOnOauth;
@property (retain, nonatomic) CoinWordIcon *coinIconFinish;
@property (nonatomic) BOOL hasCoinIconFinish;
@property (retain, nonatomic) CoinAward *awardInfo;
@property (nonatomic) BOOL hasAwardInfo;
@property (nonatomic) BOOL isCarousel;
@property (nonatomic) BOOL isShowBubble;
@property (nonatomic) long long drawTaskCountDown;
@property (nonatomic) int panelStyleVersion;

+ (id)descriptor;

@end
