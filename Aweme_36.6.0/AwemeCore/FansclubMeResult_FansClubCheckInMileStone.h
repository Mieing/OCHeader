@class NSString;

@interface FansclubMeResult_FansClubCheckInMileStone : IESLivePBBaseMessage

@property (nonatomic) long long mileStoneValue;
@property (nonatomic) BOOL hasFinished;
@property (nonatomic) long long timecost;
@property (nonatomic) long long minTimecost;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;

+ (id)descriptor;

@end
