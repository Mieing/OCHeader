@class NSString;

@interface HTSLiveLotteryInfoSyncData : IESLivePBBaseMessage

@property (nonatomic) long long lotteryId;
@property (nonatomic) long long lotteryType;
@property (nonatomic) long long luckyCount;
@property (nonatomic) long long prizeCount;
@property (nonatomic) long long candidateTotalCount;
@property (nonatomic) long long lastCandidateTotalCountSurgeTimestamp;
@property (nonatomic) long long startTime;
@property (nonatomic) long long drawTime;
@property (nonatomic) long long enabledDilatation;
@property (copy, nonatomic) NSString *dilatationConfigDetail;
@property (nonatomic) BOOL dilatationNow;
@property (nonatomic) long long prizeCountBeforeDilatation;
@property (nonatomic) long long luckyCountBeforeDilatation;

+ (id)descriptor;

@end
