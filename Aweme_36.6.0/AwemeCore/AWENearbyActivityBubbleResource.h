@class NSString;

@interface AWENearbyActivityBubbleResource : AWEBaseApiModel

@property (nonatomic) long long activityID;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) long long maxRepeatedCount;
@property (nonatomic) long long repeatedTimesPerDay;
@property (nonatomic) long long delayTimeAfterColdLaunch;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long dayCountPerPeriod;
@property (nonatomic) long long timesPerPeriod;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
