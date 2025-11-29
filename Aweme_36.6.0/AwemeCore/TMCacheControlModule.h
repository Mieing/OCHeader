@interface TMCacheControlModule : TMModule

- (id)cacheControlConfig;
- (void)setupCacheProcesser;
- (id)transToCahceGroupModels:(id)a0;
- (void)updateWithConfig:(id)a0;
- (void)start;
- (void)startRunning;
- (void)setupConfig;

@end
