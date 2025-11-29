@interface MMMetricsEventConfig : NSObject

@property (nonatomic) unsigned long long eventTag;
@property (nonatomic) unsigned long long eventSubTag;
@property (nonatomic) double reportRatio;
@property (nonatomic) BOOL enableCPUEvent;
@property (nonatomic) unsigned int reportLimitForCPUEvent;
@property (nonatomic) unsigned int checkTimeForCPUEvent;
@property (nonatomic) double criticalUsageForCPUEvent;
@property (nonatomic) BOOL enableGPUEvent;
@property (nonatomic) unsigned int reportLimitForGPUEvent;
@property (nonatomic) unsigned int checkTimeForGPUEvent;
@property (nonatomic) double criticalUsageForGPUEvent;
@property (nonatomic) BOOL enableNetworkEvent;
@property (nonatomic) unsigned int reportLimitForNetworkEvent;
@property (nonatomic) unsigned int checkTimeForNetworkEvent;
@property (nonatomic) double criticalUsageForNetworkEvent;

@end
