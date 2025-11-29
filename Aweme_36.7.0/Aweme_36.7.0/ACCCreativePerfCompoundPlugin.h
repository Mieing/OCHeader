@class NSString, NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, ACCPerfReportDelegate;

@interface ACCCreativePerfCompoundPlugin : NSObject <ACCCreativePerfPlugin>

@property (retain, nonatomic) NSMutableArray *plugins;
@property (weak, nonatomic) id<ACCPerfReportDelegate> reportDelegate;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *actionName;
@property (copy, nonatomic) NSDictionary *monitorParams;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sampleQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)compoundPlugin;

- (void)prepareWithConfig:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (void)stop;
- (void)start;
- (void)addPlugin:(id)a0;

@end
