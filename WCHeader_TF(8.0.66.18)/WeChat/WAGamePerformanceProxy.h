@class NSString;

@interface WAGamePerformanceProxy : NSObject <IWAGamePerformanceService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)reportGamePerformanceItem:(id)a0;
+ (long long)getGPUUtilizationDevice;
+ (long long)getCPUUtilizationDevice;
+ (long long)getCPUUtilization;


@end
