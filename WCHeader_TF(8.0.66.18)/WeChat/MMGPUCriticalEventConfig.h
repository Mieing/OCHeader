@class MMGPUCriticalEvent;

@interface MMGPUCriticalEventConfig : NSObject

@property (nonatomic) unsigned long long eventTag;
@property (nonatomic) unsigned long long eventSubTag;
@property (nonatomic) unsigned int checkTime;
@property (nonatomic) unsigned int checkCount;
@property (nonatomic) unsigned int reportLimit;
@property (nonatomic) unsigned int reportCount;
@property (nonatomic) double criticalUsage;
@property (nonatomic) double averageUsageMax;
@property (nonatomic) double reportRatio;
@property (nonatomic) double lastReportTime;
@property (retain, nonatomic) MMGPUCriticalEvent *criticalEvent;

- (void).cxx_destruct;

@end
