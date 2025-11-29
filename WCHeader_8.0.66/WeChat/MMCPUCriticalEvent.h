@class NSDictionary;

@interface MMCPUCriticalEvent : NSObject

@property (nonatomic) double beginTime;
@property (nonatomic) double endTime;
@property (nonatomic) float averageUsage;
@property (nonatomic) unsigned long long eventTag;
@property (nonatomic) unsigned long long eventSubTag;
@property (retain, nonatomic) NSDictionary *eventInfo;

- (void).cxx_destruct;

@end
