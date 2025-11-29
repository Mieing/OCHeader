@class NSString;

@interface AWEPerfEvaluateGpuCollector : NSObject <AWEPerfEvaluateCollector>

@property (nonatomic) BOOL needGpuUsage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectFeatures;
- (id)initWithJSONConfig:(id)a0;

@end
