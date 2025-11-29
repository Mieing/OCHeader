@class NSArray, NSMutableArray;
@protocol BDHMReportPlugin;

@interface BDHybridMonitorXCoreReporter : NSObject

@property (retain, nonatomic) NSMutableArray *reportBlockList;
@property (retain, nonatomic) NSArray *dataCleaningKey;
@property (retain, nonatomic) id<BDHMReportPlugin> reportPlugin;

+ (id)shareInstance;

- (BOOL)shouldReport:(id)a0;
- (void)reportSingleDic:(id)a0 forService:(id)a1 bid:(id)a2 sampleInfo:(id)a3;
- (void)reportSingleDic:(id)a0 forService:(id)a1 bid:(id)a2;
- (id)alogFilterList;
- (BOOL)isFilterForService:(id)a0;
- (void)addGlobalReportBlock:(id /* block */)a0;
- (id)getTeaParams:(id)a0 data:(id)a1;
- (void)reportHMDTotal:(id)a0;
- (void)reportAndFormatService:(id)a0 bid:(id)a1 data:(id)a2 sampleInfo:(id)a3;
- (void)dataCleaningWithDic:(id)a0;
- (void).cxx_destruct;
- (id)getEventType:(id)a0;

@end
