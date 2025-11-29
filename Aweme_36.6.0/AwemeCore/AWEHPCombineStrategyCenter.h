@class NSLock, NSMutableArray;

@interface AWEHPCombineStrategyCenter : NSObject

@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSMutableArray *strategies;

- (void)onRequestSuccess;
- (BOOL)checkCanRequestWithScene:(id)a0;
- (BOOL)checkCanRequestWithRequest:(id)a0;
- (void)registerStrategyWithClass:(Class)a0;
- (id)safeGetStrategies;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
