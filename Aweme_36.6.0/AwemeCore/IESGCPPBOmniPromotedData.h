@class NSString;

@interface IESGCPPBOmniPromotedData : GPBMessage

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long totalIncentiveAmount;
@property (nonatomic) long long currentIncentiveAmount;
@property (nonatomic) double userContributionRatio;
@property (nonatomic) double contentContributionRatio;
@property (nonatomic) long long userLiveWatchTime;
@property (nonatomic) int userLiveWatchTimeLevel;
@property (nonatomic) long long userVideoWatchTime;
@property (nonatomic) int userVideoWatchTimeLevel;
@property (nonatomic) long long userPromoteCount;
@property (nonatomic) int userPromoteCountLevel;
@property (nonatomic) long long contentWatchTime;
@property (nonatomic) long long contentPromoteCount;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (nonatomic) long long dataUpdateTime;
@property (nonatomic) long long settlementTime;
@property (nonatomic) long long totalAmountShowTime;
@property (nonatomic) long long userContributionShowTime;
@property (nonatomic) long long contentContributionShowTime;

+ (id)descriptor;

@end
