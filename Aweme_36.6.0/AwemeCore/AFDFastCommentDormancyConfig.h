@interface AFDFastCommentDormancyConfig : NSObject

@property (nonatomic) long long unclickTimesLimit;
@property (nonatomic) long long unshowDaysWithUid;
@property (nonatomic) long long unshowTimesLimit;
@property (nonatomic) long long maxShowTimesPerDay;
@property (nonatomic) long long maxUnclickDays;
@property (nonatomic) long long unshowDaysWithTotalFrequency;

- (id)init;

@end
