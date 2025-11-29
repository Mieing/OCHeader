@class DailyGoal, AnchorPopularityCardStatus, NSMutableArray, WeeklyGoal;

@interface GetPopularityCardResponse_Data : IESLivePBBaseMessage

@property (nonatomic) long long activityStartTime;
@property (nonatomic) long long activityEndTime;
@property (retain, nonatomic) DailyGoal *dailyGoal;
@property (nonatomic) BOOL hasDailyGoal;
@property (retain, nonatomic) WeeklyGoal *weeklyGoal;
@property (nonatomic) BOOL hasWeeklyGoal;
@property (retain, nonatomic) NSMutableArray *cardsArray;
@property (readonly, nonatomic) unsigned long long cardsArray_Count;
@property (retain, nonatomic) AnchorPopularityCardStatus *popularityCardStatus;
@property (nonatomic) BOOL hasPopularityCardStatus;
@property (nonatomic) BOOL firstTimeOpenThisWeek;

+ (id)descriptor;

@end
