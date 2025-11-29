@class NSString;

@interface AppMonitorEventConfig : NSObject

@property (retain, nonatomic) NSString *eventId;
@property (retain, nonatomic) NSString *aggregateEventArgsKey;
@property (nonatomic) long long eventType;
@property (nonatomic) BOOL isOpen;
@property (nonatomic) long long triggerCount;
@property (nonatomic) long long statisticsInterval;

+ (long long)triggerCount:(id)a0;
+ (void)setIsOpen:(BOOL)a0;
+ (BOOL)isOpen;
+ (void)setTriggerCount:(long long)a0;
+ (long long)eventType;
+ (id)sharedInstance;
+ (void)setStatisticsInterval:(long long)a0;
+ (long long)statisticsInterval;
+ (id)eventId;

- (void).cxx_destruct;
- (id)init;

@end
