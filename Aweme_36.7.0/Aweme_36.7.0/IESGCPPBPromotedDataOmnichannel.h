@class NSString;

@interface IESGCPPBPromotedDataOmnichannel : GPBMessage

@property (copy, nonatomic) NSString *title;
@property (nonatomic) int taskStartTime;
@property (nonatomic) int taskEndTime;
@property (nonatomic) int dataUpdateTime;
@property (nonatomic) int ranking;
@property (nonatomic) int score;
@property (copy, nonatomic) NSString *predictionIncome;
@property (nonatomic) int nextLevelScoreGap;
@property (nonatomic) int nextLevelIncomeGap;

+ (id)descriptor;

@end
