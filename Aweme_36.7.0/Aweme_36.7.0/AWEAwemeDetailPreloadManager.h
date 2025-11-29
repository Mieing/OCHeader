@class NSArray;

@interface AWEAwemeDetailPreloadManager : NSObject

@property (class, readonly, nonatomic) BOOL isDetailFeedCellPreload;
@property (class, readonly, nonatomic) long long scrollContinuousDirectionCount;
@property (class, readonly, nonatomic) double cellPreloadDelay;
@property (class, readonly, nonatomic) NSArray *closeClassNames;
@property (class, readonly, nonatomic) long long cellPreloadDelayCount;

+ (BOOL)enablePreloadCellOptimization:(id)a0;
+ (BOOL)enableCheckVideoCacheSizeWhenScrollEndWithRefer:(id)a0;
+ (BOOL)enableDynamicVideoCacheSizeThresholdForCellPreloadWhenScrollEndWithRefer:(id)a0;
+ (long long)staticVideoCacheSizeThresholdToTriggerCellPreloadWhenScrollEndWithRefer:(id)a0;
+ (BOOL)enablePreloadCellOptimizationForFirstVideo:(id)a0;
+ (unsigned long long)cellPreloadTimeForFirstVideoInInflow;
+ (BOOL)enableOptimizeCellPreloadProcessForFirstVideo:(id)a0;
+ (double)preloadCellDelayTimeForFirstVideoInflow:(id)a0;
+ (BOOL)cellPreloadSupportLoadMoreEnable:(id)a0;
+ (BOOL)cellPreloadOptimizeEnable:(id)a0;
+ (BOOL)enableCellPreloadOptimizeInCommonInflow:(id)a0;

@end
