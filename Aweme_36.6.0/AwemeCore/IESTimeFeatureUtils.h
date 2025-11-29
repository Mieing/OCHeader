@interface IESTimeFeatureUtils : NSObject

@property (nonatomic) long long minute;
@property (nonatomic) long long minuteUpdateTime;
@property (nonatomic) long long hour;
@property (nonatomic) long long hourUpdateTime;
@property (nonatomic) long long weekDay;
@property (nonatomic) long long monthDay;

+ (id)sharedInstance;

- (void)updateCurTimes;

@end
