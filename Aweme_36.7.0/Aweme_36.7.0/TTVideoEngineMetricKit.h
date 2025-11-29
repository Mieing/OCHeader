@class NSString;

@interface TTVideoEngineMetricKit : NSObject <MXMetricManagerSubscriber>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getDiagnoseReport;
+ (void)clearInfo;
+ (void)addSubscriber:(id)a0;
+ (void)removeSubscriber:(id)a0;

- (void)didReceiveMetricPayloads:(id)a0;

@end
