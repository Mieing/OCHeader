@class NSMutableArray;

@interface BDHybridCoreReporter : NSObject

@property (retain, nonatomic) NSMutableArray *reportBlockList;
@property (retain, nonatomic) NSMutableArray *filterList;
@property (nonatomic) BOOL kHMDReportSwitch;

+ (id)shareInstance;

- (BOOL)shouldReport:(id)a0;
- (void)filterReportWithAid:(id)a0;
- (id)alogFilterList;
- (void)reportPVToTea:(id)a0;
- (BOOL)isFilterForService:(id)a0;
- (void)addGlobalReportBlock:(id /* block */)a0;
- (void)filterReportWithAid:(id)a0 serviceList:(id)a1;
- (void)filterAllReport;
- (void)setHMDReportSwitch:(BOOL)a0;
- (void)reportSingleDic:(id)a0 forService:(id)a1;
- (void).cxx_destruct;

@end
