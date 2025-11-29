@interface CJPayHybridPerformanceModel : NSObject

@property (nonatomic) double callAPITime;
@property (nonatomic) double createFinishdedTime;
@property (nonatomic) double startLoadURLTime;
@property (nonatomic) double pageStartedTime;
@property (nonatomic) double pageLoadFinishedTime;

- (long long)hybridContainerPrepareTime;
- (long long)hybridContainerCreatedFinishedTime;
- (long long)hybridStartURLLoadTime;
- (long long)hybridPageStartedTime;
- (long long)hybridPageLoadFinishedTime;

@end
