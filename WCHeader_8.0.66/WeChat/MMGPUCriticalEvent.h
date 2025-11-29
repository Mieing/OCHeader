@class NSDictionary;

@interface MMGPUCriticalEvent : NSObject

@property (nonatomic) double beginTime;
@property (nonatomic) double endTime;
@property (nonatomic) double averageUsage;
@property (nonatomic) unsigned long long eventTag;
@property (nonatomic) unsigned long long eventSubTag;
@property (retain, nonatomic) NSDictionary *eventInfo;

- (void).cxx_destruct;

@end
