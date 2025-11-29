@class NSString, MXMetricManager;

@interface AWEMetricMonitor : NSObject <MXMetricManagerSubscriber>

@property (retain, nonatomic) MXMetricManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)didReceiveMetricPayloads:(id)a0;

@end
