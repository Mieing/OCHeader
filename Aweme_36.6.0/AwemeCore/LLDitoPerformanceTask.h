@class LLDitoPerformanceModel;

@interface LLDitoPerformanceTask : NSObject

@property (nonatomic) double taskStartTime;
@property (retain, nonatomic) LLDitoPerformanceModel *performanceModel;
@property (nonatomic) BOOL hasEnded;

- (void)appendExtraPerformanceParams:(id)a0;
- (id)initTaskWithPerformanceModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)endTask;

@end
