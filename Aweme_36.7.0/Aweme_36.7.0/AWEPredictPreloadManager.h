@class NSArray, NSMutableArray, AWEPredictPreloadStrategy;

@interface AWEPredictPreloadManager : NSObject

@property (retain, nonatomic) AWEPredictPreloadStrategy *preloadStrategy;
@property (retain, nonatomic) NSMutableArray *actions;
@property (retain, nonatomic) NSArray *predictPreloadTasks;

+ (id)sharedInstance;

- (void)beginCounting;
- (void)endCounting;
- (void)countAction:(id)a0;
- (void)resetDefaultTasks;
- (void)resetTasksWithMapping:(id)a0;
- (void)configurePreloadStrategyWithDirectionIndex:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)updateSettings;

@end
