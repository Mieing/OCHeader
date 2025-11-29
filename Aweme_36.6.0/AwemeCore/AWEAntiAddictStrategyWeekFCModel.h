@class NSString;

@interface AWEAntiAddictStrategyWeekFCModel : MTLModel <MTLJSONSerializing, AWEAntiAddictWeekFreqLimitProtocol>

@property (readonly, nonatomic) long long beginDay;
@property (readonly, nonatomic) long long endDay;
@property (readonly, nonatomic) long long beginTime;
@property (readonly, nonatomic) long long endTime;
@property (readonly, nonatomic) long long maxTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isTimeTokenValid:(long long)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isWithinWeek;
- (BOOL)isValid;

@end
