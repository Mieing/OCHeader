@class NSString, CJPayHybridPerformanceModel;

@interface CJPayHybridPerformanceMonitor : NSObject

@property (copy, nonatomic) NSString *urlStr;
@property (retain, nonatomic) CJPayHybridPerformanceModel *performanceModel;
@property (copy, nonatomic) NSString *kernelTypeStr;

- (id)initWith:(id)a0 callAPITime:(double)a1;
- (void)trackPerformanceStage:(long long)a0 defaultTimeStamp:(double)a1;
- (void)p_uploadPerformaceFirstPageStartedLog;
- (void).cxx_destruct;
- (id)initWith:(id)a0;

@end
