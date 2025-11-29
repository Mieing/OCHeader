@interface AnchorPopularityCardStatus : IESLivePBBaseMessage

@property (nonatomic) BOOL usingPopularityCard;
@property (nonatomic) long long popularityCardEndTime;
@property (nonatomic) long long currentBonusScore;
@property (nonatomic) long long maxBonusScore;
@property (nonatomic) long long currentRank;
@property (nonatomic) long long scoreGap;

+ (id)descriptor;

@end
