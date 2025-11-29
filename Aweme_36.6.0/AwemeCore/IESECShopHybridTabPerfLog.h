@class NSMutableArray;

@interface IESECShopHybridTabPerfLog : NSObject

@property (retain, nonatomic) NSMutableArray *cpuMetrics;
@property (retain, nonatomic) NSMutableArray *fpsMetrics;
@property (nonatomic) long long jsbCount;
@property (retain, nonatomic) NSMutableArray *JSBIntercept;
@property (nonatomic) double tabInitTime;
@property (nonatomic) double selectionStartTime;
@property (nonatomic) double selectionEndTime;
@property (nonatomic) double tabContainerReadyTime;

- (double)getAvg:(id)a0;
- (double)getTotal:(id)a0;
- (void)addPreviewPerf:(double)a0 cpuUsage:(double)a1;
- (void)addPreviewJSBInvoke:(id)a0 params:(id)a1 intercepted:(BOOL)a2 limitParamKey:(id)a3 limitParamValue:(id)a4;
- (id)previewCPUMetrics;
- (id)previewFPSMetrics;
- (id)previewJSBMetrics;
- (void).cxx_destruct;
- (id)init;
- (double)getMedian:(id)a0;

@end
