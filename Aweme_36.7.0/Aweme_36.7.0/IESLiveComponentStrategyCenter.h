@interface IESLiveComponentStrategyCenter : NSObject

@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL supportComponentLoadPriority;

- (id)p01ComponentLoadConfig;
- (BOOL)componentLoadEnableWithLevel:(long long)a0;
- (long long)componentLoadStrategyWithLevel:(long long)a0;
- (long long)componentLoadLoopNumberWithLevel:(long long)a0;
- (double)componentLoadLoopMaxTimeWithLevel:(long long)a0;
- (BOOL)componentCreateEnable;
- (long long)componentCreateStrategy;
- (long long)componentCreateLoopNumber;
- (double)componentCreateLoopMaxTime;
- (id)configWithLevel:(long long)a0;
- (BOOL)componentLoadPriorityEanble;
- (id)p23ComponentLoadConfig;
- (id)componentCreateConfig;
- (id)init;

@end
