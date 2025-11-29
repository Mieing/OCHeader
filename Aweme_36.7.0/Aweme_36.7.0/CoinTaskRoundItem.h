@class NSString, CoinAward, CoinWordIcon;

@interface CoinTaskRoundItem : IESLivePBBaseMessage

@property (nonatomic) int round;
@property (copy, nonatomic) NSString *token;
@property (nonatomic) long long countDown;
@property (nonatomic) int roundStatus;
@property (retain, nonatomic) CoinAward *award;
@property (nonatomic) BOOL hasAward;
@property (retain, nonatomic) CoinWordIcon *wordIconBefore;
@property (nonatomic) BOOL hasWordIconBefore;
@property (retain, nonatomic) CoinWordIcon *wordIconDone;
@property (nonatomic) BOOL hasWordIconDone;
@property (retain, nonatomic) CoinWordIcon *wordIconFinish;
@property (nonatomic) BOOL hasWordIconFinish;
@property (retain, nonatomic) CoinWordIcon *wordIconToast;
@property (nonatomic) BOOL hasWordIconToast;
@property (nonatomic) long long roundExpire;
@property (nonatomic) long long roundStart;
@property (nonatomic) int checkInStatus;

+ (id)descriptor;

@end
