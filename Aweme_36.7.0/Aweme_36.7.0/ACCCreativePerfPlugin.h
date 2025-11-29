@class NSString, NSDictionary, NSObject;
@protocol OS_dispatch_queue, ACCPerfReportDelegate;

@interface ACCCreativePerfPlugin : NSObject <ACCCreativePerfPlugin>

@property (weak, nonatomic) id<ACCPerfReportDelegate> reportDelegate;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *actionName;
@property (copy, nonatomic) NSDictionary *monitorParams;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sampleQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareWithConfig:(id)a0;
- (void)reportDataWithKey:(id)a0 data:(id)a1;
- (void).cxx_destruct;
- (void)clear;
- (void)stop;
- (void)start;

@end
