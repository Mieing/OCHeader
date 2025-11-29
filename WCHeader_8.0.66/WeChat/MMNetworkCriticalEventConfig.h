@class MMNetworkCriticalEvent;

@interface MMNetworkCriticalEventConfig : NSObject

@property (nonatomic) unsigned long long eventTag;
@property (nonatomic) unsigned long long eventSubTag;
@property (nonatomic) unsigned int checkTime;
@property (nonatomic) unsigned int checkCount;
@property (nonatomic) unsigned int reportLimit;
@property (nonatomic) unsigned int reportCount;
@property (nonatomic) unsigned long long criticalUsage;
@property (nonatomic) double reportRatio;
@property (nonatomic) double lastReportTime;
@property (retain, nonatomic) MMNetworkCriticalEvent *criticalEvent;

- (void).cxx_destruct;

@end
