@class NSString;

@interface TimerIntervalFatal : GPBMessage

@property (nonatomic) int subtype;
@property (copy, nonatomic) NSString *callInfo;
@property (nonatomic) double interval;
@property (nonatomic) double createdTime;

+ (id)descriptor;

@end
