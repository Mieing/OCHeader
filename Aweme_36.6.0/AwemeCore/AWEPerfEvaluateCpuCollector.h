@class NSString;

@interface AWEPerfEvaluateCpuCollector : NSObject <AWEPerfEvaluateCollector>

@property (readonly, nonatomic) BOOL needSystemCpuUsage;
@property (readonly, nonatomic) BOOL needProcCpuUsage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
