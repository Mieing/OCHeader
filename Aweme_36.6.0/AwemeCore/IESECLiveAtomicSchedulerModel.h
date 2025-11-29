@class NSString, NSNumber;

@interface IESECLiveAtomicSchedulerModel : NSObject

@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSString *action;
@property (retain, nonatomic) id params;
@property (nonatomic) long long scheduleType;
@property (retain, nonatomic) NSNumber *startDelay;
@property (retain, nonatomic) NSNumber *interval;
@property (retain, nonatomic) NSNumber *repeatTimes;

- (void).cxx_destruct;

@end
