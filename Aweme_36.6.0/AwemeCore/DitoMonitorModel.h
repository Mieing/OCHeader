@class NSDictionary;

@interface DitoMonitorModel : NSObject

@property (nonatomic) long long triggerTimes;
@property (nonatomic) double duration;
@property (nonatomic) double currentStart;
@property (copy, nonatomic) NSDictionary *params;

- (void).cxx_destruct;

@end
